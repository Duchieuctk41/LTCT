using namespace std;

void XuatMenu()
{
	cout << "++++++++++++++++ He Thong Chuong Trinh ++++++++++++++++\n";
	cout << "\n0. Thoat Chuong Trinh";
	cout << "\n1. Phuong Trinh Bac 2";
	cout << "\n2. Tim Ngay Trong Thang";
	cout << "\n3. Phan Loai Tam Giac";
	cout << "\n4. Tinh Luy Thua";
	cout << "\n5. Bai Toan Thong Ke Diem (Ket Hop for voi switch)";
	cout << "\n6. Kiem Tra Liet Ke So Nguyen To";
	cout << "\n7. Phuong trinh bac nhat 1 an";
	cout << "\n8. Tinh bieu thuc";
	cout << "\n9. Tim UCLN";
	cout << "\n10. Tro choi doan so";

}

int ChonMenu(int SoMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\n\nChon tu 0 ... " << SoMenu << " de chon Menu, Chon: ";
		cin >> stt;
		if (0 <= stt <= SoMenu)
		{
			break;
		}
	}
	return stt;
}

void XuLyMenu(int Menu, int& n)
{
	int a, b, c, soNgay, thang, nam;
	double canh1, canh2, canh3;
	unsigned int n1;
	long ketQua;

	switch (Menu)
	{
	case 0:
		system("CLS");
		cout << "\nBan muon thoat chuong trinh ?";
		break;
	case 1:
		system("CLS");
		cout << "\n1. Phuong Trinh Bac 2";
		cout << "\nNhap a (!= 0): ";
		cin >> a;
		while (!a)
		{
			cout << "a phai khac 0: ";
			cin >> a;
		}
		cout << "\nNhap b: ";
		cin >> b;
		cout << "\nNhap c: ";
		cin >> c;
		GiaiPhuongTrinhBac2(a, b, c);
	case 2:
		system("CLS");
		cout << "\n2. Tim Ngay Trong Thang";
		
		cout << endl << "Nhap mot thang trong nam";
		thang = NhapSoTrongMien(1, 12);
		cout << endl << "Nhap nam duong lich";
		nam = NhapSoTrongMien(1, 3000);
		soNgay = TimSoNgay(thang, nam);
		cout << endl << "Thang " << thang
			<< " nam " << nam
			<< " co " << soNgay << " ngay.";
		break;
	case 3:
		system("CLS");
		cout << "\n3. Phan Loai Tam Giac";
		cout << endl << "Nhap do dai canh a : ";
		cin >> canh1;
		cout << endl << "Nhap do dai canh b : ";
		cin >> canh2;
		cout << endl << "Nhap do dai canh c : ";
		cin >> canh3;
		ketQua = PhanLoaiTamGiac(canh1, canh2, canh3);
		ThongBao(ketQua, canh1, canh2, canh3);
		break;
	case 4:
		system("CLS");
		cout << "\n4. Tinh Luy Thua";
		cout << endl << "Nhap mot so nguyen khong am : ";
		cin >> n1;
		ketQua = TinhGiaiThua(n1);
		cout << endl << n1 << "! = " << ketQua;
		ketQua = TinhTong(n1);
		cout << endl << "1 + 2 + ... + n = " << ketQua;
		break;
	case 5:
		system("CLS");
		cout << "\5. Bai Toan Thong Ke Diem (Ket Hop for voi switch)";
		cout << endl << "Nhap so luong sinh vien : ";
		cin >> n1;
		// Gọi hàm thống kê
		ThongKe(n1);
		break;

	case 6: 
		system("CLS");
		cout << "\n6. Kiem Tra Liet Ke So Nguyen To";
		cout << endl << "Nhap so luong so NT can tim : ";
		cin >> n1;
		LietKeSoNT(n1);
		break;

	case 7:
		system("CLS");
		cout << "\n7. Phuong trinh bac nhat 1 an";
		NhapSo();
		break;

	case 8:
		system("CLS");
		cout << "\n8. Tinh bieu thuc";
		NhapBieuThuc();
		break;

	case 9:
		system("CLS");
		cout << "\n9. Tim UCLN";
		NhapUCLN();
		break;
	case 10:
		system("CLS");
		cout << "\n10. Tro choi doan so";
		RunProgram();
		break;
	}
}



