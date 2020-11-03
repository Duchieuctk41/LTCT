using namespace std;

void XuatMenu()
{
	cout << endl << "============== CHON CHUC NANG =============";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Kiem tra x nam trong mang a";
	cout << endl << "2. Tim vi tri dau tien x xuat hien trong a";
	cout << endl << "3. Kiem tra mang a la day tang";
	cout << endl << "4. Tim phan tu lon nhat";
	cout << endl << "5. Nhap tu dong vao mang";
	cout << endl << "6. Chen phan tu vao dau day";
	cout << endl << "7. Xem du lieu day so";
	cout << endl << "==========================================";
}

int ChonMenu(int SoMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap 1 so trong khoang [0,...," << SoMenu
			<< "] de chon menu (Lan dau tien chon 1),stt = ";
		cin >> stt;
		if (0 <= stt && stt <= SoMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu, DaySo a, int &n)
{
	int x, kq;
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << endl << "\n0. Thoat khoi chuong trinh\n";
		break;
	case 1:
		system("CLS");
		cout << endl << "1. Kiem tra x nam trong mang a";
		cout << endl << "Nhap gia tri x can tim: ";
		cin >> x;
		kq = ChuaX(a, n, x);
		system("CLS");
		cout << "Mang hien hanh:\n";
		XuatMang(a, n);
		if (kq)
			cout << "Mang co chua phan tu " << x << " can tim";
		else 
			cout << "Mang khong chua phan tu " << x << " can tim";
		break;
	case 2:
		system("CLS");
		cout << endl << "2. Tim vi tri dau tien x xuat hien trong a";
		cout << endl << "Nhap gia tri x can tim: ";
		cin >> x;
		kq = Tim_VTDT_X(a, n, x);
		system("CLS");
		cout << "Mang hien hanh:\n";
		XuatMang(a, n);
		if (kq == -1)
			cout << "Mang khong chua phan tu " << x << " can tim";
		else
			cout << "\nVi tri dau tien " << x << " xuat hien trong a la : " << kq;
		break;
	case 3:
		system("CLS");
		cout << endl << "3. Kiem tra mang a la day tang";
		kq = KiemTraMangTang(a, n);
		system("CLS");
		cout << "Mang hien hanh:\n";
		XuatMang(a, n);
		if (kq)
			cout << endl << "a La Mang tang";
		else
			cout << endl << "a khong phai Mang tang.";
		break;
	case 4:
		system("CLS");
		cout << endl << "4. Tim phan tu lon nhat";
		kq = TimMax(a, n);
		system("CLS");
		cout << "\nMang hien hanh:\n";
		XuatMang(a, n);
		cout << "\nMax[0,..," << n << "] = " << kq;
		break;
	case 5:
		system("CLS");
		cout << endl << "5. Nhap tu dong vao mang";
		//Bo sung sau
		break;
	case 6:
		system("CLS");
		cout << endl << "6. Chen phan tu vao dau day";
		cout << "\nNhap gia tri can chen: x = ";
		cin >> x;
		cout << "\nKich thuoc mang hien hanh : n = " << n;
		cout << "\nDay so hien hanh:\n";
		XuatMang(a, n);
		/*ChenDauDay(a, n, x);
		cout << "\n\nKich thuoc mang ket qua : n = " << n;
		cout << "\nDay so ket qua sau khi chen " << x << " vao dau day :\n";
		XuatMang(a, n);*/
		break;
	case 7:
		system("CLS");
		cout << endl << "6. Chen phan tu vao dau day";
		cout << "\nNhap gia tri can chen: x = ";
		cin >> x;
		cout << "\nKich thuoc mang hien hanh : n = " << n;
		cout << "\nDay so hien hanh:\n";
		XuatMang(a, n);
		//Bo sung sau
		break;

	default:
		break;
	}
	_getch();
}