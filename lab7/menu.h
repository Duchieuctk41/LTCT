void XuatMenu()
{
  cout << "\n============== HE THONG CHUC NANG =================\n";
  cout << "\n0. Thoat khoi chuong trinh";
  cout << "\n1. Nhap danh sach nhan vien";
  cout << "\n2. Xem danh sach nhan vien";
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
};

int ChonMenu(int SoMenu)
{
  int chon;
  for (;;)
  {
    XuatMenu();
    cout << endl
         << "chon tu 0 - " << SoMenu << endl;
    cin >> chon;
    if (0 <= chon && chon <= SoMenu)
      break;
  }
  return chon;
};

void XuLyMenu(int menu, NhanVien a[max], int n)
{
  switch (menu)
  {
  case 0:
    cout << endl
         << "0.Ban muon thoat chuong trinh?";
    cout << endl
         << "Nhan phim bat ki de thoat chuong trinh" << endl;
    break;
  case 1:
    cout << "\n1. Xuat 1 nhan vien\n";
    Xuat_1NV(a[1]);
    break;
  case 2:
    cout << "\n2. Xuat danh sach nhan vien\n";
    Xuat_DSNV(a, n);
    break;
  case 3:
    cout << "\n3. Nhap danh sach nhan vien\n";
    NhapDSNV(a, n);
    Xuat_DSNV(a, n);
    break;
  default:
    break;
  }
  _getch();
};
