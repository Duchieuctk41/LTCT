#include <iostream>
#include <conio.h>
#include <fstream>
#include <time.h>
#include <stdlib.h>

#include "thuvien.h"
#include "menu.h"

using namespace std;

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 1;
}


void ChayChuongTrinh() 
{
	int menu,
		SoMenu = 6;
	int n = 0;
	DaySo a;

	/*cout << "Nhap so phan tu cua mang:\t";
	cin >> n;
	NhapMang(a, n);
	XuatMang(a, n);*/
	char filename[MAX] = "Text.txt";
	File_Array(filename, a, n);
	do
	{
		menu = ChonMenu(SoMenu);
		XuLyMenu(menu, a, n);
		_getch();

	} while (menu > 0);
}
