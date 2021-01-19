void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu);

void XuatMenu()
{
  cout << "\n============== HE THONG CHUC NANG =================\n";
  cout << "\n0. Thoat chuong trinh";
  cout << "\n1. Tao danh sach nhan vien.";
  cout << "\n2. Xuat danh sach nhan vien.";
  cout << "\n3. Xuat nhan vien sinh nam 1980.";
  cout << "\n4. Xoa nhan vien co luong thap nhat.";
  cout << "\n5. Sap xep danh sach nhan vien tang dan theo nam sinh - ma so.";
  cout << "\n6. Liet ke nhan vien co ten Duong.";
  cout << "\n7. Sap xep danh sach nhan vien tang dan theo luong - ma so.";
  cout << "\n===================================================\n";
}

int ChonMenu(int soMenu)
{
  int chon;
  for (;;)
  {
    system("CLS");
    XuatMenu();
    cout << "\nChon chuc nang tu [1 - " << soMenu << " ] de chay (0 la thoat chuong trinh):\n";
    cin >> chon;
    if (0 <= chon && chon <= soMenu)
      break;
  }
  return chon;
}

void XuLyMenu(int menu, NhanVien a[max], int &n)
{
  char filename[max], ten[8];
  int kq = 0, nam, min;

  switch (menu)
  {
  case 0:
    system("CLS");
    cout << "\n0. Nhan phim bat ki de thoat chuong trinh";
    break;
  case 1:
    system("CLS");
    cout << "\n1. Tao danh sach nhan vien.";
    cout << "\nNhap ten file (nhanvien.txt): ";
    cin >> filename;
    kq = TaoDanhSachNhanVien(a, n, filename);
    if (kq == 0)
    {
      cout << "\nNhap ten file khong hop le ";
    }
    else
    {
      cout << "\nTao file thanh cong. So nhan vien hien tai la: " << n;
    }
    break;
  case 2:
    cout << "\n2. Xuat danh sach nhan vien.\n";
    XuatDSNV(a, n);
    break;
  case 3:
    cout << "\n3. Xuat nhan vien sinh nam 1980.";
    cout << "\nNhap nam sinh nhan vien ban can tim: ";
    cin >> nam;
    TimKiemNhanVienTheoNam(a, n, nam);
    break;
  case 4:
    cout << "\n4. Xoa nhan vien co luong thap nhat.";
    min = TimLuongThapNhat(a, n);
    cout << "\nMuc luong thap nhat la " << min;
    XoaNhanVienLuongThapNhat(a, n);
    cout << "\nDanh sach sau khi xoa nhan vien co luong thap nhat:";
    XuatDSNV(a, n);
    break;
  case 5:
    cout << "\n5. Sap xep danh sach nhan vien tang dan theo nam sinh - ma so.";
    cout << "\nDanh sach nhan vien sau khi sap xep theo nam - ma so";
    SapXepNhanVienTheoNamVaMaSo(a, n);
    XuatDSNV(a, n);
    break;
  case 6:
    cout << "\n6. Liet ke nhan vien co ten Duong.";
    cout << "\nNhap ten sinh vien can tim: ";
    cin >> ten;
    LietKeNhanVienTheoTen(a, n, ten);
    break;
  case 7:
    cout << "\n7. Sap xep danh sach nhan vien tang dan theo luong - ma so.";
    cout << "\nDanh sach nhan vien sau khi sap xep theo luong - ma so";
    SapXepNhanVienTangTheoLuongVaMaSo(a, n);
    XuatDSNV(a, n);
    break;

  default:
    break;
  }
}