
#include <iostream>
#include <conio.h>
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
};

void ChayChuongTrinh()
{
  int menu, SoMenu = 4;
  int n = 4;
  NhanVien a[max] =
      {
          {"1710172", "Nguyen Duc", "Hieu", {16, 8, 1999}, "Nam Ban", 2500},
          {"1710172", "Nguyen Duc", "Hieu", {16, 8, 1999}, "Nam Ban", 2500},
          {"1710172", "Nguyen Duc", "Hieu", {16, 8, 1999}, "Nam Ban", 2500},
          {"1710172", "Nguyen Duc", "Hieu", {16, 8, 1999}, "Nam Ban", 2500}};

  do
  {
    menu = ChonMenu(SoMenu);
    XuLyMenu(menu, a, n);
  } while (menu > 0);
};
