#ifndef MASOUDAFLAKI_H
#define MASOUDAFLAKI_H

//(*Headers(masoudaflaki)
#include <wx/animate.h>
#include <wx/arrstr.h>
#include <wx/bmpbuttn.h>
#include <wx/bmpcbox.h>
#include <wx/button.h>
#include <wx/checkbox.h>
#include <wx/checklst.h>
#include <wx/cshelp.h>
#include <wx/dataview.h>
#include <wx/editlbox.h>
#include <wx/frame.h>
#include <wx/gauge.h>
#include <wx/htmllbox.h>
#include <wx/hyperlink.h>
#include <wx/listbook.h>
#include <wx/listbox.h>
#include <wx/notebook.h>
#include <wx/panel.h>
#include <wx/radiobut.h>
#include <wx/richtext/richtextctrl.h>
#include <wx/richtext/richtextstyles.h>
#include <wx/scrolbar.h>
#include <wx/scrolwin.h>
#include <wx/slider.h>
#include <wx/spinbutt.h>
#include <wx/spinctrl.h>
#include <wx/srchctrl.h>
#include <wx/statbmp.h>
#include <wx/statbox.h>
#include <wx/stattext.h>
#include <wx/tglbtn.h>
#include <wx/treebook.h>
#include <wx/treectrl.h>
//*)

class masoudaflaki: public wxFrame
{
    public:

        masoudaflaki(wxWindow* parent);
        virtual ~masoudaflaki();

        //(*Declarations(masoudaflaki)
        wxAnimationCtrl* AnimationCtrl1;
        wxBitmapButton* BitmapButton1;
        wxBitmapComboBox* BitmapComboBox1;
        wxBitmapComboBox* BitmapComboBox2;
        wxButton* Button1;
        wxButton* Button2;
        wxCheckBox* CheckBox1;
        wxCheckBox* CheckBox2;
        wxCheckBox* CheckBox3;
        wxCheckBox* CheckBox4;
        wxCheckListBox* CheckListBox1;
        wxContextHelpButton* ContextHelpButton1;
        wxDataViewCtrl* DataViewCtrl1;
        wxDataViewListCtrl* DataViewListCtrl1;
        wxDataViewTreeCtrl* DataViewTreeCtrl1;
        wxEditableListBox* EditableListBox1;
        wxGauge* Gauge1;
        wxHyperlinkCtrl* HyperlinkCtrl1;
        wxListBox* ListBox1;
        wxListbook* Listbook1;
        wxPanel* Panel1;
        wxPanel* Panel2;
        wxPanel* Panel3;
        wxPanel* Panel4;
        wxRadioButton* RadioButton10;
        wxRadioButton* RadioButton11;
        wxRadioButton* RadioButton12;
        wxRadioButton* RadioButton1;
        wxRadioButton* RadioButton2;
        wxRadioButton* RadioButton3;
        wxRadioButton* RadioButton4;
        wxRadioButton* RadioButton5;
        wxRadioButton* RadioButton6;
        wxRadioButton* RadioButton7;
        wxRadioButton* RadioButton8;
        wxRadioButton* RadioButton9;
        wxRichTextCtrl* RichTextCtrl1;
        wxRichTextCtrl* RichTextCtrl2;
        wxRichTextStyleComboCtrl* RichTextStyleComboCtrl1;
        wxRichTextStyleComboCtrl* RichTextStyleComboCtrl2;
        wxRichTextStyleComboCtrl* RichTextStyleComboCtrl3;
        wxRichTextStyleComboCtrl* RichTextStyleComboCtrl4;
        wxRichTextStyleComboCtrl* RichTextStyleComboCtrl5;
        wxRichTextStyleListBox* RichTextStyleListBox1;
        wxRichTextStyleListBox* RichTextStyleListBox2;
        wxRichTextStyleListCtrl* RichTextStyleListCtrl1;
        wxScrollBar* ScrollBar1;
        wxScrollBar* ScrollBar2;
        wxScrolledWindow* ScrolledWindow1;
        wxScrolledWindow* ScrolledWindow2;
        wxSearchCtrl* SearchCtrl1;
        wxSearchCtrl* SearchCtrl2;
        wxSimpleHtmlListBox* SimpleHtmlListBox1;
        wxSlider* Slider1;
        wxSlider* Slider2;
        wxSpinButton* SpinButton1;
        wxSpinButton* SpinButton2;
        wxSpinCtrl* SpinCtrl1;
        wxSpinCtrlDouble* SpinCtrlDouble1;
        wxStaticBitmap* StaticBitmap2;
        wxStaticBox* StaticBox1;
        wxStaticText* StaticText1;
        wxStaticText* StaticText2;
        wxToggleButton* ToggleButton1;
        wxToggleButton* ToggleButton2;
        wxToggleButton* ToggleButton3;
        wxToggleButton* ToggleButton4;
        wxTreeCtrl* TreeCtrl1;
        wxTreebook* Treebook1;
        //*)

    protected:

        //(*Identifiers(masoudaflaki)
        //*)

    private:

        //(*Handlers(masoudaflaki)
        void OnButton1Click(wxCommandEvent& event);
        void OnCheckBox3Click(wxCommandEvent& event);
        void OnCheckBox2Click(wxCommandEvent& event);
        void OnCheckBox1Click(wxCommandEvent& event);
        void OnListBox1Select(wxCommandEvent& event);
        void OnScrollBar1Scroll(wxScrollEvent& event);
        void OnRichTextCtrl1Text(wxCommandEvent& event);
        void OnClose(wxCloseEvent& event);
        void OnRadioButton1Select(wxCommandEvent& event);
        void OnBitmapButton1Click(wxCommandEvent& event);
        void OnTreeCtrl1BeginDrag(wxTreeEvent& event);
        void OnSlider2CmdScroll(wxScrollEvent& event);
        void OnSpinCtrlDouble1Change(wxSpinDoubleEvent& event);
        //*)

        DECLARE_EVENT_TABLE()
};

#endif
