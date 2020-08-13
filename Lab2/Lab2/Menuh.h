using namespace std;

void XuatMenu() {
	cout << "==============He thong chuong trinh==============";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Bai toan hinh tron";
	cout << "\n2. Doi gio phut giay";
	cout << "\n3. Bai toan hinh thang can";
	cout << "\n4. Bai toan hinh tru tron";
	cout << "\n5. Bai toan hinh cau";
	cout << "\n6. Tinh chi so co the (Body Mass Index)";
	cout << "\n7. Tinh khoang cach";
	cout << "\n8. Do lanh cua gio (Wind chill)";
	cout << "\n9. So sanh";
	cout << "\n10. Chuyen doi toa do";

}

int ChonMenu(int SoMenu) {

	int stt;
	for (;;)
	{

		system("CLS");
		XuatMenu();
		cout << "\nChon 1 so trong khoang [0... " << SoMenu << "] de chon Menu\n Chon: ";
		cin >> stt;
		if (0 <= stt && stt <= SoMenu) {
			break;
		}
	}
	return stt;
}

void XuLyMenu(int Menu, int &n) {
	double r, height, weight, xa, ya, xb, yb, t, v, phi, delta;
	int x, a, b, h, c, d;

	switch (Menu)
	{
	case 0:
		system("CLS");
		cout << "\nBan muon thoat chuong trinh?";
		break;
	case 1:
		system("CLS");
		cout << "\nBai toan hinh tron";
		cout << "\n Nhap ban kinh r: ";
		cin >> r;
		TinhChuViHinhTron(r);
		TinhDienTichHinhTron(r);
		break;
	case 2:
		system("CLS");
		cout << "\nDoi gio phut giay";
		cout << "\nnhap so x\n";
		cin >> x;
		DoiGioPhutGiay(x);
		break;
	case 3:
		system("CLS");
		cout << "\nBai toan hinh thang can";
		cout << "\nNhap day lon a:";
		cin >> a;
		cout << "\nNhap day be b:";
		cin >> b;
		cout << "\nNhap chieu cao h:";
		cin >> h;
		cout << "Canh ben cua hinh thang can: " << TinhCanhBenHinhThangCan(a, b, h) << endl;
		TinhChuViHinhThangCan(a, b, TinhCanhBenHinhThangCan(a,b,h));
		TinhDienTichHinhThangCan(a, b, h);
		break;
	case 4:
		system("CLS");
		cout << "\nBai toan hinh tru tron";
		cout << "\n Nhap ban kinh day r: ";
		cin >> r;
		cout << "\nNhap chieu cao h:";
		cin >> h;
		TinhTheTichHinhTruTron(r, h);
		TinhDienTichXungQuanhhHinhTruTron(r, h);
		TinhDienTichToanPhanhHinhTruTron(r, h);
		break;
	case 5:
		system("CLS");
		cout << "\nBai toan hinh cau";
		cout << "\n Nhap ban kinh hinh cau r: ";
		cin >> r;
		TinhTheTichHinhCau(r);
		TinhDienTichMatCau(r);
		break;
	case 6:
		system("CLS");
		cout << "\nTinh chi so co the (Body Mass Index)";		
		cout << "\nNhap can nang cua ban (kg):";
		cin >> weight;
		cout << "\n Nhap chieu cao cua ban (meter): ";
		cin >> height;
		TinhChiSoBMI(weight, height);
		break;
	case 7:
		system("CLS");
		cout << "\nTinh Khoang Cach";
		cout << "\nNhap toa do A(xa,ya):";
		cin >> xa >> ya;
		cout << "\nNhap toa do B(xb,yb):";
		cin >> xb >> yb;
		TinhKhoangCach(xa, ya, xb, yb);
		break;
	case 8:
		system("CLS");
		cout << "\nDo lanh cua gio (Wind chill)";
		cout << "Nhap nhiet do t (Fahrenheit) (tu -50 den 50): ";
		cin >> t;
		if (t <= -50 || t>= 50) {
			cout << "nhiet do tu 3 den 120: ";
			cin >> t;
		}
		cout << "Nhap van toc gio (dam/gio) (tu 3 den 120): ";
		cin >> v;
		if (v <= 3 || v >= 120) {
			cout << "van toc gio tu 3 den 120: ";
			cin >> v;
		}
		WindChill(t, v);
		break;
	case 9:
		system("CLS");
		cout << "\nNhap 4 so ngau nhien a,b,c,d\n";
		cin >> a >> b >> c >> d;
		cout << "\nTrong " << a << ", " << b 
			<< "\n\nSo lon nhat la " << TimMax(a, b);;
		TimMax4(a, b, c, d);
		break;
	case 10:
		system("CLS");
		cout << "\nChuyen doi toa do";
		cout << "\nNhap phi:";
		cin >> phi;
		cout << "\n Nhap delta: ";
		cin >> delta;
		cout << "\n Nhap height: ";
		cin >> height;
		cout << "\nDo cao = " << TinhDoCao(phi, delta, height);
		TinhPhuongVi(phi, delta, height);
		break;
	}

}

