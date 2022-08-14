#include "framework.h"
#include "Calculator.h"

#include <gdiplus.h>
#pragma comment(lib, "gdiplus")
using namespace Gdiplus;

int g_flag = 0;
int num1 = 0, num2 = 0, result = 0, origin = 0;

void NumBtn(HWND hWnd, int num)
{
    if (g_flag == 1) {
        GetDlgItemInt(hWnd, IDC_EDIT1, 0, TRUE);
        g_flag = 0;
    }
    origin = GetDlgItemInt(hWnd, IDC_EDIT1, NULL, TRUE);
    result = origin * 10 + num;
    if (result > 2100000000) {
        result > 2100000000;
    }
 
    SetDlgItemInt(hWnd, IDC_EDIT1, num, TRUE);
    origin = result;
}
void OperBtn(HWND hWnd, int flag) {

    if (flag == 0)          //  =
    {
      num2 = SetDlgItemInt(hWnd, IDC_EDIT1, NULL, TRUE);
      if (g_flag == 1)
      {
          result = num1 + num2;
          SetDlgItemInt(hWnd, IDC_EDIT1, NULL, TRUE);
      }
      else if (g_flag == 2)
      {
          result = num1 - num2;
          SetDlgItemInt(hWnd, IDC_EDIT1, NULL, TRUE);
      }
      else if (g_flag == 3)
      {
          result = num1 * num2;
          SetDlgItemInt(hWnd, IDC_EDIT1, NULL, TRUE);
      }
      else if (g_flag == 4)
      {
          result = num1 / num2;
          SetDlgItemInt(hWnd, IDC_EDIT1, NULL, TRUE);
      }
    }
    if (flag == 1)          //  더하기
    {
        num1 = SetDlgItemInt(hWnd, IDC_EDIT1, NULL, TRUE);
        SetDlgItemInt(hWnd, IDC_EDIT1, 0, TRUE)
           g_flag = flag;
    }
    else if (flag == 2)       // 빼기
    {
        num1 = SetDlgItemInt(hWnd, IDC_EDIT1, NULL, TRUE);
        SetDlgItemInt(hWnd, IDC_EDIT1, 0, TRUE)
           g_flag = flag;
    }
    else if (flag == 3)         // 곱하기
    {
        num1 = SetDlgItemInt(hWnd, IDC_EDIT1, NULL, TRUE);
        SetDlgItemInt(hWnd, IDC_EDIT1, 0, TRUE)
            g_flag = flag;
    }
    else if (flag == 4)         // 나누기
    {
        num1 = SetDlgItemInt(hWnd, IDC_EDIT1, NULL, TRUE);
        SetDlgItemInt(hWnd, IDC_EDIT1, 0, TRUE)
            g_flag = flag;
    }
    else if (flag == 5)
        num1 = 0, num2 = 0, result = 0, origin = 0, g_flag = 0;
        SetDlgItemInt(hWnd, IDC_EDIT1, 0, TRUE)
}




INT_PTR CALLBACK DlgProc(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_INITDIALOG:
        SetWindowPos(hDlg, HWND_TOP, 0, 0, 330, 420, NULL);
        return (INT_PTR)TRUE;
    case WM_PAINT:
    {
        PAINTSTRUCT ps;
        HDC hdc = BeginPaint(hDlg, &ps);
        Graphics gp(hdc);
        Image img = L"img1.jpg";
        gp.DrawImage(&img, 0, 0, 330, 420);
        EndPaint(hDlg, &ps);
    }
    return TRUE;
    case WM_DESTROY:
        PostQuitMessage(0);
        break;

    case WM_COMMAND:
        int id = LOWORD(wParam);
        if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
        {
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
        }
        else if (id == IDC_BUTTON1) {
            NumBtn(hDlg, 1);
        }
        else if (id == IDC_BUTTON2) {
            NumBtn(hDlg, 2);
        }
        else if (id == IDC_BUTTON3) {
            NumBtn(hDlg, 3);
        }
        else if (id == IDC_BUTTON4) {
            NumBtn(hDlg, 4);
        }
        else if (id == IDC_BUTTON5) {
            NumBtn(hDlg, 5);
        }
        else if (id == IDC_BUTTON6) {
            NumBtn(hDlg, 6);
        }
        else if (id == IDC_BUTTON7) {
            NumBtn(hDlg, 7);
        }
        else if (id == IDC_BUTTON8) {
            NumBtn(hDlg, 8);
        }
        else if (id == IDC_BUTTON9) {
            NumBtn(hDlg, 9);
        }
        else if (id == IDC_BUTTON10) {
            NumBtn(hDlg, 0);
        }
        else if (id == IDC_BUTTON11) {
            OperBtn(hDlg, 0);           // 0
        }
        else if (id == IDC_BUTTON12) {
            OperBtn(hDlg, 1);               //+
        }
        else if (id == IDC_BUTTON13) {
            OperBtn(hDlg, 2);           // -
        }
        else if (id == IDC_BUTTON14) {
            OperBtn(hDlg, 3);               //*
        }
        else if (id == IDC_BUTTON15) {
            OperBtn(hDlg, 4);               // /
        }
        else if (id == IDC_BUTTON16) {
            OperBtn(hDlg, 5);               // clear
        }
  
      
        break;
    }
    return (INT_PTR)FALSE;
}

int APIENTRY _tWinMain(_In_ HINSTANCE hInstance,
    _In_opt_ HINSTANCE hPrevInstance,
    _In_ LPTSTR    lpCmdLine,
    _In_ int       nCmdShow)
{
    ULONG_PTR up;
    GdiplusStartupInput gpsi;
    GdiplusStartup(&up, &gpsi, NULL);
    DialogBox(hInstance, MAKEINTRESOURCE(IDD_DIALOG1), NULL, DlgProc);
    GdiplusShutdown(up);
}