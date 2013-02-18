#pragma once
#include "stdafx.h"

ref class CShop
{
private:
	String^ Shopname;
	String^ Besitzer;
	String^ Tags;
	String^ TelefonNr;
	bool privatGeschaeftlich;

public:
	CShop();
	~CShop();
};

