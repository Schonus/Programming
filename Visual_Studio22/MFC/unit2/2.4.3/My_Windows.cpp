#include <Windows.h>
LRESULT CALLBACK WndProc(HWND,UINT,WPARAM,LPARAM);
//---------------------��������ں����Ĵ���----------------
int  WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow)
{
    WNDCLASSEX wcex;
    HWND hWnd;
    MSG msg;
    TCHAR lpszWindowClass[] = "����ʾ��";   //��������
    TCHAR lpszTitle[] = "My Windows";      //���ڱ�����

//---------���³�ʼ��������---------

    wcex.cbSize = sizeof(WNDCLASSEX);     //������Ĵ�С
    wcex.style = 0;                       //������ʽΪĬ����ʽ
    wcex.lpfnWndProc = WndProc;           //���崰����Ϣ����������
    wcex.cbClsExtra = 0;                  //����������չ
    wcex.cbWndExtra = 0;                  //����ʵ������չ
    wcex.hInstance = hInstance;           //��ǰʵ�����
    wcex.hIcon = LoadIcon(hInstance,MAKEINTRESOURCE(IDI_APPLICATION)); //���ڵ�ͼ��ΪĬ��ͼ��
    wcex.hCursor = LoadCursor(NULL,IDC_ARROW);                         //���ڲ��ü�ͷ���
    wcex.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);          //���ڱ���Ϊ��ɫ
    wcex.lpszMenuName = NULL;                                          //�������޲˵�
    wcex.lpszClassName = lpszWindowClass;                              //��������Ϊ"����ʾ��"
    wcex.hIconSm = LoadIcon(wcex.hInstance,MAKEINTRESOURCE(IDI_APPLICATION));
                                                                       //���ڵ�Сͼ��ΪĬ��ͼ��
    if(!RegisterClassEx(&wcex))                                        //���ע��ʧ���򷢳�����
    {
        MessageBox(NULL,"������ע��ʧ�ܣ�","����ע��",NULL);
        return 1;
    }
    //���½��д�������
    hWnd = CreateWindow(
        lpszWindowClass,                                                 //��������
        lpszTitle,                                                       //����ʵ���ı�����
        WS_OVERLAPPEDWINDOW,                                             //���ڵķ��
        CW_USEDEFAULT,CW_USEDEFAULT,                                     //���ڵ����Ͻ�����ΪĬ��ֵ
        CW_USEDEFAULT,CW_USEDEFAULT,                                     //���ڵĸߺͿ�ΪĬ��ֵ
        NULL,                                                            //�˴����޸�����
        NULL,                                                            //�˴��������˵�
        hInstance,                                                       //����Ӧ�ó���ĵ�ǰ���
        NULL,                                                            //��ʹ�ø�ֵ
    );
    if(!hWnd)                                                            //�����ڴ���ʧ���򷢳�����
    {
        MessageBox(NULL, "��������ʧ�ܣ�", "��������",NULL);
        return 1;
    }
    ShowWindow(hWnd,nCmdShow);                                            //��ʾ����
    UpdateWindow(hWnd);                                                   //�����û���
    while(GetMessage(&msg,NULL,0,0))                                      //��Ϣѭ��
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    return msg.wParam;                                                     //������ֹʱ����Ϣ����ϵͳ
}
//-------------------�����Ǵ��ں����Ĵ���------------------

LRESULT CALLBACK WndProc(HWND hWnd, UINT message,WPARAM wParam,LPARAM lParam)
{
    switch (message)
    {
    case WM_DESTROY:
        PostQuitMessage(0);                                                 //����PostQuitMessage����WM_QUIT
        break;
    default:
        return DefWindowProc(hWnd, message, wParam, lParam);
        break;
    }
}