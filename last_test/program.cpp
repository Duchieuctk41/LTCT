#include <iostream>
#include <conio.h>
#include <fstream>
#include <iomanip>

using namespace std;

#include "thuvien.h"
#include "menu.h"

int main();
void ChayChuongTrinh();

int main()
{
  ChayChuongTrinh();
  return 1;
}

void ChayChuongTrinh()
{
  int soMenu = 5, menu, n;
  NhanVien a[max];
  do
  {
    menu = ChonMenu(soMenu);
    XuLyMenu(menu, a, n);
    _getch();
  } while (menu > 0);
}