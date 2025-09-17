#ifndef NEWPANEL_H
#define NEWPANEL_H

//(*Headers(NewPanel)
#include <wx/calctrl.h>
#include <wx/choicdlg.h>
#include <wx/clrpicker.h>
#include <wx/colordlg.h>
#include <wx/datectrl.h>
#include <wx/dateevt.h>
#include <wx/dialog.h>
#include <wx/dirctrl.h>
#include <wx/dirdlg.h>
#include <wx/fdrepdlg.h>
#include <wx/filedlg.h>
#include <wx/filepicker.h>
#include <wx/fontdlg.h>
#include <wx/fontpicker.h>
#include <wx/glcanvas.h>
#include <wx/grid.h>
#include <wx/html/htmlwin.h>
#include <wx/msgdlg.h>
#include <wx/panel.h>
#include <wx/printdlg.h>
#include <wx/progdlg.h>
#include <wx/richtext/richtextformatdlg.h>
#include <wx/richtext/richtextstyledlg.h>
#include <wx/richtext/richtextsymboldlg.h>
#include <wx/textdlg.h>
#include <wx/timectrl.h>
//*)

class NewPanel: public wxPanel
{
    public:

        NewPanel(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
        virtual ~NewPanel();

        //(*Declarations(NewPanel)
        wxCalendarCtrl* CalendarCtrl1;
        wxColourDialog* ColourDialog1;
        wxColourPickerCtrl* ColourPickerCtrl1;
        wxDatePickerCtrl* DatePickerCtrl1;
        wxDirDialog* DirDialog1;
        wxFileDialog* FileDialog1;
        wxFilePickerCtrl* FilePickerCtrl1;
        wxFindReplaceData findReplaceData_1;
        wxFindReplaceDialog* FindReplaceDialog1;
        wxFontDialog* FontDialog1;
        wxFontPickerCtrl* FontPickerCtrl1;
        wxGLCanvas* GLCanvas1;
        wxGenericDirCtrl* GenericDirCtrl1;
        wxGrid* Grid1;
        wxHtmlWindow* HtmlWindow1;
        wxHtmlWindow* HtmlWindow2;
        wxMessageDialog* MessageDialog1;
        wxMultiChoiceDialog* MultiChoiceDialog1;
        wxPageSetupDialog* PageSetupDialog1;
        wxPageSetupDialogData  *pageSetupDialogData_1;
        wxPasswordEntryDialog* PasswordEntryDialog1;
        wxPrintDialog* PrintDialog1;
        wxPrintDialogData  *printDialogData_1;
        wxProgressDialog* ProgressDialog1;
        wxRichTextFormattingDialog* RichTextFormattingDialog1;
        wxRichTextStyleOrganiserDialog* RichTextStyleOrganiserDialog1;
        wxRichTextStyleOrganiserDialog* RichTextStyleOrganiserDialog2;
        wxRichTextStyleSheet  *richTextStyleSheet_1;
        wxRichTextStyleSheet  *richTextStyleSheet_2;
        wxSingleChoiceDialog* SingleChoiceDialog1;
        wxSingleChoiceDialog* SingleChoiceDialog2;
        wxSymbolPickerDialog* SymbolPickerDialog1;
        wxTextEntryDialog* TextEntryDialog1;
        wxTextEntryDialog* TextEntryDialog2;
        wxTimePickerCtrl* TimePickerCtrl1;
        //*)

    protected:

        //(*Identifiers(NewPanel)
        static const wxWindowID ID_CALENDARCTRL1;
        static const wxWindowID ID_COLOURPICKERCTRL1;
        static const wxWindowID ID_DATEPICKERCTRL1;
        static const wxWindowID ID_FILEPICKERCTRL1;
        static const wxWindowID ID_FONTPICKERCTRL1;
        static const wxWindowID ID_GENERICDIRCTRL1;
        static const wxWindowID ID_GLCANVAS1;
        static const wxWindowID ID_GRID1;
        static const wxWindowID ID_HTMLWINDOW1;
        static const wxWindowID ID_TIMEPICKERCTRL1;
        static const wxWindowID ID_HTMLWINDOW2;
        static const wxWindowID ID_PASSWORDENTRYDIALOG1;
        static const wxWindowID ID_RICHTEXTSTYLEORGANISERDIALOG1;
        static const wxWindowID ID_TEXTENTRYDIALOG1;
        static const wxWindowID ID_SYMBOLPICKERDIALOG1;
        static const wxWindowID ID_MESSAGEDIALOG1;
        static const wxWindowID ID_FINDREPLACEDIALOG1;
        static const wxWindowID ID_PROGRESSDIALOG1;
        static const wxWindowID ID_RICHTEXTFORMATTINGDIALOG1;
        static const wxWindowID ID_RICHTEXTSTYLEORGANISERDIALOG2;
        static const wxWindowID ID_TEXTENTRYDIALOG2;
        //*)

    private:

        //(*Handlers(NewPanel)
        //*)

        DECLARE_EVENT_TABLE()
};

#endif
