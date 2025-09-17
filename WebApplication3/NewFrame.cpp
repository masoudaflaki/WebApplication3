#include "NewFrame.h"

//(*InternalHeaders(NewFrame)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(NewFrame)
const wxWindowID NewFrame::ID_LISTVIEW1 = wxNewId();
const wxWindowID NewFrame::ID_RADIOBOX1 = wxNewId();
const wxWindowID NewFrame::ID_GAUGE1 = wxNewId();
const wxWindowID NewFrame::ID_STATICBITMAP1 = wxNewId();
const wxWindowID NewFrame::ID_SCROLLEDWINDOW1 = wxNewId();
const wxWindowID NewFrame::ID_CHOICEBOOK1 = wxNewId();
const wxWindowID NewFrame::ID_NOTEBOOK1 = wxNewId();
const wxWindowID NewFrame::ID_LISTCTRL1 = wxNewId();
const wxWindowID NewFrame::ID_EDITABLELISTBOX1 = wxNewId();
const wxWindowID NewFrame::ID_DATAVIEWTREECTRL1 = wxNewId();
const wxWindowID NewFrame::ID_CONTEXTHELPBUTTON1 = wxNewId();
const wxWindowID NewFrame::ID_CHOICE1 = wxNewId();
const wxWindowID NewFrame::ID_RADIOBUTTON1 = wxNewId();
const wxWindowID NewFrame::ID_RADIOBUTTON2 = wxNewId();
const wxWindowID NewFrame::ID_RADIOBUTTON3 = wxNewId();
const wxWindowID NewFrame::ID_RADIOBUTTON4 = wxNewId();
const wxWindowID NewFrame::ID_SCROLLEDWINDOW2 = wxNewId();
const wxWindowID NewFrame::ID_SEARCHCTRL1 = wxNewId();
const wxWindowID NewFrame::ID_TEXTCTRL1 = wxNewId();
const wxWindowID NewFrame::ID_STATICBOX1 = wxNewId();
const wxWindowID NewFrame::ID_PANEL1 = wxNewId();
const wxWindowID NewFrame::ID_RADIOBOX2 = wxNewId();
const wxWindowID NewFrame::ID_ANIMATIONCTRL1 = wxNewId();
const wxWindowID NewFrame::ID_TREEBOOK1 = wxNewId();
const wxWindowID NewFrame::ID_TREECTRL1 = wxNewId();
const wxWindowID NewFrame::ID_STATUSBAR1 = wxNewId();
const wxWindowID NewFrame::ID_DIALUPMANAGER1 = wxNewId();
const wxWindowID NewFrame::ID_TOOLBAR1 = wxNewId();
const wxWindowID NewFrame::ID_TIMER1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(NewFrame,wxFrame)
    //(*EventTable(NewFrame)
    //*)
END_EVENT_TABLE()

