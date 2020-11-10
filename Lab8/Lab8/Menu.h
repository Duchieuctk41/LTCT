
void XuatMenu()
{
	cout << "\n============== HE THONG CHUC NANG =================\n";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. Nhap danh sach nhan vien";
	cout << "\n2. xem danh sach nhan vien";
	cout << "\n3. Them mot nhan vien vao cuoi danh sach";
	cout << "\n4. Xoa mot nhan vien theo ma nhan vien";
	cout << "\n5. Sua thong tin nhan vien theo ma nhan vien";
	cout << "\n6. Tim nhan vien theo ma so";
	cout << "\n7. Tim nhan vien theo ten";
	cout << "\n8. Sap danh sach nhan vien tang dan theo ma nhan vien";
	cout << "\n9. Sap danh sach nhan vien tang dan theo ten - ho - luong";
	cout << "\n10. Tinh tong luong thang";
	cout << "\n11. Liet ke cac nhan vien co luong >= x (nhap tu ban phim)";
	cout << "\n12. Liet ke cac nhan vien co nam sinh trong khoang [u,v]";
	cout << "\n=================================================================";
	cout << "\n (Du lieu da duoc khoi tao, chon 1 neu muon tao lai du lieu.)";
	cout << "\n=================================================================";
}

int ChonMenu(int soMenu)
{
	int stt;

	for (;;)
	{
		XuatMenu();
		cout << "\nChon chuc nang trong khoang [0.." << soMenu << "] : ";
		cin >> stt;

		if (0 <= stt && stt <= soMenu)
			break;
	}

	return stt;
}

void XuLyMenu(int Menu, NhanVien a[MAX], int &n)
{
	NhanVien p;
	char maNV[8];
	switch (Menu)
	{
	case 0:
		system("CLS");
		cout << "\n0. Thoat khoi chuong trinh\n";
		cout << endl << "Nhan phim bat ki de thoat khoi chuong trinh";
		break;
	case 1:
		system("CLS");
		cout << "\n1. Nhap danh sach nhan vien";
		Nhap_DSNV(a, n);
		system("CLS");
		Xuat_DSNV(a, n);
		cout << endl << "So nhan vien trong danh sach n: " << n;
		break;
	case 2:
		system("CLS");
		cout << "\n2. Xem danh sach nhan vien";
		Xuat_DSNV(a, n);
		cout << endl << "So nhan vien trong danh sach n: " << n;
		break;
	case 3:
		system("CLS");
		cout << "\n3. Them mot nhan vien";
		cout << "\nNhap thong tin nhan vien can chen vao cuoi danh sach:\n";
		Nhap_1NV(p);
		system("CLS");
		cout << "\nDanh sach ban dau :\n";
		Xuat_DSNV(a, n);
		cout << "\nSo nhan vien trong danh sach : n = " << n;
		ThemNhanVien_Cuoi(a, n, p);
		cout << "\nDanh sach ket qua :\n";
		Xuat_DSNV(a, n);
		cout << "\nSo nhan vien trong danh sach sau khi them : n = " << n;
		break;
	case 4:
		system("CLS");
		cout << "\n4. Xoa mot nhan vien theo ma so";
		Xuat_DSNV(a, n);
		cout << "\nNhap ma nhan vien can xoa :";
		cin >> maNV;
		cout << "\nDanh sach hien hanh :\n";
		Xuat_DSNV(a, n);
		cout << "\nSo nhan vien trong danh sach : n = " << n;
		XoaNhanVien_MaNV(a, n, maNV);
		cout << "\nDanh sach ket qua :\n";
		Xuat_DSNV(a, n);
		cout << "\nSo nhan vien trong danh sach sau khi xoa : n = " << n;
		break;
	case 5:
		system("CLS");
		cout << "\n5. Sua thong tin nhan vien";
		break;
	case 6:
		system("CLS");
		cout << "\n6. Tim nhan vien theo ma so";
		break;
	case 7:
		system("CLS");
		cout << "\n7. Tim nhan vien theo ten";
		break;
	case 8:
		system("CLS");
		cout << "\n8. Sap danh sach nhan vien tang dan theo ma nhan vien";
		break;
	case 9:
		system("CLS");
		cout << "\n9. Sap danh sach nhan vien tang dan theo ten - ho - luong";
		break;
	case 10:
		system("CLS");
		cout << "\n10. Tinh tong luong thang";
		break;
	case 11:
		system("CLS");
		cout << "\n11. Liet ke cac nhan vien co luong >= x ";
		break;
	case 12:
		system("CLS");
		cout << "\n12. Liet ke cac nhan vien co nam sinh trong khoang [u,v]";
		break;
	}
	_getch();
}