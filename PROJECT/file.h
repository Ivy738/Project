//---------------------------------------------------------------------------

#ifndef fileH
#define fileH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.Mask.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TFrmFile : public TForm
{
__published:	// IDE-managed Components
	TLabel *LblDetatails;
	TLabel *LblLName;
	TLabel *LblFName;
	TLabel *LblCNumbers;
	TLabel *lblAddress;
	TLabel *LblAge;
	TLabel *lblHistory;
	TEdit *EdtFName;
	TEdit *EdtLName;
	TComboBox *CmbGender;
	TButton *BtnSave;
	TEdit *EdtAge;
	TLabel *LblUserName;
	TLabel *LblPassword;
	TLabel *LblConfirmPswd;
	TEdit *EdtUserName;
	TEdit *EdtPswd;
	TEdit *EdtCPswd;
	TBitBtn *BtbtnOk;
	TEdit *EdtAddress;
	TEdit *EdtCNum;
	TStatusBar *StsbrFile;
	TLabel *lblFRD;
	TComboBox *cmbDisease;
	TLabel *Label1;
	TButton *Btnview;
	TMemo *MemView;
	TPanel *Panel2;
	TStatusBar *StatusBar1;
	void __fastcall BtnSaveClick(TObject *Sender);
	void __fastcall BtbtnOkClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall BtnviewClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFrmFile(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrmFile *FrmFile;
//---------------------------------------------------------------------------
#endif
