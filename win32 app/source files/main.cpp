// Simple Windows Code
#include <windows.h>
#include "resource.h"

LRESULT CALLBACK
ClientDlgProc(HWND DialogWindow, UINT Message, WPARAM wParam, LPARAM lParam)
{
      // Process Messages
      switch(Message)
      {
      case WM_INITDIALOG:
           return FALSE;
      case WM_COMMAND:
      switch(wParam)
      {
      case IDCANCEL:
           EndDialog(DialogWindow, FALSE);
           return FALSE;
      default:
           break;
        }
        break;

     default:
            break;
     }
     return FALSE;
}

int APIENTRY
WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine,
        int nCmdShow)
{
        DialogBox((HINSTANCE) hInstance, MAKEINTRESOURCE(IDD_CLIENT), NULL,
                  (DLGPROC) ClientDlgProc);
         return 0;