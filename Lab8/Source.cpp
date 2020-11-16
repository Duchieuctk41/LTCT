#define MAX 100
#include <iostream>
#include <conio.h>
#include <string.h>
#include <iomanip>
#include <stdio.h>

using namespace std;

#include "Header.h"
#include "Menu.h"

void ChayChuongTrinh();

int main()
{
  ChayChuongTrinh();
  return 1;
}

void ChayChuongTrinh()
{
  int Menu,
      SoMenu = 12;
  int n = 5;
  NhanVien a[MAX] =
      {
          {"1710172", "Nguyen Duc", "An", {16, 8, 1999}, "Nam Ban", 2500},
          {"1710198", "Nguyen Duc", "Hieu", {16, 8, 2001}, "Duc Trong", 4000},
          {"1234560", "Dau Cat", "Hieu", {16, 3, 2001}, "Cau Giay", 5000},
          {"6543210", "Nguyen Duc", "Hieu", {3, 2, 2000}, "Da Lat", 2500},
          {"1425630", "Tran Quoc", "Hieu", {31, 12, 2001}, "Don Duong", 9000}};

  do
  {
    Menu = ChonMenu(SoMenu);
    XuLyMenu(Menu, a, n);
  } while (Menu > 0);
}
