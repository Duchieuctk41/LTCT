
#include <iostream>
#include <conio.h>
#include <iomanip>

#include "Thuvien.h"
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
    int menu, //luu trữ giá trị chọn stt của người dùng
        soMenu = 6; //số chức năng trong chương trình
    int n = 0; //khởi tạo kích thước dữ liệu
    do
    {
        menu = ChonMenu(soMenu);
        XuLyMenu(menu, n);
        _getch(); //tạm dừng chương trình sau khi thực hiện một chức năng
    } while (menu > 0);//menu = 0 thi dung chuong trinh
}

