//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "booking.h"
#include "file.h"
#include "Surgery.h";
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::BtnNewRegClick(TObject *Sender)
{
	 FrmFile->Show();
}
//---------------------------------------------------------------------------



