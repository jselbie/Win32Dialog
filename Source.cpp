

#include <windows.h>
#include <atlbase.h>
#include <atlcom.h>
#include <atlwin.h>
#include <atlstr.h>

#include "resource.h"

class AppDialog : public CDialogImpl<AppDialog>
{
public:
    const static int IDD = IDD_DIALOG1;

    BEGIN_MSG_MAP(AppDialog)
        MESSAGE_HANDLER(WM_INITDIALOG, OnInitDialog)
        COMMAND_ID_HANDLER(IDOK, OnOk)
        COMMAND_ID_HANDLER(IDCANCEL, OnCancel)
    END_MSG_MAP()

    LRESULT OnInitDialog(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL &bHandled);
    LRESULT OnOk(WORD code, WORD ctrlid, HWND ctrl, BOOL& bHandled);
    LRESULT OnCancel(WORD code, WORD ctrlid, HWND ctrl, BOOL& bHandled);
};

LRESULT AppDialog::OnInitDialog(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL &bHandled)
{
    return 0;
}

LRESULT AppDialog::OnOk(WORD code, WORD ctrlid, HWND ctrl, BOOL& bHandled)
{
    EndDialog(0);

    return 0;
}

LRESULT AppDialog::OnCancel(WORD code, WORD ctrlid, HWND ctrl, BOOL& bHandled)
{
    EndDialog(0);
    return 0;
}

int CALLBACK WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    SetProcessDpiAwareness(PROCESS_PER_MONITOR_DPI_AWARE);
    AppDialog dlg;
    dlg.DoModal();
    return 0;
}
