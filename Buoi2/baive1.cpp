#include<iostream>
#include<string>
#include<iomanip>

using namespace std;
struct sinhvien{
	string maso;
	string hoten;
	int namsinh;
	float diem_tb;
};
typedef struct sinhvien SINHVIEN;

void NhapThongTinSinhVien(SINHVIEN &x){
	cout << "Nhap ma so sinh vien: ";
	cin >> x.maso;
	cout << "Nhap ho ten sinh vien: ";
	cin >> x.hoten;
	cout << "Nhap nam sinh sinh vien: ";
	cin >> x.namsinh;
	cout << "Nhap diem trung binh sinh vien: ";
	cin >> x.diem_tb;
}

void XuatThongTinSinhVien(SINHVIEN x){
	cout << "Ma so sinh vien: " << x.maso<<endl;
	cout << "Ho ten sinh vien: " << x.hoten<<endl;
	cout << "Nam sinh sinh vien: " << x.namsinh<<endl;
	cout << "Diem trung binh sinh vien: " << x.diem_tb<<endl;
}
void NhapDanhSachSinhVien(SINHVIEN a[], int n){
	for (int i = 0; i < n; i++){

		NhapThongTinSinhVien(a[i]);
	}
}
void XuatDanhSachSinhVien(SINHVIEN a[], int n){
	for (int i = 0; i < n; i++){

		XuatThongTinSinhVien(a[i]);
	}
}

void SapXep(SINHVIEN sv[], int n)
{
	for(int i=0;i<n-1;i++)
	for (int j=i+1;j<n;j++)
	if (sv[i].diem_tb<sv[j].diem_tb)
	{
		float t=sv[i].diem_tb;
		sv[i].diem_tb=sv[j].diem_tb;
		sv[j].diem_tb=t;
	}
}
int main() {
    SINHVIEN a[100];
    int n;
	cout << "Nhap so luong sinh vien: ";
	cin >> n;
    NhapDanhSachSinhVien(a, n);
    SapXep(a,n);
    cout << "THONG TIN SINH VIEN" << endl;
	XuatDanhSachSinhVien(a, n);
}
