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
  double luong;
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