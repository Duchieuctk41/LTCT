int NhapSo(int n){
  do
  {
    cout << endl
         << "Nhap so ma ban muon: ";
    cin >> n;
  } while (n < 0);
  return n;
};

void XuatSo(int n) {
  cout << endl << "So da nhap: " << n;
}

void DemSoLuong_C1(int n) {
  string chuoi;
  ostringstream convert;
  convert << n;
  chuoi = convert.str();
  cout << endl << "So phan tu trong cua " << n << " la: " << chuoi.length();
};

void DemSoLuong_C2(int n){
  int count = 0;
  do
  {
    count++;
    n /= 10;
  } while (n != 0);
  cout << endl
       << "So phan tu trong cua " << n << " la: " << count;
};