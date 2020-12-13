#define max 100
typedef unsigned short int Byte;

struct NgayThangNam
{
  Byte NgaySinh;
  Byte ThangSinh;
  unsigned int NamSinh;
};

struct NhanVien
{
  char MaNV[8];
  char HoLot[21];
  char Ten[8];
  NgayThangNam ntns;
  char DiaChi[21];
  double Luong;
};

void XuatKeNgang()
{
  cout << endl
       << setiosflags(ios::left)
       << ":";
  for (int i = 0; i < 90; i++)
  {
    cout << "=";
  }
  cout << ":";
};

void XuatTieuDe()
{
  cout << endl
       << setiosflags(ios::left) << ":"
       << setw(8) << "MaNV" << setw(21) << "Ho lot"
       << setw(8) << "Ten" << setw(12) << "NTN"
       << setw(21) << "Dia Chi" << setw(8) << "Luong";
}

void Xuat_1NV(NhanVien p)
{
  cout << endl
       << setiosflags(ios ::left)
       << ":" << setw(8) << p.MaNV
       << ":" << setw(21) << p.HoLot
       << ":" << setw(8) << p.Ten
       << "/" << setw(2) << p.ntns.NgaySinh
       << "/" << setw(2) << p.ntns.ThangSinh
       << ":" << setw(4) << p.ntns.NamSinh
       << ":" << setw(21) << p.DiaChi
       << ":" << setw(12) << setiosflags(ios::fixed) << setprecision(2)
       << p.Luong << ":";
};

void Xuat_DSNV(NhanVien a[max], int n)
{
  XuatKeNgang();
  XuatTieuDe();
  XuatKeNgang();
  for (int i = 0; i < n; i++)
  {
    cout << endl;
    Xuat_1NV(a[i]);
  }
  XuatKeNgang();
}

void Nhap1NV(NhanVien &p)
{
  cout << "\nNhap mssv: ";
  _flushall();
  fgets(p.MaNV, 8, stdin);
  p.MaNV[strlen(p.MaNV) - 1] = '\0';

  cout << "\nNhap Ho: ";
  _flushall();
  fgets(p.HoLot, 21, stdin);
  p.HoLot[strlen(p.HoLot) - 1] = '\0';

  cout << "\nNhap ten: ";
  _flushall();
  fgets(p.Ten, 8, stdin);
  p.Ten[strlen(p.Ten) - 1] = '\0';

  cout << "\nNhap ngay sinh: ";
  _flushall();
  cin >> p.ntns.NgaySinh;

  cout << "\nNhap thang sinh: ";
  _flushall();
  cin >> p.ntns.ThangSinh;

  cout << "\nNhap nam sinh:";
  _flushall();
  cin >> p.ntns.NamSinh;

  cout << "\nNhap dia chi:";
  _flushall();
  fgets(p.DiaChi, 21, stdin);
  p.DiaChi[strlen(p.DiaChi) - 1] = '\0';

  cout << "\nNhap luong:";
  _flushall();
  cin >> p.Luong;
};

void NhapDSNV(NhanVien a[max], int n)
{
  for (int i = 0; i < 1; i++)
  {
    Nhap1NV(a[i]);
  }
}
