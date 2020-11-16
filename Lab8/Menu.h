
void XuatMenu()
{
  cout << "\n============== HE THONG CHUC NANG =================\n";
  cout << "\n0. Thoat khoi chuong trinh";
  cout << "\n1. Nhap danh sach nhan vien";
  cout << "\n2. xem danh sach nhan vien";
  cout << "\n3. Them mot nhan vien vao cuoi danh sach";
  cout << "\n4. Xoa mot nhan vien theo ma nhan vien";
  cout << "\n5. Sua thong tin nhan vien theo ma nhan vien";
  cout << "\n6. Tim nhan vien theo ma so";
  cout << "\n7. Tim nhan vien theo ten";
  cout << "\n8. Sap danh sach nhan vien tang dan theo ma nhan vien";
  cout << "\n9. Sap danh sach nhan vien tang dan theo ten - ho - luong";
  cout << "\n10. Tinh tong luong thang";
  cout << "\n11. Liet ke cac nhan vien co luong >= x (nhap tu ban phim)";
  cout << "\n12. Liet ke cac nhan vien co nam sinh trong khoang [u,v]";
  cout << "\n=================================================================";
  cout << "\n (Du lieu da duoc khoi tao, chon 1 neu muon tao lai du lieu.)";
  cout << "\n=================================================================";
}

int ChonMenu(int soMenu)
{
  int stt;

  for (;;)
  {
    XuatMenu();
    cout << "\nChon chuc nang trong khoang [0.." << soMenu << "] : ";
    cin >> stt;

    if (0 <= stt && stt <= soMenu)
      break;
  }

  return stt;
}

void XuLyMenu(int Menu, NhanVien a[MAX], int &n)
{
  NhanVien p;
  char maNV[8], tenNV[8];
  int kq;
  double x;
  unsigned int u, y;
  switch (Menu)
  {
  case 0:
    system("CLS");
    cout << "\n0. Thoat khoi chuong trinh\n";
    cout << endl
         << "Nhan phim bat ki de thoat khoi chuong trinh";
    break;
  case 1:
    system("CLS");
    cout << "\n1. Nhap danh sach nhan vien";
    Nhap_DSNV(a, n);
    system("CLS");
    Xuat_DSNV(a, n);
    cout << endl
         << "So nhan vien trong danh sach n: " << n;
    break;
  case 2:
    system("CLS");
    cout << "\n2. Xem danh sach nhan vien";
    Xuat_DSNV(a, n);
    cout << endl
         << "So nhan vien trong danh sach n: " << n;
    break;
  case 3:
    system("CLS");
    cout << "\n3. Them mot nhan vien";
    cout << "\nNhap thong tin nhan vien can chen vao cuoi danh sach:\n";
    Nhap_1NV(p);
    system("CLS");
    cout << "\nDanh sach ban dau :\n";
    Xuat_DSNV(a, n);
    cout << "\nSo nhan vien trong danh sach : n = " << n;
    ThemNhanVien_Cuoi(a, n, p);
    cout << "\nDanh sach ket qua :\n";
    Xuat_DSNV(a, n);
    cout << "\nSo nhan vien trong danh sach sau khi them : n = " << n;
    break;
  case 4:
    system("CLS");
    cout << "\n4. Xoa mot nhan vien theo ma so";
    Xuat_DSNV(a, n);
    cout << "\nNhap ma nhan vien can xoa :";
    cin >> maNV;
    cout << "\nDanh sach hien hanh :\n";
    Xuat_DSNV(a, n);
    cout << "\nSo nhan vien trong danh sach : n = " << n;
    XoaNhanVien_MaNV(a, n, maNV);
    cout << "\nDanh sach ket qua :\n";
    Xuat_DSNV(a, n);
    cout << "\nSo nhan vien trong danh sach sau khi xoa : n = " << n;
    break;
  case 5:
    system("CLS");
    cout << "\n5. Sua thong tin nhan vien";
    cout << "\nDanh sach hien hanh :\n";
    Xuat_DSNV(a, n);
    cout << "\nNhap ma nhan vien can sua :";
    cin >> maNV;
    SuaNhanVien_MaNV(a, n, maNV);
    cout << "\nDanh sach ket qua :\n";
    Xuat_DSNV(a, n);
    break;

  case 6:
    system("CLS");
    cout << "\n6. Tim nhan vien theo ma so";
    cout << "\nDanh sach hien hanh :\n";
    Xuat_DSNV(a, n);
    cout << "\nNhap ma nhan vien can tim :";
    cin >> maNV;
    kq = TimKiemNhanVien_MaNV(a, n, maNV);
    if (kq == -1)
      cout << "\nKhong co NV nao trong danh sach co ma so : " << maNV;
    else
    {
      cout << "\nthong tin nhan vien co ma so : " << maNV << " :\n";
      XuatTieuDe();
      cout << endl;
      Xuat_1NV(a[kq]);
      XuatKeNgang();
    }
    break;
  case 7:
    system("CLS");
    cout << "\n7. Tim nhan vien theo ten";
    cout << "\nDanh sach hien hanh :\n";
    Xuat_DSNV(a, n);
    cout << "\nNhap ten nhan vien can tim : ";
    cin >> tenNV;
    TimKiemNhanVien_Ten(a, n, tenNV);
    break;
  case 8:
    system("CLS");
    cout << "\n8. Sap danh sach nhan vien tang dan theo ma nhan vien";
    cout << endl
         << "Danh sach khi chua sap xep";
    Xuat_DSNV(a, n);
    cout << endl
         << "Danh sach sau khi sap xep";
    SapTang_MaNV(a, n);
    Xuat_DSNV(a, n);
    break;
  case 9:
    system("CLS");
    cout << "\n9. Sap danh sach nhan vien tang dan theo ten - ho - luong";
    cout << endl
         << "Danh sach ban dau";
    Xuat_DSNV(a, n);
    cout << endl
         << "Danh sach sau khi da sap xep theo ten, ho, luong";
    SapXep_Ho_Luong(a, n);
    Xuat_DSNV(a, n);
    break;
  case 10:
    system("CLS");
    cout << "\n10. Tinh tong luong thang";
    cout << endl
         << "Danh sach ban dau";
    Xuat_DSNV(a, n);
    cout << endl
         << "Tong luong: " << TinhTongLuong(a, n) << " trieu";
    break;
  case 11:
    system("CLS");
    cout << "\n11. Liet ke cac nhan vien co luong >= x ";
    Xuat_DSNV(a, n);
    cout << endl
         << "Nhap muc luong can tim: ";
    cin >> x;
    XuatNV_Luong_TuXTroLen(a, n, x);
    break;
  case 12:
    system("CLS");
    cout << "\n12. Liet ke cac nhan vien co nam sinh trong khoang [u,v]";
    Xuat_DSNV(a, n);
    cout << endl
         << "Nhap nam sinh can tim (moc thoi gian tu u - y)";
    cout << endl
         << "Nhap moc thoi gian bat dau (VD: 1980): ";
    cin >> u;
    cout << endl
         << "Nhap moc thoi gian ket thuc ( VD: 1990): ";
    cin >> y;
    XuatNV_NamSinh_TuUDenY(a, n, u, y);
    break;
  }
  _getch();
}
