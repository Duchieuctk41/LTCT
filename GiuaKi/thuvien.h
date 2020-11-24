#define MAX 100

typedef int DaySo[MAX];

int NhapSo(int n)
{
  do
  {
    cout << endl
         << "Nhap so ma ban muon: ";
    cin >> n;
  } while (n < 0);
  return n;
};

void XuatSo(int n)
{
  cout << endl
       << "So da nhap: " << n;
}

string DemSoLuong_C1(int n)
{
  string chuoi;
  ostringstream convert;
  convert << n;
  chuoi = convert.str();
  cout << endl
       << "So phan tu trong cua " << n << " la: " << chuoi.length();
  return chuoi;
};

int DemSoLuong_C2(int n)
{
  int count = 0;
  do
  {
    count++;
    n /= 10;
  } while (n != 0);
  cout << endl
       << "So phan tu trong cua " << n << " la: " << count;
  return count;
};

string DaoNguocSo_C1(int n)
{
  string chuoi;
  string result;
  ostringstream convert;
  convert << n;
  chuoi = convert.str();
  for (int i = chuoi.length(); i >= 0; i--)
  {
    result += chuoi[i];
  }
  cout << endl
       << "Chuoi sau khi dao nguoc C1_All la: " << result;
  return result;
}

int DaoNguocChuoi_C2(int n)
{
  int result = 0;
  int temp;
  while (n > 0)
  {
    temp = n % 10;
    result = result * 10 + temp;
    n /= 10;
  }
  cout << endl
       << "Chuoi sau khi dao nguoc C2 la: " << result;
  return result;
}

void TinhTongCacChuSo(int n)
{
  int sum = 0;
  do
  {
    sum += (n % 10);
    n /= 10;
  } while (n > 0);
  cout << endl
       << "Tong cac chu so: " << sum;
};

bool KiemTraSoNguyenTo(int n)
{
  bool result = true;
  if (n < 2)
  {
    return false;
  }
  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      cout << n << " ko la so ngto";
      return false;
    }
  }
  cout << n << "la so ngto";
  return result;
};

void LietKeSoNguyenTo(DaySo a, int n)
{
  int count = 0;
  for (int i = 1; i < n; i++)
  {
    if (KiemTraSoNguyenTo(i))
      count++;
  }
  cout << "Co cac so nguyen to " << count;
};
