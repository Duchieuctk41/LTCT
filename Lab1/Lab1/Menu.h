#pragma once
using namespace std;

void XuatMenu()
{
	cout << "\n========He thong menu ======";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. Bien";
	cout << "\n2. Ve Hinh";
	cout << "\n3. Phep Gan";
	cout << "\n4. Hinh Tam Giac ";
	cout << "\n5. Doi gio phut giay";
	cout << "\n6. Toan Tu";

}
//Hàm Chọn menu từ 0 đên soMenu
int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap 1 so trong khoang [0,...," << soMenu
			<< "] de chon menu (Lan dau tien chon 1),stt = ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;

	}
	return stt;
}
//Hàm xử lý menu
void XuLyMenu(int menu, int& n)
{
	int k,x,y;
	float canh1, canh2, canh3;
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << "\n0. Thoat khoi chuong trinh\n";
		break;
	case 1:
		system("CLS");
		cout << "\n1. Xuat cac bien\n";
		Bai1_Bien();
		break;
	case 2:
		system("CLS");
		cout << "\n2. Ve Hinh\n";
		cout << t << "Nhap gia tri k :";
		cin >> k;
		Bai2_VeHinh(k);
		break;
	case 3:
		system("CLS");
		cout << "\n3. Phep Gan\n";
		cout << "nhap x:\t";
		cin >> x;
		cout << "nhap y\t";
		cin >> y;
		Bai3_PhepGan(x, y);
		_getch();
		break;
	case 4:
		system("CLS");
			cout << "\n4. Hinh Tam Giac";
			cout << "\nNhap canh1:\t";
			cin >> canh1;
			cout << "Nhap canh2\t";
			cin >> canh2;
			cout << "Nhap canh3\t";
			cin >> canh3;
			Bai4_HinhTamGiac(canh1, canh2, canh3);
		break;
	case 5:
		system("CLS");
		cout << "\n5. Doi gio phut giay";
		cout << "\nnhap so x\n";
		cin >> x;
		Bai5_DoiGioPhutGiay(x);
		break;
	case 6:
		system("CLS");
		cout << "\n6. Toan Tu";
		cout << "Nhap so x:";
		cin >> x;
		cout << "Nhap so y:";
		cin >> y;
		Bai6_ToanTu(x, y);
		break;
	}
	
}

