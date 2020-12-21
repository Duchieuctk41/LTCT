
#define SIZE 10
#define TAB '\t'

typedef int MaTranVuong[SIZE][SIZE];

void NhapMaTran(MaTranVuong a, int n);
void XuatMaTran(MaTranVuong a, int n);
int TinhTong_MaTran(MaTranVuong a, int n, int cot);
int TinhTich_Hang_MaTran(MaTranVuong a, int n, int hang);
int Tinh_Min_Hang_i(MaTranVuong a, int i, int n);
int Tinh_Max_Cot_j(MaTranVuong a, int j, int n);

void NhapMaTran(MaTranVuong a, int n)
{
  int i, j;
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
    {
      a[i][j] = rand() % (4 + 4 + 1) - 4;
    }
}

void XuatMaTran(MaTranVuong a, int n)
{
  int i, j;
  for (i = 0; i < n; i++)
  {
    cout << "\n";
    for (j = 0; j < n; j++)
      cout << a[i][j] << TAB;
  }
}

int TinhTong_MaTran(MaTranVuong a, int n, int cot)
{
  int i, j, sum = 0;
  for (i = 0; i < n; i++)
    sum += a[i][cot - 1];
  return sum;
}

int TinhTich_Hang_MaTran(MaTranVuong a, int n, int hang)
{
  int i, tich = 1;
  for (i = 0; i < n; i++)
  {
    tich *= a[hang - 1][i];
  }
  return tich;
}

int Tim_Min_Hang(MaTranVuong a, int n, int i)
{
  int mini = a[i][0], j;
  for (j = 1; j < n; j++)
    if (mini > a[i][j])
      mini = a[i][j];
  return mini;
}

int Tim_Max_Cot(MaTranVuong a, int n, int j)
{
  int maxj = a[0][j], i;
  for (i = 1; i < n; i++)
    if (maxj < a[i][j])
      maxj = a[i][j];
  return maxj;
}

void Xuat_MinHang_MaxCot(MaTranVuong a, int n)
{
  int i, j;
  bool kq = false;
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
    {
      if (a[i][j] == Tim_Min_Hang(a, n, i) && a[i][j] == Tim_Max_Cot(a, n, j))
      {
        kq = true;
        cout << "\nMin hang, max cot o vi tri: a[" << i << "][" << j << "] : " << a[i][j];
      }
    }
  if (!kq)
  {
    cout << "\nKhong co phan tu nao trong mang thoa dieu kien.";
  }
}