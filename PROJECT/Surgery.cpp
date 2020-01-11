//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Surgery.h"
#include "Login.h"
#include <jpeg.hpp>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFrmDrPhuthego *FrmDrPhuthego;
//---------------------------------------------------------------------------
__fastcall TFrmDrPhuthego::TFrmDrPhuthego(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrmDrPhuthego::FormShow(TObject *Sender)
{
	  StatusBar1->Panels->Items[0]->Text = FormatDateTime("dd mmmm yyyy-hh:mm",Now());
	  StatusBar1->Panels->Items[1]->Text = " Because Your Life Matters";

	  TImage* myImg = new TImage(this);
	  myImg->Parent = Panel1;
	  myImg->Stretch = true;
	  myImg->Picture->LoadFromFile("..\\..\\img1.jpg");
}
//---------------------------------------------------------------------------



void __fastcall TFrmDrPhuthego::BtnBookClick(TObject *Sender)
{
 FrmLogin->Show();
 FrmLogin->Enabled = true;
}
//---------------------------------------------------------------------------




