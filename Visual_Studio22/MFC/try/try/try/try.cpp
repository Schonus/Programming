#import "C:\\Program Files\\Microsoft Office\\root\\vfs\\ProgramFilesCommonX86\\Microsoft Shared\\OFFICE16\\MSO.DLL" \
    rename_namespace("Office"), named_guids, raw_interfaces_only

#import "C:\\Program Files\\Microsoft Office\\root\\Office16\\EXCEL.EXE" \
    rename("DialogBox", "ExcelDialogBox"), rename_namespace("Excel"), named_guids, raw_interfaces_only

#include <Windows.h>
#include <ole2.h>
#include <oleauto.h>
#include <tchar.h>
#include <string>

// ȫ�ֱ���
HINSTANCE hInst;
HWND hWndButton;

// ��������
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
void CreateExcelFile();

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    // ����ʵ�������ȫ�ֱ���
    hInst = hInstance;

    // ��ʼ��������
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

    // ע�ᴰ����
    if (!RegisterClassEx(&wcex)) {
        MessageBox(NULL, _T("����ע��ʧ�ܣ�"), _T("����"), MB_ICONERROR);
        return 1;
    }

    // ��������
    HWND hWnd = CreateWindow(_T("ExcelWindowClass"), _T("����Excel���"), WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT, 320, 240, NULL, NULL, hInstance, NULL);

    if (!hWnd) {
        MessageBox(NULL, _T("���ڴ���ʧ�ܣ�"), _T("����"), MB_ICONERROR);
        return 1;
    }

    // ����һ����ť
    hWndButton = CreateWindow(_T("BUTTON"), _T("����Excel���"), WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,
        50, 50, 200, 50, hWnd, NULL, hInstance, NULL);

    // ��ʾ����
    ShowWindow(hWnd, nCmdShow);
    UpdateWindow(hWnd);

    // ��Ϣѭ��
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
    // ��ʼ��COM
    CoInitialize(NULL);

    // ����ExcelӦ�ó���ʵ��
    Excel::_ApplicationPtr pExcel;
    HRESULT hr = CoCreateInstance(__uuidof(Excel::Application), NULL, CLSCTX_LOCAL_SERVER, IID_PPV_ARGS(&pExcel));
    if (FAILED(hr)) {
        MessageBox(NULL, _T("ExcelӦ�ó��򴴽�ʧ�ܣ�"), _T("����"), MB_ICONERROR);
        CoUninitialize();
        return;
    }

    // ���һ��������
    Excel::_WorkbookPtr pWorkbook = pExcel->Workbooks->Add(Excel::xlWorksheet);

    // ��ȡ��һ��������
    Excel::_WorksheetPtr pWorksheet = pWorkbook->Worksheets->Item[1];

    // д�����ݵ���Ԫ��
    pWorksheet->Cells[1][1] = _variant_t("Hello");
    pWorksheet->Cells[1][2] = _variant_t("World");

    // ���湤����
    std::wstring filePath = L"C:\\Users\\username\\Desktop\\example.xlsx";
    pWorkbook->SaveAs(_bstr_t(filePath.c_str()));

    // �رչ�������ExcelӦ�ó���
    pWorkbook->Close();
    pExcel->Quit();

    // �ͷŶ���
    pWorksheet = nullptr;
    pWorkbook = nullptr;
    pExcel = nullptr;

    // �ͷ�COM��Դ
    CoUninitialize();

    MessageBox(NULL, _T("Excel������ɳɹ���"), _T("��ʾ"), MB_ICONINFORMATION);
}
