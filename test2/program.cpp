#include <iostream>
#include <conio.h>
#include <fstream>
#include <iomanip>
#include <string.h>

using namespace std;

#include "thuvien.h"
#include "menu.h"

void ChayChuongTrinh();
int main()
{
  ChayChuongTrinh();
  return 1;
}

void ChayChuongTrinh()
{
  int menu, soMenu = 7, n;
  NhanVien a[max];
  do
  {
    menu = ChonMenu(soMenu);
    XuLyMenu(menu, a, n);
    _getch();
  } while (menu > 0);
}