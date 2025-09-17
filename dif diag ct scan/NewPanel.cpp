#include "NewPanel.h"

//(*InternalHeaders(NewPanel)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(NewPanel)
const wxWindowID NewPanel::ID_CALENDARCTRL1 = wxNewId();
const wxWindowID NewPanel::ID_COLOURPICKERCTRL1 = wxNewId();
const wxWindowID NewPanel::ID_DATEPICKERCTRL1 = wxNewId();
const wxWindowID NewPanel::ID_FILEPICKERCTRL1 = wxNewId();
const wxWindowID NewPanel::ID_FONTPICKERCTRL1 = wxNewId();
const wxWindowID NewPanel::ID_GENERICDIRCTRL1 = wxNewId();
const wxWindowID NewPanel::ID_GLCANVAS1 = wxNewId();
const wxWindowID NewPanel::ID_GRID1 = wxNewId();
const wxWindowID NewPanel::ID_HTMLWINDOW1 = wxNewId();
const wxWindowID NewPanel::ID_TIMEPICKERCTRL1 = wxNewId();
const wxWindowID NewPanel::ID_HTMLWINDOW2 = wxNewId();
const wxWindowID NewPanel::ID_PASSWORDENTRYDIALOG1 = wxNewId();
const wxWindowID NewPanel::ID_RICHTEXTSTYLEORGANISERDIALOG1 = wxNewId();
const wxWindowID NewPanel::ID_TEXTENTRYDIALOG1 = wxNewId();
const wxWindowID NewPanel::ID_SYMBOLPICKERDIALOG1 = wxNewId();
const wxWindowID NewPanel::ID_MESSAGEDIALOG1 = wxNewId();
const wxWindowID NewPanel::ID_FINDREPLACEDIALOG1 = wxNewId();
const wxWindowID NewPanel::ID_PROGRESSDIALOG1 = wxNewId();
const wxWindowID NewPanel::ID_RICHTEXTFORMATTINGDIALOG1 = wxNewId();
const wxWindowID NewPanel::ID_RICHTEXTSTYLEORGANISERDIALOG2 = wxNewId();
const wxWindowID NewPanel::ID_TEXTENTRYDIALOG2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(NewPanel,wxPanel)
    //(*EventTable(NewPanel)
    //*)
END_EVENT_TABLE()

