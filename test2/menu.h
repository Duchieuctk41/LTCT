
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
    XuatMenu();
    cout << "\nChon tu [1 - " << soMenu << "] de chay chuong trinh (0 de thoat):\n";
    cin >> chon;
    if (0 <= chon && chon <= soMenu)
      break;
  }

  return chon;
}

void XuLyMenu(int menu, NhanVien a[max], int &n)
{
  int kq = 0, nam;
  char filename[max], ten[8];
  switch (menu)
  {
  case 0:
    cout << "\n0. Chon phim bat ki de thoat chuong trinh";
    break;
  case 1:
    cout << "\n1. Tao danh sach nhan vien.";
    cout << "\nNhap file txt (nhanvien.txt): ";
    cin >> filename;
    kq = TaoDSNV(a, n, filename);
    if (kq == 0)
    {
      cout << "\nLoi mo file!";
    }
    else
    {
      cout << "\nMo file thanh cong. So luong nhan vien la " << n;
    }

    break;
  case 2:
    cout << "\n2. Xuat danh sach nhan vien.";
    XuatDSNV(a, n);
    break;
  case 3:
    cout << "\n3. Xuat nhan vien sinh nam 1980.";
    cout << "\nNhap nam sinh can tim: ";
    cin >> nam;
    TimNV_Nam(a, n, nam);
    break;
  case 4:
    cout << "\n4. Xoa nhan vien co luong thap nhat.";
    XoaNV_LuongThapNhat(a, n);
    XuatDSNV(a, n);
    break;
  case 5:
    cout << "\n5. Sap xep danh sach nhan vien tang dan theo nam sinh - ma so.";
    SapXepTangDan_Nam_MS(a, n);
    XuatDSNV(a, n);
    break;
  case 6:
    cout << "\n6. Liet ke nhan vien co ten Duong.";
    cout << "\nNhap ten nhan vien can tim: ";
    cin >> ten;
    LietKeNV_Ten(a, n, ten);
    break;
  case 7:
    cout << "\n7. Sap xep danh sach nhan vien tang dan theo luong - ma so.";
    SapXepTangDan_Luong_MS(a, n);
    XuatDSNV(a, n);
    break;

  default:
    break;
  }
}