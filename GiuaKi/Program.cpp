#include <iostream>
#include <conio.h>
#include <cmath>
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
  int SoMenu = 7,
      menu, n;
  DaySo a;
  n = NhapSo(n);
  XuatSo(n);
  do
  {
    menu = ChonMenu(SoMenu, n);
    XuLyMenu(menu, a, n);
    _getch();
  } while (menu > 0);
};