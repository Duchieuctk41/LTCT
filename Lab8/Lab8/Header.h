#define MAX 100
#define NGANGDOI "="
#define NGANGDON '-'

typedef unsigned short int Byte;

struct NgayThangNam
{
	Byte ngaySinh;
	Byte thangSinh;
	unsigned int namSinh;
};

struct NhanVien
{
	char maNV[8];
	char hoLot[21];
	char ten[8];
	NgayThangNam ntns;
	char diaChi[21];
	double luong;
};

//Khai bao nguyen mau cac ham xu ly, nhap xuat
void Nhap_1NV(NhanVien &p);
void Nhap_1NV(NhanVien &p);
void XuatKeNgang();
void XuatTieuDe();
void Xuat_1NV(NhanVien p);
void Xuat_DSNV(NhanVien a[MAX], int n);
void ThemNhanVien_Cuoi(NhanVien a[MAX], int &n, NhanVien p);
void XoaNhanVien_MaNV(NhanVien a[MAX], int &n, char maNV[8]);

//Dinh nghia cac ham xu ly, nhap xuat
void Nhap_1NV(NhanVien &p)
{
	cout << endl << "Nhap ma so nhan vien (toi da 7 ky tu)";
	_flushall();
	gets_s(p.maNV, 8);

	cout << endl << "Nhap Ho lot";
	_flushall();
	gets_s(p.hoLot, 21);

	cout << endl << "Nhap ten";
	_flushall();
	gets_s(p.ten, 8);

	cout << endl << "Nhap ngay sinh";
	_flushall();
	cin >> p.ntns.ngaySinh;

	cout << endl << "Nhap thang sinh";
	_flushall();
	cin >> p.ntns.thangSinh;

	cout << endl << "Nhap nam sinh";
	_flushall();
	cin >> p.ntns.namSinh;

	cout << endl << "Nhap dia chi";
	_flushall();
	gets_s(p.diaChi);

	cout << endl << "Nhap luong";
	_flushall();
	cin >> p.luong;
}

void Nhap_DSNV(NhanVien a[MAX], int &n)
{
	cout << endl << "Nhap n";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		system("CLS");
		cout << endl << "Nhap thong tin nhan vien thu " << i + 1 << ":";
		Nhap_1NV(a[i]);
	}
}

void XuatKeNgang()
{
	cout << endl
		<< setiosflags(ios::left)
		<< ':';

	for (int i = 0; i <= 76; i++)
		cout << NGANGDOI;
	cout << ":";
}

void XuatTieuDe()
{
	XuatKeNgang();
	cout << endl << setiosflags(ios::left) << ":"
		<< setw(8) << "MaNV"
		<< ":"
		<< setw(21) << "Ho"
		<< setw(8) << "Ten"
		<< ":"
		<< setw(12) << "NTN Sinh"
		<< ":"
		<< setw(16) << "Dia Chi"
		<< ":"
		<< setw(12) << "Luong"
		<< ":";
	XuatKeNgang();
}

void Xuat_1NV(NhanVien p)
{
	cout << setiosflags(ios::left)
		<< ":"
		<< setw(8) << p.maNV
		<< ":"
		<< setw(21) << p.hoLot
		<< ":"
		<< setw(8) << p.ten
		<< ":"
		<< setw(2) << p.ntns.ngaySinh
		<< "/"
		<< setw(2) << p.ntns.thangSinh
		<< "/"
		<< setw(4) << p.ntns.namSinh
		<< ":"
		<< setw(16) << p.diaChi
		<< ":"
		<< setw(12) << setiosflags(ios::fixed) << setprecision(2)
		<< p.luong
		<< ":";
}

void Xuat_DSNV(NhanVien a[MAX], int n)
{
	XuatTieuDe();
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		Xuat_1NV(a[i]);
	}
	XuatKeNgang();
}

void ThemNhanVien_Cuoi(NhanVien a[MAX], int &n, NhanVien p)
{
	a[n++] = p;
}

void XoaNhanVien_MaNV(NhanVien a[MAX], int &n, char maNV[8])
{
	int i, j;
	for ( i = 0; i < n; i++)
	{
		if (strcmp(a[i].maNV, maNV) == 0)
			break;
		if (i == n)
		{
			cout << endl << "Khong tim thay MaNV " << a[i].maNV << " trong danh sach!";
			return;
		}
	}
	for (j = i + 1; j < n; j++)
	{
		a[j - 1] = a[j];
		n--;
	}
}
// Trong tập tin menu.h :
// Khai báo nguyên mẫu các hàm xử lý menu
//bổ sung sau
// Định nghĩa các hàm xử lý menu