//---------------------------------------------------------------------------

#ifndef CheckH
#define CheckH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Mask.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TFrmBooking : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TMemo *MemChkAvail;
	TButton *BtnSaveApp;
	TLabel *LblMakeApp;
	TLabel *LblDate;
	TLabel *LblTime;
	TPanel *PnlCheck;
	TStatusBar *stsbrName;
	TStatusBar *stsbrTime;
	TComboBox *cmbDay;
	TComboBox *cmbMonth;
	TComboBox *cmbYear;
	TComboBox *cmbTime;
	TLabel *Label1;
	TEdit *Edit1;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall BtnSaveAppClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFrmBooking(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrmBooking *FrmBooking;
//---------------------------------------------------------------------------
#endif