using namespace std;

void XuatMenu()
{
  cout << endl
       << "============== CHON CHUC NANG =============";
  cout << endl
       << "0. Thoat khoi chuong trinh";
  cout << endl
       << "1. Xuat mang xem ty";
  cout << endl
       << "2. Kiem tra x nam trong mang a";
  cout << endl
       << "3. Tim vi tri dau tien x xuat hien trong a";
  cout << endl
       << "4. Kiem tra mang a la day tang";
  cout << endl
       << "5. Tim phan tu lon nhat";
  cout << endl
       << "6. Nhap tu dong vao mang";
  cout << endl
       << "7. Chen phan tu vao dau day";
  cout << endl
       << "8. Sap xep mang theo chieu tang dan";
  cout << endl 
       << "9. Sap xep mang theo chieu giam dan";
  cout << endl
       << "==========================================";
}

int ChonMenu(int SoMenu)
{
  int stt;
  for (;;)
  {
    system("CLS");
    XuatMenu();
    cout << "\nNhap 1 so trong khoang [0,...," << SoMenu
         << "] de chon menu (Lan dau tien chon 1),stt = ";
    cin >> stt;
    if (0 <= stt && stt <= SoMenu)
      break;
  }
  return stt;
}

void XuLyMenu(int menu, DaySo a, int &n) {
  int x, kq;
  char filename[MAX] = "Text.txt";
  switch (menu)
  {
  case 0:
    system("CLS");
    cout << endl
         << "0. Thoat khoi chuong trinh\n";
    break;
  case 1:
    system("CLS");
    cout << endl << "1. Xuat mang" << endl;
    XuatMang(a, n);
    break;
  case 2:
    system("CLS");
    cout << endl
         << "2. Kiem tra x nam trong mang a";
    cout << endl
         << "Nhap gia tri x can tim: ";
    cin >> x;
    kq = ChuaX(a, n, x);
    system("CLS");
    cout << "Mang hien hanh:\n";
    XuatMang(a, n);
    if (kq)
      cout <<endl << "Mang co chua phan tu " << x << " can tim";
    else
      cout <<endl << "Mang khong chua phan tu " << x << " can tim";
    break;
  case 3:
    system("CLS");
    cout << endl
         << "3. Tim vi tri dau tien x xuat hien trong a";
    cout << endl
         << "Nhap gia tri x can tim: ";
    cin >> x;
    kq = Tim_VTDT_X(a, n, x);
    system("CLS");
    cout << "Mang hien hanh:\n";
    XuatMang(a, n);
    if (kq == -1)
      cout <<endl << "Mang khong chua phan tu " << x << " can tim";
    else
      cout <<endl << "\nVi tri dau tien " << x << " xuat hien trong a la : " << kq;
    break;
  case 4:
    system("CLS");
    cout << endl
         << "4. Kiem tra mang a la day tang";
    kq = KiemTraMangTang(a, n);
    system("CLS");
    cout << "Mang hien hanh:\n";
    XuatMang(a, n);
    if (kq)
      cout << endl
           << "a La Mang tang";
    else
      cout << endl
           << "a khong phai Mang tang.";
    break;
  case 5:
    system("CLS");
    cout << endl
         << "5. Tim phan tu lon nhat";
    kq = TimMax(a, n);
    system("CLS");
    cout << "\nMang hien hanh:\n";
    XuatMang(a, n);
    cout << "\nMax[0,..," << n << "] = " << kq;
    break;
  case 6:
    system("CLS");
    cout << endl << "6. Nhap tu dong vao mang" << endl;
    NhapTuDong(filename, a, n);
    cout << endl << "Mang hien hanh" << endl;
    XuatMang(a,n);
    break;
  case 7:
    system("CLS");
    cout << endl
         << "7. Chen phan tu vao dau day";
    cout << "\nNhap gia tri can chen: x = ";
    cin >> x;
    cout << "\nKich thuoc mang hien hanh : n = " << n;
    cout << "\nDay so hien hanh:\n";
    XuatMang(a, n);
    ChenDauDay(filename, a, n, x);
    cout << "\n\nKich thuoc mang ket qua : n = " << n;
    cout << "\nDay so ket qua sau khi chen " << x << " vao dau day :\n";
    XuatMang(a, n);
    break;
  case 8:
    system("CLS");
    cout << endl << "Sap xep mang theo chieu tang dan" << endl;
    kq = KiemTraMangTang(a, n);
    cout << "Mang hien hanh:\n";
    XuatMang(a, n);
    if (kq)
      cout << endl
           << "a La Mang tang";
    else {
      cout << endl << "a khong phai Mang tang.";
      SapXepMangTang(a, n);
      cout << endl << endl << "Sap xep lai mang theo chieu tang dan:\n";
      LuuVaoFile(filename, a, n);
      XuatMang(a, n);
    }
     
    break;
  case 9:
    cout << endl << "Sap xep mang theo chieu giam dan" << endl;
    system("CLS");
    kq = KiemTraMangGiam(a, n);
    cout << "Mang hien hanh:\n";
    XuatMang(a, n);
    if (kq)
      cout << endl
           << "a La Mang giam";
    else {
      cout << endl << "a khong phai Mang giam.";
      SapXepMangGiam(a, n);
      cout << endl << endl << "Sap xep lai mang theo chieu giam dan:\n";
      LuuVaoFile(filename, a, n);
      XuatMang(a, n);
    }
    break;
  default:
    break;
  }
}