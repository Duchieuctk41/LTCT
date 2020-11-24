
void XuatMenu(int n)
{
  cout << "\n============ BANG CHON CHUC NANG ===============\n";
  cout << endl
       << "\n0. Thoat chuong trinh.";
  cout << endl
       << "2. Xuat so";
  cout << "\n3. Dem so luong chu so cua " << n;
  cout << "\n4. Dao nguoc so " << n;
  cout << "\n5. Tinh tong cac chu so trong " << n;
  cout << "\n6. Kiem tra " << n << " co phai so nguyen to hay khong?";
  cout << endl
       << "7. Liet ke tat ca so nguyen to trong khoang "
       << "tu 2 - " << n;
  cout << "\n================================================";
  cout << endl;
};

int ChonMenu(int SoMenu, int n)
{
  int chon;
  XuatMenu(n);
  for (;;)
  {
    cout << endl
         << "Chon tu 0 - " << SoMenu << ", chon := ";
    cin >> chon;
    if (0 <= chon && chon <= SoMenu)
    {
      break;
    }
  }
  return chon;
};

void XuLyMenu(int menu, DaySo a, int n)
{
  switch (menu)
  {
  case 0:
    cout << endl
         << "0. Thoat chuong trinh!";
    cout << endl
         << "Nhan phim bat ki de thoat chuong trinh.";
    break;
  case 2:
    cout << endl
         << "2. Xuat so";
    XuatSo(n);
    break;
  case 3:
    cout << "\n3. Dem so luong chu so cua " << n;
    DemSoLuong_C1(n);
    DemSoLuong_C2(n);
    break;
  case 4:
    cout << "\n4. Dao nguoc so " << n;
    DaoNguocSo_C1(n);
    DaoNguocChuoi_C2(n);
    break;
  case 5:
    cout << endl
         << "5. Tong cac chu so";
    TinhTongCacChuSo(n);
    break;
  case 6:
    cout << endl
         << "6. Kiem tra so nguyen to";
    KiemTraSoNguyenTo(n);
    break;
  case 7:
    cout << endl
         << "7. Tim cac so nguyen to trong khoang tu 2 " << n;
    LietKeSoNguyenTo(a, n);
    break;
  default:
    break;
  }
};