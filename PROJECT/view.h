//---------------------------------------------------------------------------

#ifndef viewH
#define viewH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TFrmView : public TForm
{
__published:	// IDE-managed Components
	TMemo *MemView;
	TStatusBar *StsbrView;
	void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFrmView(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrmView *FrmView;
//---------------------------------------------------------------------------
#endif
