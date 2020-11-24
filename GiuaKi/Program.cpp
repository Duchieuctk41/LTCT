#include <iostream>
#include <conio.h>
#include <string>
#include <sstream>

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
  int SoMenu = 5,
      menu, n;
  n = NhapSo(n);
  XuatSo(n);
  do
  {
    menu = ChonMenu(SoMenu, n);
    XuLyMenu(menu, n);
    _getch();
  } while (menu > 0);
};