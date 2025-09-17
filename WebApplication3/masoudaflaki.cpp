#include "masoudaflaki.h"

//(*InternalHeaders(masoudaflaki)
#include <wx/xrc/xmlres.h>
//*)

//(*IdInit(masoudaflaki)
//*)

BEGIN_EVENT_TABLE(masoudaflaki,wxFrame)
    //(*EventTable(masoudaflaki)
    //*)
END_EVENT_TABLE()

masoudaflaki::masoudaflaki(wxWindow* parent)
{
    //(*Initialize(masoudaflaki)
    wxXmlResource::Get()->LoadObject(this,parent,_T("masoudaflaki"),_T("wxFrame"));
    AnimationCtrl1 = (wxAnimationCtrl*)FindWindow(XRCID("ID_ANIMATIONCTRL1"));
    Button1 = (wxButton*)FindWindow(XRCID("ID_BUTTON1"));
    //*)
}

masoudaflaki::~masoudaflaki()
{
    //(*Destroy(masoudaflaki)
    //*)
}

