#pragma once

#define pi 3.1415
#define t "\t"
#define max 3600
#define sixty 60
using namespace std;


void Bai1_Bien() {
	int k = 5;
	long x = 5;
	float a = 14.5;
	double h = 13.3;
	string c = "MSSV";
	cout << "kieu so nguyen (int) :\t" << k
		<< "\nx kieu so nguyen dai (long) :\t" << x
		<< "\na kieu so thuc (float) :\t" << a
		<< "\nh kieu so thuc (double) :\t" << h
		<< "\nc kieu ky tu (string) :\t" << c;
}
void Bai2_VeHinh(int k)
{
    int a,x;
    x = k;
	//bai 2.1
	for (size_t i = 0; i < 5; i++)
	{
		if (i % 2 == 0) {
			cout << " ";
		}
		for (size_t i = 0; i < 5; i++)
		{
			cout << "* ";
		}
		cout << "\n";
	}

    //bai 2.2
    cout << "bai 2.2\n\n";
    for (size_t i = 0; i < k; i++)
    {
        if (i == 0 || i == k - 1)
            for (size_t i = 0; i < k; i++)
            {
                cout << "* ";
            }
        else
        {
            for (size_t i = 0; i < k; i++)
            {
                if (i == 0 || i == k - 1)

                    cout << "* ";

                else
                {
                    cout << "  ";
                }
            }
        }
        cout << "\n";

    }
    //bai 2.3
    cout << "bai 2.3\n\n";
    for (size_t i = 0; i < k; i++)
    {
        a = i;
        for (size_t i = 0; i < a; i++)
        {
            cout << " ";
        }
        if (i == 0)
        {
            for (size_t i = 0; i < k; i++)
            {
                cout << "* ";
            }
        }
        else {
            for (size_t i = x; i > 0; i--)
            {
                if (i == 1 || i == x)
                    cout << "* ";
                else
                    cout << "  ";

            }
        }
        x--;

        cout << "\n";
    }
}
void Bai3_PhepGan(int x, int y) {
    int z;
    z = x + y;
    cout << "z = x + y:\t\t " << z << endl;
    z = x - y;
    cout << "z = x - y:\t\t " << z << endl;
    z = x * y;
    cout << " z = x * y:\t\t " << z << endl;
    z = x / y;
    cout << " z = x / y:\t\t " << z << endl;
    z = x % y;
    cout << " z = x % y:\t\t " << z << endl;
}
void Bai4_HinhTamGiac(float canh1,float canh2,float canh3) {
    float dientich, halfChuvi;
    halfChuvi = (canh1 + canh2 + canh3) / 2;
    dientich = sqrt(halfChuvi * (halfChuvi - canh1) * (halfChuvi - canh2) * (halfChuvi - canh3));
    cout << "nua chu vi tam giac: " << halfChuvi;
    cout << endl << "dien tich tam giac : " << dientich;
}
void Bai5_DoiGioPhutGiay(int x) {
    int gio, phut, giay;
    gio = x / max;
    phut = (x % max) / sixty;
    giay = (x % max) % sixty;
    cout << gio << " : " << phut << " : " << giay << endl;
}
void Bai6_ToanTu(int x, int y) {
    int n;
    n = x++;
    cout <<"\nx++ =\t"<< n;
    n = x--;
    cout << "\nx-- =\t" << n;
    n = ++x;
    cout << "\n++x =\t" << n;
    n = --x;
    cout << "\n--x =\t" << n;
    n = x / y;
    cout << "\nx = x / y =\t" << n;
    n = x % y;
    cout << "\ny = x % y =\t" << n;
    x*= y;
    cout << "\nx *= y =\t" << x;
}

