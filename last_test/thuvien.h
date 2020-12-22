#define max 100

struct HoTen
{
  char ho[8];
  char tenDem[8];
  char ten[8];
};

struct NTNS
{
  int ngay;
  int thang;
  int nam;
};

struct NhanVien
{
  char maSo[8];
  HoTen hoten;
  NTNS ntns;
  char diaChi[21];
  int luong;
};

int TaoDSNV(NhanVien a[max], int &n, char filename[max])
{
  ifstream in(filename);

  if (!in)
    return 0;

  n = 0;
  in >> a[n].maSo;
  in >> a[n].hoten.ho;
  in >> a[n].hoten.tenDem;
  in >> a[n].hoten.ten;
  in >> a[n].ntns.ngay;
  in >> a[n].ntns.thang;
  in >> a[n].ntns.nam;
  in >> a[n].diaChi;
  in >> a[n].luong;

  while (!in.eof())
  {
    n = n + 1;
    in >> a[n].maSo;
    in >> a[n].hoten.ho;
    in >> a[n].hoten.tenDem;
    in >> a[n].hoten.ten;
    in >> a[n].ntns.ngay;
    in >> a[n].ntns.thang;
    in >> a[n].ntns.nam;
    in >> a[n].diaChi;
    in >> a[n].luong;
  }

  in.close();
  return 1;
}

void XuatKeNgang()
{
  for (int i = 0; i < 81; i++)
  {
    cout << "=";
  }
};

void XuatTieuDe()
{
  cout << "\n";
  XuatKeNgang();
  cout << "\n"
       << setiosflags(ios::left)
       << setw(11) << "Ma so"
       << setw(8) << "Ho"
       << setw(12) << "Ten Dem"
       << setw(8) << "Ten"
       << setw(4) << "Ngay"
       << setw(4) << "Thang"
       << setw(6) << "Nam"
       << setw(12) << "Dia chi"
       << setw(8) << "Luong"
       << "\n";
  XuatKeNgang();
};

void Xuat1NV(NhanVien a)
{
  cout
      << setiosflags(ios::left)
      << setw(11) << a.maSo
      << setw(8) << a.hoten.ho
      << setw(12) << a.hoten.tenDem
      << setw(8) << a.hoten.ten
      << setw(4) << a.ntns.ngay
      << setw(4) << a.ntns.thang
      << setw(6) << a.ntns.nam
      << setw(12) << a.diaChi
      << setw(8) << a.luong
      << "\n";
};

void XuatDSNV(NhanVien a[max], int n)
{
  cout << "\n";
  for (int i = 0; i < n; i++)
  {
    Xuat1NV(a[i]);
  }
  XuatKeNgang();
}


