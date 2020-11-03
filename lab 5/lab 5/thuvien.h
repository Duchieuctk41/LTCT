#define MAX 100
#define TAB '\t'

typedef int DaySo[MAX];

using namespace std;

void NhapMang(DaySo a, int n);
void XuatMang(DaySo a, int n);int ChuaX(DaySo a, int n, int x);int Tim_VTDT_X(DaySo a, int n, int x);int KiemTraMangTang(DaySo a, int n);int TimMax(DaySo a, int n);void File_Array(char *filename, int a[MAX], int &n);void NhapTuDong(DaySo a, int &n);void ChenDauDay(DaySo a, int &n, int x);
void NhapMang(DaySo a, int n)
{
	int i;
	for ( i = 0; i < n; i++)
	{
		cout << "a[" << i << "]= ";
		cin >> a[i];

	}
}

void XuatMang(DaySo a, int n)
{
	int i;
	for ( i = 0; i < n; i++)
	{
		cout << a[i] << TAB;
	}
}

int ChuaX(DaySo a, int n, int x)
{
	int i, kq;
	kq = 0;
	for ( i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			kq = 1;
			break;
		}
	}
	return kq;
}

int Tim_VTDT_X(DaySo a, int n, int x)
{
	int i,
	kq = -1;

	for ( i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			kq = i;
			break;
		}
	}
	return kq;
}

int KiemTraMangTang(DaySo a, int n)
{
	int i,
	kq = 1;
	for ( i = 0; i < n-1; i++)
	{
		if (a[i] > a[i+1])
		{
			kq = 0;
			break;
		}
	}
	return kq;
}

int TimMax(DaySo a, int n)
{
	int i, max;
	max = a[0];
	for ( i = 0; i < n; i++)
	{
		if (a[i] > max)
			max = a[i];
	}
	return max;
}

void File_Array(char *filename, int a[MAX], int &n)
{
	int i;
	ifstream in(filename);
	if (!in)
	{
		cout << "\nLoi mo file";
		return;
	}
	in >> n;
	for ( i = 0; i < n; i++)
	{
		in >> a[i];
	}
	in.close();
}

void NhapTuDong(DaySo a, int &n)
{
	int i;
	cout << "Nhap kich thuoc mang n: ";
	cin >> n;
	srand((unsigned) time(NULL));
	{
		for ( i = 0; i < n; i++)
		{
			a[i] = (MAX / 2 - rand() % MAX) / 6;
		}
	}
}
void ChenDauDay(DaySo a, int &n, int x){	int i;
	for (i = n - 1; i >= 0; i--)
		a[i + 1] = a[i];
	a[0] = x;	n++;	}void Update_File(char *filename, int a[MAX], int &n)
{

	int i;
	ifstream in(filename);
	if (!in)
	{
		cout << "\nLoi mo file";
		return;
	}

	fstream f;
	f.open(filename, ios::out);

	for (i = 0; i < n; i++)
	{
		f << "loz";
	}

	f.close();
	


}