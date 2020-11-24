
void XuatMenu(int n){
  cout << "\n============ BANG CHON CHUC NANG ===============\n";
  cout << endl << "\n0. Thoat chuong trinh.";
  cout << endl
       << "1. Nhap so";
  cout << endl
       << "2. Xuat so";
  cout << "\n3. Dem so luong chu so cua " << n;
  cout << "\n4. Dao nguoc so " << n;
  cout << "\n5. Tinh tong cac chu so trong " << n;
  cout << "\n6. Cho biet chu so dau tien cua " << n;
  cout << "\n7. Xuat cac so hoan chinh trong pham vi 1.." << n;
  cout << "\n8. Tim so nguyen m de tong 1+2+...+m <= " << n;
  cout << "\n================================================";
  cout << endl;
};

int ChonMenu(int SoMenu, int n)
{
  int chon;
  XuatMenu(n);
  for (;;) {
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

void XuLyMenu(int menu, int n)
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

  default:
    break;
  }
};