#define max 100

struct NTNS
{
  int ngay;
  int thang;
  int nam;
};

struct NhanVien
{
  char Maso[8];
  char Ho[8];
  char TenDem[8];
  char Ten[8];
  NTNS ntns;
  char DiaChi[21];
  int Luong;
};

int TaoDanhSachNhanVien(NhanVien a[max], int &n, char filename[max])
{
  ifstream in(filename);

  if (!in)
  {
    return 0;
  }
  n = 0;
  in >> a[n].Maso;
  in >> a[n].Ho;
  in >> a[n].TenDem;
  in >> a[n].Ten;
  in >> a[n].ntns.ngay;
  in >> a[n].ntns.thang;
  in >> a[n].ntns.nam;
  in >> a[n].DiaChi;
  in >> a[n].Luong;

  while (!in.eof())
  {
    n = n + 1;
    in >> a[n].Maso;
    in >> a[n].Ho;
    in >> a[n].TenDem;
    in >> a[n].Ten;
    in >> a[n].ntns.ngay;
    in >> a[n].ntns.thang;
    in >> a[n].ntns.nam;
    in >> a[n].DiaChi;
    in >> a[n].Luong;
  }
  in.close();
  return 1;
}

void XuatDongKe()
{
  for (int i = 0; i < 81; i++)
  {
    "=";
  }
  cout << "\n";
}

void XuatTieuDe()
{
  XuatDongKe();
  cout << setiosflags(ios::left)
       << "|"
       << setw(8) << "Ma So"
       << setw(8) << "Ho"
       << setw(8) << "va"
       << setw(8) << "ten"
       << setw(14) << "ntns"
       << setw(21) << "Dia chi"
       << setw(8) << "Luong"
       << "|"
       << "\n";
  XuatDongKe();
}

void Xuat1NV(NhanVien a)
{
  cout << setiosflags(ios::left)
       << "|"
       << setw(8) << a.Maso
       << setw(8) << a.Ho
       << setw(8) << a.TenDem
       << setw(8) << a.Ten
       << setw(2) << a.ntns.ngay << "/"
       << setw(2) << a.ntns.thang << "/"
       << setw(8) << a.ntns.nam
       << setw(21) << a.DiaChi
       << setw(8) << a.Luong
       << "|"
       << "\n";
}

void XuatDSNV(NhanVien a[max], int n)
{
  XuatTieuDe();
  for (int i = 0; i < n; i++)
  {
    Xuat1NV(a[i]);
  }
  XuatDongKe();
}

void TimKiemNhanVienTheoNam(NhanVien a[max], int n, int nam)
{
  int vitri[max],
      m = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i].ntns.nam == nam)
    {
      vitri[m] = i;
      m = m + 1;
    }
  }
  if (m == 0)
  {
    cout << "\nKhong tim thay nhan vien sinh nam " << nam << " trong danh sach.";
  }
  else
  {
    cout << "\nTim thay " << m << " nhan vien sinh nam " << nam << " trong danh sach.";
    XuatTieuDe();
    for (int i = 0; i < m; i++)
    {
      Xuat1NV(a[vitri[i]]);
    }
    XuatDongKe();
  }
}

int TimLuongThapNhat(NhanVien a[max], int n)
{
  int min = a[0].Luong;
  for (int i = 1; i < n; i++)
  {
    if (min > a[i].Luong)
    {
      min = a[i].Luong;
    }
  }
  return min;
}

void XoaNhanVienLuongThapNhat(NhanVien a[max], int &n)
{
  int m = 0,
      min = TimLuongThapNhat(a, n);
  for (int i = 0; i < n; i++)
  {
    if (a[i].Luong != min)
    {
      a[m] = a[i];
      m = m + 1;
    }
  }
  n = m;
}

void HoanVi(NhanVien &a, NhanVien &b)
{
  NhanVien t = a;
  a = b;
  b = t;
}

void SapXepNhanVienTheoNamVaMaSo(NhanVien a[max], int n)
{
  for (int i = 0; i < n - 1; i++)
    for (int j = i + 1; j < n; j++)
      if (a[i].ntns.nam > a[j].ntns.nam)
        HoanVi(a[i], a[j]);

  for (int i = 0; i < n - 1; i++)
    for (int j = 0; j < n; j++)
      if (a[i].ntns.nam == a[j].ntns.nam)
        if (strcmp(a[i].Maso, a[j].Maso) > 0)
          HoanVi(a[i], a[j]);
}

void LietKeNhanVienTheoTen(NhanVien a[max], int n, char ten[8])
{
  int vitri[max],
      m = 0;
  for (int i = 0; i < n; i++)
  {
    if (strcmp(a[i].Ten, ten) == 0)
    {
      vitri[m] = i;
      m = m + 1;
    }
  }
  if (m == 0)
  {
    cout << "\nKhong tim thay nhan vien co ten " << ten << " trong danh sach.";
  }
  else
  {
    cout << "\nCo " << m << " nhan vien co ten " << ten << " trong danh sach.";
    XuatTieuDe();
    for (int i = 0; i < m; i++)
    {
      Xuat1NV(a[vitri[i]]);
    }
  }
  XuatDongKe();
}

void SapXepNhanVienTangTheoLuongVaMaSo(NhanVien a[max], int n)
{
  for (int i = 0; i < n - 1; i++)
    for (int j = i + 1; j < n; j++)
      if (a[i].Luong > a[j].Luong)
        HoanVi(a[i], a[j]);

  for (int i = 0; i < n - 1; i++)
    for (int j = i + 1; j < n; j++)
      if (a[i].Luong == a[j].Luong)
        if (strcmp(a[i].Maso, a[j].Maso) > 0)
          HoanVi(a[i], a[j]);
}