NewPanel::NewPanel(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
    //(*Initialize(NewPanel)
    Create(parent, wxID_ANY, wxDefaultPosition, wxSize(838,203), wxTAB_TRAVERSAL, _T("wxID_ANY"));
    CalendarCtrl1 = new wxCalendarCtrl(this, ID_CALENDARCTRL1, wxDefaultDateTime, wxPoint(0,32), wxSize(362,171), 0, _T("ID_CALENDARCTRL1"));
    ColourPickerCtrl1 = new wxColourPickerCtrl(this, ID_COLOURPICKERCTRL1, wxColour(0,0,0), wxPoint(0,0), wxDefaultSize, 0, wxDefaultValidator, _T("ID_COLOURPICKERCTRL1"));
    DatePickerCtrl1 = new wxDatePickerCtrl(this, ID_DATEPICKERCTRL1, wxDefaultDateTime, wxPoint(104,0), wxDefaultSize, wxDP_DEFAULT|wxDP_SHOWCENTURY, wxDefaultValidator, _T("ID_DATEPICKERCTRL1"));
    FilePickerCtrl1 = new wxFilePickerCtrl(this, ID_FILEPICKERCTRL1, wxEmptyString, wxEmptyString, wxEmptyString, wxPoint(208,8), wxDefaultSize, wxFLP_FILE_MUST_EXIST|wxFLP_OPEN|wxFLP_USE_TEXTCTRL, wxDefaultValidator, _T("ID_FILEPICKERCTRL1"));
    FontPickerCtrl1 = new wxFontPickerCtrl(this, ID_FONTPICKERCTRL1, wxNullFont, wxPoint(360,56), wxDefaultSize, wxFNTP_FONTDESC_AS_LABEL|wxFNTP_USEFONT_FOR_LABEL, wxDefaultValidator, _T("ID_FONTPICKERCTRL1"));
    GenericDirCtrl1 = new wxGenericDirCtrl(this, ID_GENERICDIRCTRL1, wxEmptyString, wxPoint(368,112), wxDefaultSize, 0, wxEmptyString, 0, _T("ID_GENERICDIRCTRL1"));
    #if wxCHECK_VERSION(3,1,0)
        wxGLAttributes GLCanvasAttributes_1;
        GLCanvasAttributes_1.PlatformDefaults();
        GLCanvasAttributes_1.RGBA();
        GLCanvasAttributes_1.DoubleBuffer();
        GLCanvasAttributes_1.Depth(16);
        GLCanvasAttributes_1.Stencil(0);
        GLCanvasAttributes_1.EndList();
        GLCanvas1 = new wxGLCanvas(this, GLCanvasAttributes_1, ID_GLCANVAS1, wxPoint(424,32), wxDefaultSize, 0, _T("ID_GLCANVAS1"));
    #else
        const int GLCanvasAttributes_1[] =
        {
            WX_GL_RGBA,
            WX_GL_DOUBLEBUFFER,
            WX_GL_DEPTH_SIZE,      16,
            WX_GL_STENCIL_SIZE,    0,
            0, 0
        };
        GLCanvas1 = new wxGLCanvas(this, ID_GLCANVAS1, GLCanvasAttributes_1, wxPoint(424,32), wxDefaultSize, 0, _T("ID_GLCANVAS1"));
    #endif // wxCHECK_VERSION
    Grid1 = new wxGrid(this, ID_GRID1, wxPoint(416,8), wxDefaultSize, 0, _T("ID_GRID1"));
    HtmlWindow1 = new wxHtmlWindow(this, ID_HTMLWINDOW1, wxPoint(440,64), wxDefaultSize, wxHW_SCROLLBAR_AUTO, _T("ID_HTMLWINDOW1"));
    TimePickerCtrl1 = new wxTimePickerCtrl(this, ID_TIMEPICKERCTRL1, wxDateTime::Now(), wxPoint(368,88), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TIMEPICKERCTRL1"));
    HtmlWindow2 = new wxHtmlWindow(this, ID_HTMLWINDOW2, wxPoint(456,64), wxDefaultSize, wxHW_SCROLLBAR_AUTO, _T("ID_HTMLWINDOW2"));
    PasswordEntryDialog1 = new wxPasswordEntryDialog(this, wxEmptyString, _("Enter Password"), wxEmptyString, wxCANCEL|wxCENTRE|wxOK, wxDefaultPosition);
        richTextStyleSheet_1 = new wxRichTextStyleSheet;
    RichTextStyleOrganiserDialog1 = new wxRichTextStyleOrganiserDialog(wxRICHTEXT_ORGANISER_APPLY_STYLES|wxRICHTEXT_ORGANISER_CREATE_STYLES|wxRICHTEXT_ORGANISER_DELETE_STYLES|wxRICHTEXT_ORGANISER_EDIT_STYLES|wxRICHTEXT_ORGANISER_RENAME_STYLES|wxRICHTEXT_ORGANISER_SHOW_ALL, richTextStyleSheet_1, NULL, this, ID_RICHTEXTSTYLEORGANISERDIALOG1, _("Style Organiser"), SYMBOL_WXRICHTEXTSTYLEORGANISERDIALOG_POSITION, SYMBOL_WXRICHTEXTSTYLEORGANISERDIALOG_SIZE, SYMBOL_WXRICHTEXTSTYLEORGANISERDIALOG_STYLE);
    SingleChoiceDialog1 = new wxSingleChoiceDialog(this, _("Select items"), wxEmptyString, 0, 0, 0, wxCHOICEDLG_STYLE, wxDefaultPosition);
    TextEntryDialog1 = new wxTextEntryDialog(this, wxEmptyString, _("Input Text"), wxEmptyString, wxOK|wxCANCEL|wxCENTRE|wxWS_EX_VALIDATE_RECURSIVELY, wxDefaultPosition);
    SymbolPickerDialog1 = new wxSymbolPickerDialog( wxEmptyString, wxEmptyString, wxEmptyString, this, ID_SYMBOLPICKERDIALOG1, _("Title"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxCLOSE_BOX);
        pageSetupDialogData_1 = new wxPageSetupDialogData;
    PageSetupDialog1 = new wxPageSetupDialog(this, pageSetupDialogData_1);
    MultiChoiceDialog1 = new wxMultiChoiceDialog(this, _("Select items"), wxEmptyString, 0, 0, wxCHOICEDLG_STYLE, wxDefaultPosition);
    MessageDialog1 = new wxMessageDialog(this, wxEmptyString, _("Message"), wxOK|wxCANCEL, wxDefaultPosition);
        wxFontData fontData_1;
        fontData_1.SetInitialFont(*wxNORMAL_FONT);
        fontData_1.SetAllowSymbols(true);
    FontDialog1 = new wxFontDialog(this, fontData_1);
    DirDialog1 = new wxDirDialog(this, _("Select directory"), wxEmptyString, wxDD_DEFAULT_STYLE, wxDefaultPosition, wxDefaultSize, _T("wxDirDialog"));
    ColourDialog1 = new wxColourDialog(this);
    FileDialog1 = new wxFileDialog(this, _("Select file"), wxEmptyString, wxEmptyString, wxFileSelectorDefaultWildcardStr, wxFD_DEFAULT_STYLE, wxDefaultPosition, wxDefaultSize, _T("wxFileDialog"));
    FindReplaceDialog1 = new wxFindReplaceDialog(this, &findReplaceData_1, wxEmptyString, 0);
        printDialogData_1 = new wxPrintDialogData;
    PrintDialog1 = new wxPrintDialog(this, printDialogData_1);
    RichTextFormattingDialog1 = new wxRichTextFormattingDialog(wxRICHTEXT_FORMAT_BULLETS|wxRICHTEXT_FORMAT_FONT|wxRICHTEXT_FORMAT_INDENTS_SPACING|wxRICHTEXT_FORMAT_TABS, this, _("Formatting"), ID_RICHTEXTFORMATTINGDIALOG1, wxDefaultPosition, wxDefaultSize);
        richTextStyleSheet_2 = new wxRichTextStyleSheet;
    RichTextStyleOrganiserDialog2 = new wxRichTextStyleOrganiserDialog(wxRICHTEXT_ORGANISER_APPLY_STYLES|wxRICHTEXT_ORGANISER_CREATE_STYLES|wxRICHTEXT_ORGANISER_DELETE_STYLES|wxRICHTEXT_ORGANISER_EDIT_STYLES|wxRICHTEXT_ORGANISER_RENAME_STYLES|wxRICHTEXT_ORGANISER_SHOW_ALL, richTextStyleSheet_2, NULL, this, ID_RICHTEXTSTYLEORGANISERDIALOG2, _("Style Organiser"), SYMBOL_WXRICHTEXTSTYLEORGANISERDIALOG_POSITION, SYMBOL_WXRICHTEXTSTYLEORGANISERDIALOG_SIZE, SYMBOL_WXRICHTEXTSTYLEORGANISERDIALOG_STYLE);
    SingleChoiceDialog2 = new wxSingleChoiceDialog(this, _("Select items"), wxEmptyString, 0, 0, 0, wxCHOICEDLG_STYLE, wxDefaultPosition);
    TextEntryDialog2 = new wxTextEntryDialog(this, wxEmptyString, _("Input Text"), wxEmptyString, wxOK|wxCANCEL|wxCENTRE|wxWS_EX_VALIDATE_RECURSIVELY, wxDefaultPosition);
    //*)
}

NewPanel::~NewPanel()
{
    //(*Destroy(NewPanel)
    PasswordEntryDialog1->Destroy();
    RichTextStyleOrganiserDialog1->Destroy();
    SingleChoiceDialog1->Destroy();
    TextEntryDialog1->Destroy();
    SymbolPickerDialog1->Destroy();
    delete PageSetupDialog1;
    MultiChoiceDialog1->Destroy();
    MessageDialog1->Destroy();
    FontDialog1->Destroy();
    DirDialog1->Destroy();
    ColourDialog1->Destroy();
    FileDialog1->Destroy();
    FindReplaceDialog1->Destroy();
    delete PrintDialog1;
    RichTextFormattingDialog1->Destroy();
    RichTextStyleOrganiserDialog2->Destroy();
    SingleChoiceDialog2->Destroy();
    TextEntryDialog2->Destroy();
    //*)
}