NewFrame::NewFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(NewFrame)
    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    Choicebook1 = new wxChoicebook(this, ID_CHOICEBOOK1, wxDefaultPosition, wxDefaultSize, wxBORDER_DOUBLE|wxBORDER_SUNKEN|wxBORDER_NONE|wxTRANSPARENT_WINDOW|wxTAB_TRAVERSAL|wxVSCROLL|wxHSCROLL|wxALWAYS_SHOW_SB|wxCLIP_CHILDREN|wxFULL_REPAINT_ON_RESIZE, _T("ID_CHOICEBOOK1"));
    ListView1 = new wxListView(Choicebook1, ID_LISTVIEW1, wxPoint(154,183), wxDefaultSize, wxLC_LIST, wxDefaultValidator, _T("ID_LISTVIEW1"));
    RadioBox1 = new wxRadioBox(Choicebook1, ID_RADIOBOX1, _("Label"), wxPoint(19,84), wxDefaultSize, 0, 0, 1, 0, wxDefaultValidator, _T("ID_RADIOBOX1"));
    Gauge1 = new wxGauge(Choicebook1, ID_GAUGE1, 100, wxPoint(283,152), wxDefaultSize, 0, wxDefaultValidator, _T("ID_GAUGE1"));
    ScrolledWindow1 = new wxScrolledWindow(Choicebook1, ID_SCROLLEDWINDOW1, wxPoint(15,128), wxDefaultSize, wxVSCROLL|wxHSCROLL, _T("ID_SCROLLEDWINDOW1"));
    StaticBitmap1 = new wxStaticBitmap(ScrolledWindow1, ID_STATICBITMAP1, wxNullBitmap, wxPoint(242,3), wxSize(128,96), 0, _T("ID_STATICBITMAP1"));
    Choicebook1->AddPage(ListView1, _("Page name"), false);
    Choicebook1->AddPage(RadioBox1, _("Page name"), false);
    Choicebook1->AddPage(Gauge1, _("Page name"), false);
    Choicebook1->AddPage(ScrolledWindow1, _("Page name"), false);
    Notebook1 = new wxNotebook(this, ID_NOTEBOOK1, wxPoint(0,64), wxDefaultSize, 0, _T("ID_NOTEBOOK1"));
    ListCtrl1 = new wxListCtrl(this, ID_LISTCTRL1, wxPoint(0,80), wxSize(136,328), wxLC_LIST, wxDefaultValidator, _T("ID_LISTCTRL1"));
    EditableListBox1 = new wxEditableListBox(this, ID_EDITABLELISTBOX1, wxEmptyString, wxPoint(344,360), wxDefaultSize, 0, _T("ID_EDITABLELISTBOX1"));
    DataViewTreeCtrl1 = new wxDataViewTreeCtrl(this, ID_DATAVIEWTREECTRL1, wxPoint(152,80), wxSize(100,336), 0, wxDefaultValidator);
    ContextHelpButton1 = new wxContextHelpButton(this, wxID_CONTEXT_HELP, wxPoint(344,328), wxDefaultSize, wxBU_AUTODRAW);
    Choice1 = new wxChoice(this, ID_CHOICE1, wxPoint(32,40), wxSize(212,40), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE1"));
    RadioButton1 = new wxRadioButton(this, ID_RADIOBUTTON1, _("Label"), wxPoint(72,344), wxSize(50,16), 0, wxDefaultValidator, _T("ID_RADIOBUTTON1"));
    RadioButton2 = new wxRadioButton(this, ID_RADIOBUTTON2, _("Label"), wxPoint(72,328), wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON2"));
    RadioButton3 = new wxRadioButton(this, ID_RADIOBUTTON3, _("Label"), wxPoint(72,296), wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON3"));
    RadioButton4 = new wxRadioButton(this, ID_RADIOBUTTON4, _("Label"), wxPoint(72,312), wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON4"));
    ScrolledWindow2 = new wxScrolledWindow(this, ID_SCROLLEDWINDOW2, wxPoint(168,272), wxDefaultSize, wxVSCROLL|wxHSCROLL, _T("ID_SCROLLEDWINDOW2"));
    SearchCtrl1 = new wxSearchCtrl(this, ID_SEARCHCTRL1, wxEmptyString, wxPoint(24,8), wxSize(366,23), 0, wxDefaultValidator, _T("ID_SEARCHCTRL1"));
    TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, _("Text"), wxPoint(8,120), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    StaticBox1 = new wxStaticBox(this, ID_STATICBOX1, _("Label"), wxPoint(264,208), wxSize(104,216), 0, _T("ID_STATICBOX1"));
    Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(16,320), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    RadioBox2 = new wxRadioBox(this, ID_RADIOBOX2, _("Label"), wxPoint(8,152), wxSize(120,128), 0, 0, 1, 0, wxDefaultValidator, _T("ID_RADIOBOX2"));
        wxAnimation anim_1(wxEmptyString);
    AnimationCtrl1 = new wxAnimationCtrl(this, ID_ANIMATIONCTRL1, anim_1, wxPoint(16,288), wxDefaultSize, wxAC_DEFAULT_STYLE, _T("ID_ANIMATIONCTRL1"));
    Treebook1 = new wxTreebook(this, ID_TREEBOOK1, wxPoint(344,384), wxDefaultSize, wxBK_DEFAULT, _T("ID_TREEBOOK1"));
    TreeCtrl1 = new wxTreeCtrl(this, ID_TREECTRL1, wxPoint(264,32), wxSize(112,152), wxTR_DEFAULT_STYLE, wxDefaultValidator, _T("ID_TREECTRL1"));
    MenuBar1 = new wxMenuBar();
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -10 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);
    Image1 = new wxImage();
    Image1_BMP = new wxBitmap();
    DialUpManager1 = wxDialUpManager::Create();
    HtmlEasyPrinting1 = new wxHtmlEasyPrinting(_T("wxHtmlEasyPrinting"), this);
    Timer1.SetOwner(this, ID_TIMER1);

    Connect(ID_TIMER1, wxEVT_TIMER, (wxObjectEventFunction)&NewFrame::OnTimer1Trigger);
    Connect(wxID_ANY, wxEVT_CLOSE_WINDOW, (wxObjectEventFunction)&NewFrame::OnClose);
    //*)
}

NewFrame::~NewFrame()
{
    //(*Destroy(NewFrame)
    //*)
}


void NewFrame::OnTimer1Trigger(wxTimerEvent& event)
{
}

void NewFrame::OnClose(wxCloseEvent& event)
{
}
