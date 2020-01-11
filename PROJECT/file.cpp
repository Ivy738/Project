//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "file.h"
#include "Surgery.h"
#include "login.h"
#include "Check.h"
#include "view.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFrmFile *FrmFile;
//---------------------------------------------------------------------------
__fastcall TFrmFile::TFrmFile(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TFrmFile::BtnSaveClick(TObject *Sender)

{

  int x;

  AnsiString line,line1,Name,Surname,Age,Cnumbers,Address,Gender,Disease;

  try
  {
		if( EdtFName->Text =="")
		   {
				ShowMessage("Please Enter your Name");
				 EdtFName->SetFocus();
			}
				 else if (EdtLName->Text == "")
			{
			  ShowMessage("Please Enter your Surname");
			  EdtLName->SetFocus();
			}
				else if(EdtCNum->Text.Length() < 9)
			{
				 ShowMessage("Please Enter your Correct Numbers");
					  EdtCNum->SetFocus();
			}
					else if(EdtAddress == "")
				{
					 ShowMessage("Please Enter your Address");
						EdtAddress->SetFocus();
				}
						else if(EdtAge->Text <2)
					{
						 ShowMessage("Please Enter your Age");
							EdtAge->SetFocus();
					 }
							else if(CmbGender->Text == "")
				{
					 ShowMessage("Please Select you gender");
						CmbGender->SetFocus();
				 }
									else if(cmbDisease->Text == "")
				{
					 ShowMessage("Please select any diseases there");
						CmbGender->SetFocus();
				 }


		else

		ShowMessage(EdtFName->Text + ",Your file was successfully opened, You may Proceed");


		TStringList * strlstFileSave = new TStringList(this);

		strlstFileSave->Add("Patient's File");
		strlstFileSave->Add(EdtFName->Text+"'s"+"\t" + "File");
		strlstFileSave->Add("================================");


   Name = EdtFName->Text;
   Surname = EdtLName->Text;
   Cnumbers = EdtCNum->Text;
   Address = EdtAddress->Text;
   Age = EdtAge->Text;
   Gender = CmbGender->Text;
   Disease = cmbDisease->Text;
   AnsiString oneLine;



	line = "Name:"+ Name+"\t"+"Surname:"+Surname+"\t"+"Contact Numbers:"+Cnumbers;
	line1 ="Address:" + Address+ "\t"+"Age:"+Age+"\t"+"Gender:"+Gender+"\t"+"Disease:" +Disease;

	oneLine = line + "\r\n"+ line1;
	strlstFileSave->Add(oneLine);

  strlstFileSave->SaveToFile("..\\..\\Data\\" + EdtFName->Text + ".txt");
  //ShowMessage("The file was successfully saved");
	Btnview->Visible = true;
  }
   catch(EConvertError& E)
   {
	ShowMessage("Please try again");
	EdtFName->SetFocus();
	EdtLName->SetFocus();
	EdtCNum->SetFocus();
	EdtAge->SetFocus();
	EdtAddress->SetFocus();
   }
   catch(...)
   {
	   MessageDlg("Your information was not well Recorded", mtInformation,TMsgDlgButtons()<<mbOK,0);
   }


}
//---------------------------------------------------------------------------

void __fastcall TFrmFile::BtbtnOkClick(TObject *Sender)
{
 String Pswd = EdtPswd->Text;
 String Cpswd = EdtCPswd->Text;
 String Name = EdtUserName->Text;

 if(EdtUserName->Text == "")
   {
	ShowMessage("Please fill in your UserName");
	EdtUserName->SetFocus();
   }
 if(Pswd!=Cpswd)
  {
	  MessageDlg("Your Password does not Correspond", mtError,TMsgDlgButtons()<<mbOK,0);
	  EdtPswd->SetFocus();
  }
   else if((Pswd == Cpswd) && (EdtUserName->Text != "") )
   {

	   MessageDlg("Your Account has been successfully Made",mtInformation,TMsgDlgButtons()<<mbOK,0);

		 TStringList * strlstPassword = new TStringList(this);
			strlstPassword->Add("USERNAME & PASSWORDS");
			strlstPassword->Add("==============================");

			AnsiString temp = Name+"\t"+ Pswd;
			 strlstPassword->Add(temp);
			 strlstPassword->SaveToFile("..\\..\\Password\\" + EdtUserName->Text + ".txt");
			 FrmBooking->Show();

   }

   else
		 ShowMessage("Please start from the beginning");
		// EdtUserName->Clear();
		// EdtPswd->Clear();
		// EdtCPswd->Clear();
		// EdtUserName->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TFrmFile::FormShow(TObject *Sender)
{
   StsbrFile->Panels->Items[0]->Text = FormatDateTime("dd mmmm yyyy-hh:mm",Now());
   MemView->Visible = false;
   TImage* myImg = new TImage(this);
	  myImg->Parent = Panel2;
	  myImg->Stretch = true;
	  myImg->Picture->LoadFromFile("..\\..\\img1.jpg");
}
//---------------------------------------------------------------------------


void __fastcall TFrmFile::BtnviewClick(TObject *Sender)
{
MemView->Visible = true;
MemView->Lines->LoadFromFile("..\\..\\Data\\"+ EdtFName->Text +".txt");

}
//---------------------------------------------------------------------------


