#ifndef NEWFRAME_H
#define NEWFRAME_H

//(*Headers(NewFrame)
#include <wx/animate.h>
#include <wx/arrstr.h>
#include <wx/bitmap.h>
#include <wx/choice.h>
#include <wx/choicebk.h>
#include <wx/cshelp.h>
#include <wx/dataview.h>
#include <wx/dialup.h>
#include <wx/editlbox.h>
#include <wx/frame.h>
#include <wx/gauge.h>
#include <wx/html/htmprint.h>
#include <wx/image.h>
#include <wx/listctrl.h>
#include <wx/menu.h>
#include <wx/notebook.h>
#include <wx/panel.h>
#include <wx/radiobox.h>
#include <wx/radiobut.h>
#include <wx/scrolwin.h>
#include <wx/srchctrl.h>
#include <wx/statbmp.h>
#include <wx/statbox.h>
#include <wx/statusbr.h>
#include <wx/textctrl.h>
#include <wx/timer.h>
#include <wx/toolbar.h>
#include <wx/treebook.h>
#include <wx/treectrl.h>
//*)
// TODO (HAKHAMANESH#1#): hi health ...
//dif diag ct scan

class NewFrame: public wxFrame
{
    public:

        NewFrame(wxWindow* parent,wxWindowID id=wxID_ANY);
        virtual ~NewFrame();

        //(*Declarations(NewFrame)
        wxAnimationCtrl* AnimationCtrl1;
        wxBitmap              *Image1_BMP;
        wxChoice* Choice1;
        wxChoicebook* Choicebook1;
        wxContextHelpButton* ContextHelpButton1;
        wxDataViewTreeCtrl* DataViewTreeCtrl1;
        wxDialUpManager* DialUpManager1;
        wxEditableListBox* EditableListBox1;
        wxGauge* Gauge1;
        wxHtmlEasyPrinting* HtmlEasyPrinting1;
        wxImage               *Image1;
        wxListCtrl* ListCtrl1;
        wxListView* ListView1;
        wxMenuBar* MenuBar1;
        wxNotebook* Notebook1;
        wxPanel* Panel1;
        wxRadioBox* RadioBox1;
        wxRadioBox* RadioBox2;
        wxRadioButton* RadioButton1;
        wxRadioButton* RadioButton2;
        wxRadioButton* RadioButton3;
        wxRadioButton* RadioButton4;
        wxScrolledWindow* ScrolledWindow1;
        wxScrolledWindow* ScrolledWindow2;
        wxSearchCtrl* SearchCtrl1;
        wxStaticBitmap* StaticBitmap1;
        wxStaticBox* StaticBox1;
        wxStatusBar* StatusBar1;
        wxTextCtrl* TextCtrl1;
        wxTimer Timer1;
        wxToolBar* ToolBar1;
        wxTreeCtrl* TreeCtrl1;
        wxTreebook* Treebook1;
        //*)

    protected:

        //(*Identifiers(NewFrame)
        static const wxWindowID ID_LISTVIEW1;
        static const wxWindowID ID_RADIOBOX1;
        static const wxWindowID ID_GAUGE1;
        static const wxWindowID ID_STATICBITMAP1;
        static const wxWindowID ID_SCROLLEDWINDOW1;
        static const wxWindowID ID_CHOICEBOOK1;
        static const wxWindowID ID_NOTEBOOK1;
        static const wxWindowID ID_LISTCTRL1;
        static const wxWindowID ID_EDITABLELISTBOX1;
        static const wxWindowID ID_DATAVIEWTREECTRL1;
        static const wxWindowID ID_CONTEXTHELPBUTTON1;
        static const wxWindowID ID_CHOICE1;
        static const wxWindowID ID_RADIOBUTTON1;
        static const wxWindowID ID_RADIOBUTTON2;
        static const wxWindowID ID_RADIOBUTTON3;
        static const wxWindowID ID_RADIOBUTTON4;
        static const wxWindowID ID_SCROLLEDWINDOW2;
        static const wxWindowID ID_SEARCHCTRL1;
        static const wxWindowID ID_TEXTCTRL1;
        static const wxWindowID ID_STATICBOX1;
        static const wxWindowID ID_PANEL1;
        static const wxWindowID ID_RADIOBOX2;
        static const wxWindowID ID_ANIMATIONCTRL1;
        static const wxWindowID ID_TREEBOOK1;
        static const wxWindowID ID_TREECTRL1;
        static const wxWindowID ID_STATUSBAR1;
        static const wxWindowID ID_DIALUPMANAGER1;
        static const wxWindowID ID_TOOLBAR1;
        static const wxWindowID ID_TIMER1;
        //*)

    private:

        //(*Handlers(NewFrame)
        void OnTimer1Trigger(wxTimerEvent& event);
        void OnClose(wxCloseEvent& event);
        //*)

        DECLARE_EVENT_TABLE()
};

#endif
