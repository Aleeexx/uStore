#include "StdAfx.h"
#include "uStore_Register.h"
#include "Fehler.h"

using namespace uStore;

	void uStore_Register::EingabeFehler()
	{
		Fehler^ fail = gcnew Fehler();
		fail->ShowDialog();
		Passwort1->Text = "";
		Passwort2->Text = "";
	}