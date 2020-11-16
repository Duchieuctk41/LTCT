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
void XuatKeNgang();
void XuatTieuDe();
void Xuat_1NV(NhanVien p);
void Xuat_DSNV(NhanVien a[MAX], int n);
void ThemNhanVien_Cuoi(NhanVien a[MAX], int &n, NhanVien p);
void XoaNhanVien_MaNV(NhanVien a[MAX], int &n, char maNV[8]);
void SuaNhanVien_MaNV(NhanVien a[MAX], int &n, char maNV[8]);
int TimNhanVien_MaNV(NhanVien a[MAX], int n, char maNV[8]);
void TimKiemNhanVien_Ten(NhanVien a[MAX], int &n, char tenNV[8]);
void SapTang_MaNV(NhanVien a[MAX], int n);
void HoanVi(NhanVien &p, NhanVien &q);
void SapXep_Ho_Luong(NhanVien a[MAX], int n);
double TinhTongLuong(NhanVien a[MAX], int n);

//Dinh nghia cac ham xu ly, nhap xuat
void Nhap_1NV(NhanVien &p)
{
  cout << endl
       << "Nhap ma so nhan vien (toi da 7 ky tu)";
  _flushall();
  fgets(p.maNV, 8, stdin);

  cout << endl
       << "Nhap Ho lot";
  _flushall();
  fgets(p.hoLot, 21, stdin);

  cout << endl
       << "Nhap ten";
  _flushall();
  fgets(p.ten, 8, stdin);

  cout << endl
       << "Nhap ngay sinh";
  _flushall();
  cin >> p.ntns.ngaySinh;

  cout << endl
       << "Nhap thang sinh";
  _flushall();
  cin >> p.ntns.thangSinh;

  cout << endl
       << "Nhap nam sinh";
  _flushall();
  cin >> p.ntns.namSinh;

  cout << endl
       << "Nhap dia chi";
  _flushall();
  fgets(p.diaChi, 21, stdin);

  cout << endl
       << "Nhap luong";
  _flushall();
  cin >> p.luong;
}

void Nhap_DSNV(NhanVien a[MAX], int &n)
{
  cout << endl
       << "Nhap n";
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    system("CLS");
    cout << endl
         << "Nhap thong tin nhan vien thu " << i + 1 << ":";
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
  cout << endl
       << setiosflags(ios::left) << ":"
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
  for (i = 0; i < n; i++)
  {
    if (strcmp(a[i].maNV, maNV) == 0)
      break;
    if (i == n)
    {
      cout << endl
           << "Khong tim thay MaNV " << a[i].maNV << " trong danh sach!";
      return;
    }
  }
  for (j = i + 1; j < n; j++)
    a[j - 1] = a[j];
  n--;
}

void SuaNhanVien_MaNV(NhanVien a[MAX], int &n, char maNV[8])
{
  int i;
  char tl;
  for (i = 0; i < n; i++)
    if (strcmp(a[i].maNV, maNV) == 0)
      break;
  if (i == n)
  {
    cout << endl
         << "Khong co nhan vien can tim, vui long kiem tra lai MSNV ";
    return;
  }
  cout << endl
       << "Sua thong tin nhan vien co ma so = " << maNV
       << endl
       << "Sua ma nhan vien! (Khong sua nhan k) ";
  tl = _getch();
  if (tl != 'k' && tl != 'K')
  {
    cout << "\nMa Nhan Vien : ";
    _flushall();
    fgets(a[i].maNV, 8, stdin);
  }

  cout << "\nCo sua ho va chu lot! (Khong sua nhan k) ";
  tl = _getch();
  if (tl != 'k' && tl != 'K')
  {
    cout << "\nHo va chu lot: ";
    _flushall();
    fgets(a[i].hoLot, 21, stdin);
  }
  cout << "\nCo sua ten! (Khong sua nhan k) ";
  tl = _getch();
  if (tl != 'k' && tl != 'K')
  {
    cout << "\nTen nhan vien: ";
    _flushall();
    fgets(a[i].ten, 8, stdin);
  }
  cout << "\nCo sua ngay sinh! (Khong sua nhan k) ";
  tl = _getch();
  if (tl != 'k' && tl != 'K')
  {
    cout << "\nNgay sinh: ";
    _flushall();
    cin >> a[i].ntns.ngaySinh;
  }
  cout << "\nCo sua thang sinh! (Khong sua nhan k) ";
  tl = _getch();
  if (tl != 'k' && tl != 'K')
  {
    cout << "\nThang sinh: ";
    _flushall();
    cin >> a[i].ntns.thangSinh;
  }
  cout << "\nCo sua nam sinh khong! (Khong sua nhan k) ";
  tl = _getch();
  if (tl != 'k' && tl != 'K')
  {
    cout << "\nNam sinh: ";
    _flushall();
    cin >> a[i].ntns.namSinh;
  }
  cout << "\nCo sua dia chi! (Khong sua nhan k) ";
  tl = _getch();
  if (tl != 'k' && tl != 'K')
  {
    cout << "\nNhap dia chi: ";
    _flushall();
    fgets(a[i].diaChi, 21, stdin);
  }
  cout << "\nCo sua luong! (Khong sua nhan k) ";
  tl = _getch();
  if (tl != 'k' && tl != 'K')
  {
    cout << "\nNhap luong: ";
    _flushall();
    cin >> a[i].luong;
  }
}

