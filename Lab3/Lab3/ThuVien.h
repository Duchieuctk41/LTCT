#define TAB "\t";

using namespace std;

void GiaiPhuongTrinhBac2(float a, float b, float c) {
	float delta, x;
	delta = b * b - 4 * a * c;

	if (delta < 0)
	{
		cout << endl << "Phuong trinh vo nghiem";
	}
	else if (delta == 0.0)
	{
		x = -b / (2 * a);
		cout << endl << "Phuong trinh co nghiem kep x = " << x;
	}
	else
	{
		cout << endl << "Phuong trinh co 2 nghiem phan biet : ";

		x = (-b + sqrt(delta)) / (2 * a);
		cout << "x1 = " << setprecision(5) << x;

		x = (-b - sqrt(delta)) / (2 * a);
		cout << " va x2 = " << setprecision(5) << x;
	}
}

int NhapSoTrongMien(int min, int max)
{
	int so; 
	do
	{
		cout << endl << "Nhap mot so trong doan ["
			<< min << ".." << max << "] : ";
		cin >> so;
	} while (so < min || so > max);
		return so;
}

int TimSoNgay(int thang, int nam)
{
	// Khai báo biến để lưu số ngày
	int soNgay;
	// Dùng lệnh switch để kiểm tra theo tháng
	switch (thang)
	{
		// Nếu là tháng 1,3,5,7,8,10,12 thì số ngày là 31
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		soNgay = 31;
		break;
		// Nếu là tháng 4,6,9,11 thì số ngày là 30
	case 4:
	case 6:
	case 9:
	case 11:
		soNgay = 30;
		break;
		// Trường hợp còn lại (tháng 2), số ngày = 28 hoặc
		// 29, phụ thuộc vào năm đó có nhuận hay không.
	default:
		// Kiểm tra có phải năm nhuận hay không?
		if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
			soNgay = 29; // TH năm nhuận
		else
			soNgay = 28; // TH không phải năm nhuận
		break;

	}
	return soNgay;
}

int PhanLoaiTamGiac(double a, double b, double c)
{
	int kq = 0; // Khai báo biến lưu kết quả phân loại
	// Nếu a, b, c là 3 cạnh của tam giác
	if (a + b > c && a + c > b && b + c > a)
	{
		// Kiểm tra nếu 3 cạnh bằng nhau thì đó là TG đều
		if (a == b && b == c)
			kq = 1;
		else // TH không phải TG đều
		// Kiểm tra nếu 2 cạnh bằng nhau thì là TG cân
			if (a == b || b == c || a == c)
			{
				// Kiểm tra có phải là TG vuông?
				if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
					kq = 4; // TH TG vuông cân
				else
					kq = 2; // TH TG cân

			}
			else // TH không phải TG cân
			// Kiểm tra có phải tam giá vuông hay không?
				if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
					kq = 3; // TH TG vuông
				else
					kq = 5; // TH TG thường

	}
	// Gán giá trị kq cho hàm và trở về nơi gọi hàm
	return kq;
}

void ThongBao(long loaiTg, double a, double b, double c)
{
	// Dùng lệnh switch để kiểm tra theo tháng
	switch (loaiTg)
	{
	case 0: cout << endl << a << ", " << b << ", " << c
		<< " khong phai la 3 canh cua 1 tam giac";
		break;
	case 1: cout << endl << a << ", " << b << ", " << c
		<< " la do dai 3 canh cua 1 tam giac deu";
		break;
	case 2: cout << endl << a << ", " << b << ", " << c
		<< " la do dai 3 canh cua 1 tam giac can";
		break;
	case 3: cout << endl << a << ", " << b << ", " << c
		<< " la do dai 3 canh cua 1 tam giac vuong";
		break;
	case 4: cout << endl << a << ", " << b << ", " << c
		<< " la do dai 3 canh cua 1 tam giac vuong can";
		break;
	case 5: cout << endl << a << ", " << b << ", " << c
		<< " la do dai 3 canh cua 1 tam giac thuong";
		break;

	}
}

int TinhGiaiThua(unsigned int n)
{
	int kq;
	if (n < 2)
		return 1;
	else
	{
		kq = 1; // Khai báo biến lưu kết quả
		// Duyệt qua các số từ 2 tới n
		for (int i = 2; i <= n; i++)
			kq *= i;
		// Gán giá trị kq cho hàm và trở về nơi gọi hàm
		return kq;
	}
}

int TinhTong(unsigned int n)
{
	int sum = 0; 
	for (int i = 1; i <= n; i++)
		sum += i;

		return sum;
}

unsigned short NhapDiem(int stt)
{
	unsigned short diem;
	do
	{
		cout << endl << "Nhap diem cua SV thu " << stt << " : ";
		cin >> diem;
	} while (diem < 0 || diem > 10);
	return diem;
}

void ThongKe(unsigned int n)
{
	// Khai báo các biến đếm để thống kê theo điểm số.
	int d0 = 0, d1 = 0, d2 = 0, d3 = 0, d4 = 0, d5 = 0,
		d6 = 0, d7 = 0, d8 = 0, d9 = 0, d10 = 0;
	unsigned short diem;
	// Duyệt qua từng sinh viên
	for (int i = 0; i < n; i++)
	{
		// Nhập điểm cho sinh viên thứ i
		diem = NhapDiem(i + 1);
		switch (diem)
		{
		case 10: d10++;
		case 9: d9++;
		case 8: d8++;
		case 7: d7++;
		case 6: d6++;
		case 5: d5++;
		case 4: d4++;
		case 3: d3++;
		case 2: d2++;
		case 1: d1++;
		case 0: d0++;
		}
	}
	// Xuất kết quả thống kê
	cout << endl << "So SV co diem >= 0 : " << d0;
	cout << endl << "So SV co diem >= 1 : " << d1;
	cout << endl << "So SV co diem >= 2 : " << d2;
	cout << endl << "So SV co diem >= 3 : " << d3;
	cout << endl << "So SV co diem >= 4 : " << d4;
	cout << endl << "So SV co diem >= 5 : " << d5;
	cout << endl << "So SV co diem >= 6 : " << d6;

		cout << endl << "So SV co diem >= 7 : " << d7;
	cout << endl << "So SV co diem >= 8 : " << d8;
	cout << endl << "So SV co diem >= 9 : " << d9;
	cout << endl << "So SV co diem >= 10 : " << d10;
}

int KiemTra_NT(int n)
{
	int kq, m, i;
	if (n < 2) // Những số nhỏ hơn 2 đều
		kq = 0; // không phải là số nguyên tố
	else
	{
		m = (int)sqrt((float)n); // Lưu căn bậc 2 của n
		i = 2; // Lưu chỉ số để kiểm tra
		kq = 1; // Lưu kết quả kiểm tra
		// Duyệt qua từng giá trị i từ 2 -> m để kiểm tra
		// n có chia hết cho i không? Nếu có, gán kq = 0.
		while (i <= m && kq)
		{
			if (n % i == 0)
				kq = 0;
			i++;
		}
	}
	return kq;
}

void LietKeSoNT(unsigned int n)
{
	int dem = 0, so = 2;
	// Trong khi chưa tìm đủ n số nguyên tố thì
	while (dem < n)
	{
		// Kiểm tra so có phải là số nguyên tố?
		if (KiemTra_NT(so))
		{
			// Nếu đúng, xuất số đó và tăng biến đếm
			cout << so << TAB;
			dem++;
		}
		// Tăng so lên 1 đơn vị để kiểm tra số tiếp theo
		so++;
	}
}
