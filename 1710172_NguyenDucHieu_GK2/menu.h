
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, MaTranVuong a, int &n);

void XuatMenu()
{
  cout << "\n====================== CHON CHUC NANG ========================\n";
  cout << "\n0. Thoat chuong trinh";
  cout << "\n1. Nhap ma tran vuong";
  cout << "\n2. Xem ma tran vuong";
  cout << "\n3. Tinh tong cac phan tu cua ma tran";
  cout << "\n4. Tinh tich trong hang cua ma tran";
  cout << "\n5. Xuat min max";
  cout << "\n==============================================================\n";
}

int ChonMenu(int soMenu)
{
  int stt;

  do
  {
    system("cls");
    XuatMenu();
    cout << "\nChon chuc nang : ";
    cin >> stt;
  } while (stt < 0 || stt > soMenu);

  return stt;
}

void XuLyMenu(int menu, MaTranVuong a, int &n)
{
  int sum, tich, p, cot, hang;
  system("cls");
  switch (menu)
  {
  case 0:
    cout << "\n0. Thoat chuong trinh";
    break;
  case 1:
    cout << "\n1. Nhap ma tran vuong";
    cout << "\nNhap cap ma tran vuong n = ";
    cin >> n;
    NhapMaTran(a, n);
    cout << "\nMa tran vuong vua nhap:\n";
    XuatMaTran(a, n);
    break;
  case 2:
    cout << "\n2. Xem ma tran vuong";
    cout << "\nMa tran vuong hien hanh:\n";
    XuatMaTran(a, n);
    break;
  case 3:
    cout << "\n3. Tinh tong cac phan tu cua ma tran";
    cout << "\nMa tran hien hanh:\n";
    XuatMaTran(a, n);
    cout << "\n Nhap cot muon cong: ";
    cin >> cot;
    sum = TinhTong_MaTran(a, n, cot);
    cout << "\nTong cac phan tu cua ma tran : sum = " << sum;
    break;
  case 4:
    cout << "\n4. Tinh tich trong hang cua ma tran";
    cout << "\nMa tran hien hanh:\n";
    XuatMaTran(a, n);
    cout << "\n Nhap hang muon tinh tich: ";
    cin >> hang;
    tich = TinhTich_Hang_MaTran(a, n, hang);
    cout << "\nTong cac phan tu cua ma tran : tich = " << tich;
    break;
  case 5:
    cout << "\n5. Xuat cac phan tu thuoc duong cheo phu";
    cout << "\nMa tran hien hanh:\n";
    XuatMaTran(a, n);
    cout << "\nMin hang max cot cua a:\n";
    MinHang_MaxCot(a, n);
    break;
  }
  _getch();
}
