#ifndef NEWPANEL_H
#define NEWPANEL_H

//(*Headers(NewPanel)
#include <wx/calctrl.h>
#include <wx/clrpicker.h>
#include <wx/datectrl.h>
#include <wx/dateevt.h>
#include <wx/dirctrl.h>
#include <wx/filepicker.h>
#include <wx/fontpicker.h>
#include <wx/glcanvas.h>
#include <wx/grid.h>
#include <wx/html/htmlwin.h>
#include <wx/panel.h>
#include <wx/timectrl.h>
//*)

class NewPanel: public wxPanel
{
    public:

        NewPanel(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
        virtual ~NewPanel();

        //(*Declarations(NewPanel)
        wxCalendarCtrl* CalendarCtrl1;
        wxColourPickerCtrl* ColourPickerCtrl1;
        wxDatePickerCtrl* DatePickerCtrl1;
        wxFilePickerCtrl* FilePickerCtrl1;
        wxFontPickerCtrl* FontPickerCtrl1;
        wxGLCanvas* GLCanvas1;
        wxGenericDirCtrl* GenericDirCtrl1;
        wxGrid* Grid1;
        wxHtmlWindow* HtmlWindow1;
        wxHtmlWindow* HtmlWindow2;
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
        //*)

    private:

        //(*Handlers(NewPanel)
        //*)

        DECLARE_EVENT_TABLE()
};

#endif
