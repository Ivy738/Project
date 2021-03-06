//--------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "jpeg.hpp"
#include "Check.h"
#include <string.h>
#include <iostream>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFrmBooking *FrmBooking;
//---------------------------------------------------------------------------
__fastcall TFrmBooking::TFrmBooking(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrmBooking::Button1Click(TObject *Sender)
{
MemChkAvail->Visible = true;
MemChkAvail->Lines->LoadFromFile("..\\..\\App\\"+Edit1->Text+".txt");
}
//---------------------------------------------------------------------------
void __fastcall TFrmBooking::BtnSaveAppClick(TObject *Sender)
{
  if(cmbDay->Text == "")
  {
	ShowMessage("Please select a day");
	cmbDay->SetFocus();
  }
	if(cmbMonth == "")
	 {
	  ShowMessage("Please select a month for your appointment");
	  cmbMonth->SetFocus();
	 }
	   if(cmbYear == "")
	 {
	  ShowMessage("Please select a year");
	  cmbMonth->SetFocus();
	 }
		  if(cmbTime == "")
	 {
	  ShowMessage("Please select a time slot");
	  cmbMonth->SetFocus();
	 }

	 else

  MessageDlg("You successfully made you appointment", mtInformation,TMsgDlgButtons()<<mbOK,0);



   Edit1->Text = "Appointments";

   TStringList * App = new TStringList(this);

   App->Add("Currently Made Appointments");
   App->Add("*********************************");
   App->Add("Date And Time");
   App->Add(Edit1->Text);

	AnsiString temp,temp1;
  for(int x = 0; x < App->Count; x++)
   {
	   temp =cmbDay->Text+ cmbMonth->Text + cmbYear->Text+ "\t" +cmbTime->Text;
		App->Add(temp);
   }
   App->SaveToFile("..\\..\\App\\"+ Edit1->Text +".txt");

   temp1 = "App#0" + App->Count;

   ShowMessage("Your Reference Number is:" + temp1);

}
//---------------------------------------------------------------------------

void __fastcall TFrmBooking::FormShow(TObject *Sender)
{


	cmbMonth->Items->Add(FormatDateTime("mmmm", Now()));
	cmbYear->Items->Add(FormatDateTime("yyyy",Now()));
	stsbrTime->Panels->Items[0]->Text = FormatDateTime("dd mmmm yyyy-hh:mm",Now());
	stsbrTime->Panels->Items[1]->Text = " Because Your Life Matters";

	  TImage* myImg = new TImage(this);
	  myImg->Parent = PnlCheck;
	  myImg->Stretch = true;
	  myImg->Picture->LoadFromFile("..\\..\\img1.jpg");
	 // Label1->Caption = "PLEASE NOTE THAT THE APPOINTMENTS " + "\r\n" + "ARE SCHEDULLED FOR 30 MIN PER PERSON";
}
//---------------------------------------------------------------------------


