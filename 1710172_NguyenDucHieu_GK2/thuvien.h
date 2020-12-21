
#define SIZE 10
#define TAB '\t'

typedef int MaTranVuong[SIZE][SIZE];

void NhapMaTran(MaTranVuong a, int n);
void XuatMaTran(MaTranVuong a, int n);
int TinhTong_MaTran(MaTranVuong a, int n);
void XuatDuongCheoChinh(MaTranVuong a, int n);
void XuatDuongCheoPhu(MaTranVuong a, int n);
int TinhTong_Tren_CheoChinh(MaTranVuong a, int n);
int TinhTich_Duoi_CheoPhu(MaTranVuong a, int n);
void Xuat_DuongCheo_SS_DCChinh(MaTranVuong a, int n);
void Xuat_DuongCheo_SS_DCPhu(MaTranVuong a, int n);

void NhapMaTran(MaTranVuong a, int n)
{
  int i, j;
  for (i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
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
    if (a[hang - 1][i] == 0)
    {
      return tich = 0;
    }
    tich *= a[hang - 1][i];
  }
  return tich;
}

int Tinh_Min_Hang_i(MaTranVuong a, int i, int n)
  {
    int mini, j;
    mini = a[i][0];
    for (j = 1; j < n; j++)
      if (mini > a[i][j])
        mini = a[i][j];
    return mini;
  }

int Tinh_Max_Cot_j(MaTranVuong a, int j, int n)
  {
    int maxj, i;
    maxj = a[0][j];
    for (i = 1; i < n; i++)
      if (maxj < a[i][j])
        maxj = a[i][j];
    return maxj;
  }

  void MinHang_MaxCot(MaTranVuong a, int n)
  {
    int i, j;
    int dau = 0;
    for (i = 0; i < n; i++)
      for (j = 0; j < n; j++)
        if (a[i][j] == Tinh_Min_Hang_i(a, i, n) && a[i][j] == Tinh_Max_Cot_j(a, j, n))
        {
          dau = 1;
          break;
        }
    if (!dau)
      cout << "\nKhong co phan tu nao thoa dieu kien bai toan.";
    else
    {
      cout << "\nCac phan tu a[i][j] thoa: Min hang i va Max cot j : \n";
      for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
          if (a[i][j] == Tinh_Min_Hang_i(a, i, n) && a[i][j] == Tinh_Max_Cot_j(a, j, n))
            cout << "\na[" << i << "][" << j << "] = " << a[i][j]
                 << " : Min hang " << i << " va Max cot " << j;
    }
  }
