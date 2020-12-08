#include <iostream>
#include <conio.h>

using namespace std;

#include "thuvien.h"
#include "menu.h"

void ChayChuongTrinh();

int main()
{
  ChayChuongTrinh();
  return 1;
};

void ChayChuongTrinh()
{
  int menu, SoMenu = 2;
  do
  {
    menu = ChonMenu(SoMenu);
    XuLyMenu(menu);
  } while (menu > 0);
  _getch();
};
