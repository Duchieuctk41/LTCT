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
    system("clear"); //linux
    XuatMenu();
    cout << "\nChon chuc nang trong khoang [0.." << soMenu << "] : ";
    cin >> chon;

    if (0 <= chon && chon <= soMenu)
      break;
  }
  return chon;
}

void XuLyMenu(int menu, NhanVien a[max], int &n)
{
  char filename[max];
  int kq, nam;
  switch (menu)
  {
  case 0:
    cout << "\nBan muon thoat chuong trinh.";
    cout << "\nNhan phim bat ki de thoat chuong trinh";
    break;
  case 1:
    cout << "\n1. Tao danh sach nhan vien.";
    cout << "\nNhap ten file de mo: ";
    cin >> filename;
    kq = TaoDSNV(a, n, filename);
    if (kq == 0)
      cout << "\nKhong the mo tap tin " << filename << " vui long kiem tra lai.";
    else
    {
      cout << "\nMo tap tin thanh cong. So nhan vien hien tai la: " << n;
    }
    break;
  case 2:
    cout << "\n2. Xuat danh sach nhan vien.";
    XuatTieuDe();
    XuatDSNV(a, n);
    break;
  case 3:
    cout << "\n3. Xuat nhan vien sinh nam 1980.";
    cout << "\nNhap nam sinh ban muon tim: ";
    cin >> nam;
    TimNV_Nam(a, n, nam);
    break;
  case 4:
    cout << "\n4. Xuat nhan vien co luong thap nhat.\n";
    XuatNV_MinSalary(a, n);
    break;

  default:
    break;
  }
}