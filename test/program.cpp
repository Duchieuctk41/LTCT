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
  int menu, n, soMenu = 7;
  NhanVien a[max];
  do
  {
    menu = ChonMenu(soMenu);
    XuLyMenu(menu, a, n);
    _getch();
  } while (menu > 0);
}
