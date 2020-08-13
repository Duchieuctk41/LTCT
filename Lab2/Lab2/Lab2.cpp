#include <iostream>
#include <conio.h>
#include <math.h>

#include "Thuvien.h"
#include "Menuh.h"

using namespace std;

void ChayChuongTrinh();


int main()
{
    ChayChuongTrinh();
    return 1;

}

void ChayChuongTrinh() {
    int Menu,
        SoMenu = 10;
    int n = 0;

    do {

        Menu = ChonMenu(SoMenu);
        XuLyMenu(Menu, n);
        _getch();
    } while (Menu > 0);
}


