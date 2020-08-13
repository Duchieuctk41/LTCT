#define PI  3.1415926
#define max 3600
#define sixty 60

using namespace std;

double TinhChuViHinhTron(double r)
{
	double ChuVi;
	ChuVi = 2 * r * PI;
	cout << "Chu vi hinh tron co ban kinh " << r << " la:\n" << ChuVi << endl;
	return ChuVi;

}

double TinhDienTichHinhTron(double r)
{
	double DienTich;
	DienTich = r * r * PI;
	cout << "Dien tich hinh tron co ban kinh " << r << " la:\n" << DienTich << endl;
	return DienTich;
}

void DoiGioPhutGiay(int x) {
	int gio, phut, giay;
	gio = x / max;
	phut = (x % max) / sixty;
	giay = (x % max) % sixty;
	cout << gio << " : " << phut << " : " << giay << endl;
}

double TinhCanhBenHinhThangCan(int dayLon, int dayBe, int chieuCao) 
{

	double CanhBen;
	CanhBen = sqrt(pow(((dayLon - dayBe) / 2), 2) + pow(chieuCao, 2));
	return CanhBen;
}

double TinhChuViHinhThangCan(int dayLon, int dayBe, double canhBen)
{

	double ChuVi;
	ChuVi = dayLon + dayBe + 2 * canhBen;
	cout << "Chu vi cua hinh thang can: " << ChuVi << endl;
	return ChuVi;
}

double TinhDienTichHinhThangCan(int dayLon, int dayBe, int chieuCao) 
{

	double DienTich;
	DienTich = (((dayLon + dayBe) * chieuCao) / 2);
	cout << "Dien tich cua hinh thang can: " << DienTich << endl;
	return DienTich;
}

double TinhTheTichHinhTruTron(double r, int h)
{
	double TheTich;
	TheTich = 4 * PI * pow(r, 2) * h;
	cout << "\nTHE TICH cua hinh tru tron ban kinh: " << r << ", chieu cao: "
		<< h << " la:" << endl << TheTich;
	return TheTich;
}

double TinhDienTichXungQuanhhHinhTruTron(double r, int h)
{
	double DienTichXungQuanh;
	DienTichXungQuanh = 2 * PI * r * h;
	cout << "\nDIEN TICH XUNG QUANH cua hinh tru tron ban kinh: " << r << ", chieu cao: " 
		<< h << " la:" << endl << DienTichXungQuanh;
	return DienTichXungQuanh;
}

double TinhDienTichToanPhanhHinhTruTron(double r, int h)
{
	double DienToanPhan;
	DienToanPhan = (2 * PI * r * h) + (2 * PI * pow(r,2)) ;
	cout << "\nDIEN TICH TOAN PHAN cua hinh tru tron ban kinh: " << r << ", chieu cao: " 
		<< h << " la:" << endl << DienToanPhan;
	return DienToanPhan;
}

double TinhTheTichHinhCau(double r)
{
	double TheTich;
	TheTich = (4 / 3) * PI * pow(r, 3);
	cout << "\nTHE TICH HINH CAU ban kinh: " << r 
		<< " la:" << endl << TheTich;
	return TheTich;
}

double TinhDienTichMatCau(double r)
{
	double DienTich;
	DienTich = 4 * PI * pow(r, 2);
	cout << "\nDIEN TICH HINH CAU ban kinh: " << r
		<< " la:" << endl << DienTich;
	return DienTich;
}

double TinhChiSoBMI(double khoiLuong, double chieuCao)
{
	double BMI;
	BMI = khoiLuong / pow(chieuCao, 2);
	cout << "Chi so co the cua ban la: " << BMI;
	if (BMI < 18.5)
	{
		cout << "\nBan hoi gay";
	} if (18.5 <= BMI <= 25)
	{
		cout << "\nBan co co the can doi";
	}
	else {
		cout << "\nBan hoi beo";
	}

	return BMI;
}

double TinhKhoangCach(double xa, double ya, double xb, double yb)
{
	double d;
	d = sqrt(pow((xb - xa), 2) + pow((yb - ya), 2));
	cout << "\nKhoang cach 2 diem A, B: " << d;
	return d;
}

double WindChill(double t, double v)
{
	double WindChill;
	WindChill = (35.74 + (0.6215 *t) +((0.4275 * t) - 35.75) * (v * 0.16));
	cout << "\nDo lanh cua gio la: " << WindChill;
	return WindChill;
}

double TimMax(double x, double y)
{
	double TimMax;
	TimMax = x > y ? x : y;
	return TimMax;

}

int TimMax4(int a, int b, int c, int d)
{
	double TimMax4;
	TimMax4 = TimMax(TimMax(a, b), TimMax(c, d));
	cout << "\nTrong " << a << ", " << b << ", " << c << ", " << d
		<< "\n\nSo lon nhat la " << TimMax4;;
	return TimMax4;
}

double TinhDoCao(double phi, double delta, double h)
{
	double Altitude;

	Altitude = asin((sin(phi) * sin(delta)) + (cos(phi) * cos(delta) * cos(h)));
	return Altitude;
}

double TinhPhuongVi(double phi, double delta, double h)
{
	double Azimuth;

	Azimuth = acos(((cos(phi) * sin(delta)) - (sin(phi) * cos(delta) * cos(h))) / cos(TinhDoCao(phi,delta,h)));
	cout << "\nPhuong vi = " << Azimuth;
	return Azimuth;
}


