//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "view.h"
#include "file.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFrmView *FrmView;
//---------------------------------------------------------------------------
__fastcall TFrmView::TFrmView(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrmView::FormShow(TObject *Sender)
{
 //MemView->Lines->LoadFromFile("..\\..\\Data\\Matlhodi.txt");
 StsbrView->Panels->Items[0]->Text =FormatDateTime("dd mmmm yyyy_ hh:mm" , Now());
}
//---------------------------------------------------------------------------
