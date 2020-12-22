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
  do
  {
    in >> a[n].maSo;
    in >> a[n].hoten.ho;
    in >> a[n].hoten.tenDem;
    in >> a[n].hoten.ten;
    in >> a[n].ntns.ngay;
    in >> a[n].ntns.thang;
    in >> a[n].ntns.nam;
    in >> a[n].diaChi;
    in >> a[n].luong;
    n++;
  } while (!in.eof());

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
  cout << "\n";
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
  for (int i = 0; i < n; i++)
  {
    Xuat1NV(a[i]);
  }
  XuatKeNgang();
}

void TimNV_Nam(NhanVien a[max], int n, int nam)
{
  bool kq = false;
  for (int i = 0; i < n; i++)
  {
    if (a[i].ntns.nam == nam)
      kq = true;
    if (kq)
    {
      int dem = 0;
      XuatTieuDe();
      for (int i = 0; i < n; i++)
        if (a[i].ntns.nam == nam)
        {
          Xuat1NV(a[i]);
          dem++;
        }
      XuatKeNgang();
      cout << "\nCo " << dem << " nhan vien sinh nam " << nam << " trong danh sach.";
      break;
    }
  }
  if (!kq)
    cout << "\nKhong tim thay nhan vien sinh nam " << nam << " trong danh sach.\n";
};

int Tim_MinSalary(NhanVien a[max], int n)
{
  int min = a[0].luong;
  for (int i = 1; i < n; i++)
    if (min > a[i].luong)
    {
      min = a[i].luong;
    }
  return min;
};

void XuatNV_MinSalary(NhanVien a[max], int n)
{
  int min = Tim_MinSalary(a, n);
  int dem = 0;
  XuatTieuDe();
  for (int i = 0; i < n; i++)
    if (a[i].luong == min)
    {
      Xuat1NV(a[i]);
      dem++;
    }
  XuatKeNgang();
  cout << "\nCo " << dem << " nhan vien co luong thap nhat";
};
