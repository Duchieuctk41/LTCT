#include <iostream>
#include <iomanip>
#include <conio.h>
#include <math.h>

#include "ThuVien.h"
#include "Menu.h"

using namespace std;

void ChayChuongTrinh();

int main()
{
    ChayChuongTrinh();
    return 1;
}

void ChayChuongTrinh() 
{
    int Menu,
        SoMenu = 6;
    int n = 0;
    do
    {
        Menu = ChonMenu(SoMenu);
        XuLyMenu(Menu, n);
        _getch();

    } while (Menu > 0);

}


