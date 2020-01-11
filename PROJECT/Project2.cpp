//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("Surgery.cpp", FrmDrPhuthego);
USEFORM("Check.cpp", FrmBooking);
USEFORM("file.cpp", FrmFile);
USEFORM("login.cpp", FrmLogin);
USEFORM("view.cpp", FrmView);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TFrmDrPhuthego), &FrmDrPhuthego);
		Application->CreateForm(__classid(TFrmLogin), &FrmLogin);
		Application->CreateForm(__classid(TFrmFile), &FrmFile);
		Application->CreateForm(__classid(TFrmBooking), &FrmBooking);
		Application->CreateForm(__classid(TFrmView), &FrmView);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