int TimKiemNhanVien_MaNV(NhanVien a[MAX], int &n, char maNV[8])
{
  int i,
      kq = -1;
  for (i = 0; i < n; i++)
    if (strcmp(a[i].maNV, maNV) == 0)
    {
      kq = i;
      break;
    }
  return kq;
}

void TimKiemNhanVien_Ten(NhanVien a[MAX], int &n, char tenNV[8])
{
  int i,
      dem = 0;
  for (i = 0; i < n; i++)
    if (strcmp(a[i].ten, tenNV) == 0)
      dem++;
  if (!dem)
  {
    cout << endl
         << "Khong co nhan vien ten " << tenNV << " trong danh sach";
  }
  else
  {
    cout << endl
         << "Co " << dem << " nhan vien co ten " << tenNV;
    XuatTieuDe();
    for (i = 0; i < n; i++)
      if (strcmp(a[i].ten, tenNV) == 0)
      {
        cout << endl;
        Xuat_1NV(a[i]);
      }
    XuatKeNgang();
  }
}

void SapTang_MaNV(NhanVien a[MAX], int n)
{
  int i, j;
  for ( i = 0; i < n - 1; i++)
  {
    for ( j = i + 1; j < n; j++)
    {
      if(_strcmpi(a[i].maNV, a[j].maNV) > 0)
        HoanVi(a[i], a[j]);
    }
  } 
}

void HoanVi(NhanVien &p, NhanVien &q)
{
  NhanVien t;
  t = p;
  p = q;
  q = t;
}

void SapXep_Ho_Luong(NhanVien a[MAX], int n)
{
  // Sap xep theo ten
  for ( int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if(_strcmpi(a[i].ten, a[j].ten) > 0)
          HoanVi(a[i], a[j]);
    }
  }
  // Sap xep theo ho
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (_strcmpi(a[i].ten, a[j].ten) == 0)
        if (_strcmpi(a[i].hoLot, a[j].hoLot) > 0)
          HoanVi(a[i], a[j]);
    }
  }
  // Sap xep theo luong
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (_strcmpi(a[i].ten, a[j].ten) == 0 && _strcmpi(a[i].hoLot, a[j].hoLot) == 0)
        if ((a[i].luong > a[j].luong))
          HoanVi(a[i], a[j]);
    }
  }
}

double TinhTongLuong(NhanVien a[MAX], int n)
{
  double salary = 0;
  for (int i = 0; i < n; i++)
  {
    salary += a[i].luong;
  }
  return salary;
}

void XuatNV_Luong_TuXTroLen(NhanVien a[MAX], int n, double x)
{
  int kq = 0;
  XuatTieuDe();
  for (int i = 0; i < n; i++)
  {
    if(a[i].luong >= x)
    {
      cout << endl;
      Xuat_1NV(a[i]);
      kq++;
    }
  }
  if(!kq)
    cout << endl
         << "Khong co nhan vien nao co muc luong tren " << x;
  else
    cout << endl
         << "So nhan vien co luong tu" << x << "tro len la " << kq;
  XuatKeNgang();
}

void XuatNV_NamSinh_TuUDenY(NhanVien a[MAX], int n, unsigned int u, unsigned int y)
{
  int kq = 0;
  XuatTieuDe();
  for (int i = 0; i < n; i++)
  {
    if(u <= a[i].ntns.namSinh && a[i].ntns.namSinh <= y)
    {
      cout << endl;
      Xuat_1NV(a[i]);
      kq++;
    }
  }
  if(!kq)
    cout << endl
         << "Khong co nhan vien nao co nam sinh tu " << u << " - " << y;
  else
    cout << endl
         << "Co " << kq << " nhan vien co nam sinh tu " << u << " - " << y;
}
