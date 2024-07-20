#import "C:\\Program Files\\Microsoft Office\\root\\vfs\\ProgramFilesCommonX86\\Microsoft Shared\\OFFICE16\\MSO.DLL" \
    rename_namespace("Office"), named_guids, raw_interfaces_only

#import "C:\\Program Files\\Microsoft Office\\root\\Office16\\EXCEL.EXE" \
    rename("DialogBox", "ExcelDialogBox"), rename_namespace("Excel"), named_guids, raw_interfaces_only

#include <Windows.h>
#include <ole2.h>
#include <oleauto.h>
#include <tchar.h>
#include <string>

// 全局变量
HINSTANCE hInst;
HWND hWndButton;

// 函数声明
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
void CreateExcelFile();

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    // 保存实例句柄到全局变量
    hInst = hInstance;

    // 初始化窗口类
    WNDCLASSEX wcex;
    wcex.cbSize = sizeof(WNDCLASSEX);
    wcex.style = CS_HREDRAW | CS_VREDRAW;
    wcex.lpfnWndProc = WndProc;
    wcex.cbClsExtra = 0;
    wcex.cbWndExtra = 0;
    wcex.hInstance = hInstance;
    wcex.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    wcex.hCursor = LoadCursor(NULL, IDC_ARROW);
    wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    wcex.lpszMenuName = NULL;
    wcex.lpszClassName = _T("ExcelWindowClass");
    wcex.hIconSm = LoadIcon(NULL, IDI_APPLICATION);

    // 注册窗口类
    if (!RegisterClassEx(&wcex)) {
        MessageBox(NULL, _T("窗口注册失败！"), _T("错误"), MB_ICONERROR);
        return 1;
    }

    // 创建窗口
    HWND hWnd = CreateWindow(_T("ExcelWindowClass"), _T("生成Excel表格"), WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT, 320, 240, NULL, NULL, hInstance, NULL);

    if (!hWnd) {
        MessageBox(NULL, _T("窗口创建失败！"), _T("错误"), MB_ICONERROR);
        return 1;
    }

    // 创建一个按钮
    hWndButton = CreateWindow(_T("BUTTON"), _T("生成Excel表格"), WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,
        50, 50, 200, 50, hWnd, NULL, hInstance, NULL);

    // 显示窗口
    ShowWindow(hWnd, nCmdShow);
    UpdateWindow(hWnd);

    // 消息循环
    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return (int)msg.wParam;
}

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam) {
    switch (message) {
    case WM_COMMAND:
        if ((HWND)lParam == hWndButton) {
            CreateExcelFile();
        }
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    default:
        return DefWindowProc(hWnd, message, wParam, lParam);
    }
    return 0;
}

void CreateExcelFile() {
    // 初始化COM
    CoInitialize(NULL);

    // 创建Excel应用程序实例
    Excel::_ApplicationPtr pExcel;
    HRESULT hr = CoCreateInstance(__uuidof(Excel::Application), NULL, CLSCTX_LOCAL_SERVER, IID_PPV_ARGS(&pExcel));
    if (FAILED(hr)) {
        MessageBox(NULL, _T("Excel应用程序创建失败！"), _T("错误"), MB_ICONERROR);
        CoUninitialize();
        return;
    }

    // 添加一个工作簿
    Excel::_WorkbookPtr pWorkbook = pExcel->Workbooks->Add(Excel::xlWorksheet);

    // 获取第一个工作表
    Excel::_WorksheetPtr pWorksheet = pWorkbook->Worksheets->Item[1];

    // 写入数据到单元格
    pWorksheet->Cells[1][1] = _variant_t("Hello");
    pWorksheet->Cells[1][2] = _variant_t("World");

    // 保存工作簿
    std::wstring filePath = L"C:\\Users\\username\\Desktop\\example.xlsx";
    pWorkbook->SaveAs(_bstr_t(filePath.c_str()));

    // 关闭工作簿和Excel应用程序
    pWorkbook->Close();
    pExcel->Quit();

    // 释放对象
    pWorksheet = nullptr;
    pWorkbook = nullptr;
    pExcel = nullptr;

    // 释放COM资源
    CoUninitialize();

    MessageBox(NULL, _T("Excel表格生成成功！"), _T("提示"), MB_ICONINFORMATION);
}
