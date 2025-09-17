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
//*)

BEGIN_EVENT_TABLE(NewPanel,wxPanel)
    //(*EventTable(NewPanel)
    //*)
END_EVENT_TABLE()

NewPanel::NewPanel(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
    //(*Initialize(NewPanel)
    Create(parent, id, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("id"));
    CalendarCtrl1 = new wxCalendarCtrl(this, ID_CALENDARCTRL1, wxDefaultDateTime, wxPoint(0,32), wxSize(362,171), 0, _T("ID_CALENDARCTRL1"));
    ColourPickerCtrl1 = new wxColourPickerCtrl(this, ID_COLOURPICKERCTRL1, wxColour(0,0,0), wxPoint(0,0), wxDefaultSize, 0, wxDefaultValidator, _T("ID_COLOURPICKERCTRL1"));
    DatePickerCtrl1 = new wxDatePickerCtrl(this, ID_DATEPICKERCTRL1, wxDefaultDateTime, wxPoint(104,0), wxDefaultSize, wxDP_DEFAULT|wxDP_SHOWCENTURY, wxDefaultValidator, _T("ID_DATEPICKERCTRL1"));
    FilePickerCtrl1 = new wxFilePickerCtrl(this, ID_FILEPICKERCTRL1, wxEmptyString, _("Select a file"), _T("*.*"), wxPoint(208,8), wxDefaultSize, wxFLP_FILE_MUST_EXIST|wxFLP_OPEN|wxFLP_USE_TEXTCTRL, wxDefaultValidator, _T("ID_FILEPICKERCTRL1"));
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
    HtmlWindow2 = new wxHtmlWindow(this, ID_HTMLWINDOW2, wxDefaultPosition, wxDefaultSize, wxHW_SCROLLBAR_AUTO, _T("ID_HTMLWINDOW2"));
    //*)
}

NewPanel::~NewPanel()
{
    //(*Destroy(NewPanel)
    //*)
}

