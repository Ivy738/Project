//---------------------------------------------------------------------------

#ifndef SurgeryH
#define SurgeryH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TFrmDrPhuthego : public TForm
{
__published:	// IDE-managed Components
	TStatusBar *StatusBar1;
	TButton *BtnBook;
	TLabel *lblConsHours;
	TLabel *lblmon;
	TLabel *tta;
	TLabel *Label1;
	TPanel *Panel1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	void __fastcall FormShow(TObject *Sender);
	void __fastcall BtnBookClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFrmDrPhuthego(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrmDrPhuthego *FrmDrPhuthego;
//---------------------------------------------------------------------------
#endif
