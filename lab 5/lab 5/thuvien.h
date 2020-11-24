#define MAX 100
#define TAB '\t'

typedef int DaySo[MAX];

void NhapMang(DaySo a, int n);
void XuatMang(DaySo a, int n);
int ChuaX(DaySo a, int n, int x);
int Tim_VTDT_X(DaySo a, int n, int x);
int KiemTraMangTang(DaySo a, int n);
int TimMax(DaySo a, int n);
void File_Array(char *filename, int a[MAX], int &n);
void NhapTuDong(DaySo a, int &n);
void ChenDauDay(DaySo a, int &n, int x);

void NhapMang(DaySo a, int n) {
  int i;
  for (i = 0; i < n; i++)
  {
    cout << "a[" << i << "]= ";
    cin >> a[i];
  }
}

void XuatMang(DaySo a, int n) {
  int i;
  for (i = 0; i < n; i++)
  {
    cout << a[i] << TAB;
  }
}

int ChuaX(DaySo a, int n, int x) {
  int i, kq;
  kq = 0;
  for (i = 0; i < n; i++)
  {
    if (a[i] == x)
    {
      kq = 1;
      break;
    }
  }
  return kq;
}

int Tim_VTDT_X(DaySo a, int n, int x) {
  int i,
      kq = -1;

  for (i = 0; i < n; i++)
  {
    if (a[i] == x)
    {
      kq = i;
      break;
    }
  }
  return kq;
}

int KiemTraMangTang(DaySo a, int n) {
  int i,
      kq = 1;
  for (i = 0; i < n - 1; i++)
  {
    if (a[i] > a[i + 1])
    {
      kq = 0;
      break;
    }
  }
  return kq;
}

int KiemTraMangGiam(DaySo a, int n) {
  int i,
      kq = 1;
  for (i = 0; i < n - 1; i++)
  {
    if (a[i] < a[i + 1])
    {
      kq = 0;
      break;
    }
  }
  return kq;
}

int TimMax(DaySo a, int n) {
  int i, max;
  max = a[0];
  for (i = 0; i < n; i++)
  {
    if (a[i] > max)
      max = a[i];
  }
  return max;
}

void File_Array(char *filename, int a[MAX], int &n) {
  int i;
  ifstream in(filename);
  if (!in)
  {
    cout << "\nLoi mo file";
    return;
  }
  in >> n;
  for (i = 0; i < n; i++)
  {
    in >> a[i];
  }
  in.close();
}

void NhapTuDong(char *filename, DaySo a, int &n) {
  cout << "Nhap kich thuoc mang n: ";
  cin >> n;
  
  ifstream in(filename);
  if (!in)
  {
    cout << "\nLoi mo file";
    return;
  }

  fstream f;
  f.open(filename, ios::out);

  f << n << endl;
  srand((unsigned)time(NULL));
  {
    for (int i = 0; i < n; i++)
    {
      a[i] = (MAX / 2 - rand() % MAX) / 6;
      f << a[i] << " ";
    }
  }

  f.close();

}

void ChenDauDay(char *filename, DaySo a, int &n, int x) {

  ifstream in(filename);
  if (!in)
  {
    cout << "\nLoi mo file";
    return;
  }

  fstream f;
  f.open(filename, ios::out);

    for (int i = n - 1; i >= 0; i--)
      a[i + 1] = a[i];
  a[0] = x;
  n++;

  f << n << endl;
  for (int i = 0; i < n; i++)
  {
    f << a[i] << " ";
  }

  
  f.close();
}

void SortIncrease(DaySo a, int left, int right) {
    // Kiểm tra xem nếu mảng có 1 phần tử thì không cần sắp xếp
    if (left >= right)
        return;

    int pivot = a[(left + right) / 2]; // Chọn phần tử chính giữa dãy làm chốt

    // i là vị trí đầu và j là cuối đoạn
    int i = left, j = right;
    while (i < j) {
        while (a[i] < pivot) // Nếu phần tử bên trái nhỏ hơn pivot thì ok, bỏ qua
            i++;
        while (a[j] > pivot) // Nếu phần tử bên phải nhỏ hơn pivot thì ok, bỏ qua
            j--;

        // Sau khi kết thúc hai vòng while ở trên thì chắc chắn
        // vị trí A[i] phải lớn hơn pivot và A[j] phải nhỏ hơn pivot
        // nếu i < j
        if (i <= j)
        {
            if (i < j) // nếu i != j (tức không trùng thì mới cần hoán đổi)
                swap(a[i], a[j]); // Thực hiện đổi chổ ta được A[i] < pivot và A[j] > pivot
            i++;
            j--;
        }
    }

    // Gọi đệ quy sắp xếp dãy bên trái pivot
    SortIncrease(a, left, j);
    // Gọi đệ quy sắp xếp dãy bên phải pivot
    SortIncrease(a, i, right);

}


void SortDecrease(DaySo a, int left, int right) {
    // Kiểm tra xem nếu mảng có 1 phần tử thì không cần sắp xếp
    if (left >= right)
        return;

    int pivot = a[(left + right) / 2]; // Chọn phần tử chính giữa dãy làm chốt

    // i là vị trí đầu và j là cuối đoạn
    int i = left, j = right;
    while (i < j) {
        while (a[i] > pivot) // Nếu phần tử bên trái nhỏ hơn pivot thì ok, bỏ qua
            i++;
        while (a[j] < pivot) // Nếu phần tử bên phải nhỏ hơn pivot thì ok, bỏ qua
            j--;

        // Sau khi kết thúc hai vòng while ở trên thì chắc chắn
        // vị trí A[i] phải lớn hơn pivot và A[j] phải nhỏ hơn pivot
        // nếu i < j
        if (i <= j)
        {
            if (i < j) // nếu i != j (tức không trùng thì mới cần hoán đổi)
                swap(a[i], a[j]); // Thực hiện đổi chổ ta được A[i] < pivot và A[j] > pivot
            i++;
            j--;
        }
    }

    // Gọi đệ quy sắp xếp dãy bên trái pivot
    SortDecrease(a, left, j);
    // Gọi đệ quy sắp xếp dãy bên phải pivot
    SortDecrease(a, i, right);

}

void SapXepMangTang(DaySo a, int n) {
    SortIncrease(a, 0, n - 1);
}


void SapXepMangGiam(DaySo a, int n) {
    SortDecrease(a, 0, n - 1);
}

void LuuVaoFile(char *filename, DaySo a, int &n) {

  ifstream in(filename);
  if (!in)
  {
    cout << "\nLoi mo file";
    return;
  }

  fstream f;
  f.open(filename, ios::out);

  f << n << endl;
  for (int i = 0; i < n; i++)
  {
    f << a[i] << " ";
  }

  f.close();
}



