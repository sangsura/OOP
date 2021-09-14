#include<iostream>
using namespace std;
class Nguoi{
private:
	char hoTen[30];
	int ngaysinh;
	int thangsinh;
	int namsinh;
	char gioitinh[10];
	float dtb;
	char xeploai[10];
public:
	void nhap(){
		cout<<"Nhap ho ten :";
		fflush(stdin); gets(hoTen);
		cout<<"Nhap ngay sinh:";cin>>ngaysinh;
		cout<<"Nhap thang sinh:";cin>>thangsinh;
		cout<<"Nhap nam sinh:";cin>>namsinh;
		cout<<"Nhap gioi tinh :";
		fflush(stdin); gets(gioitinh);
		cout<<"Nhap dtb :";cin>>dtb;
		cout<<"Nhap xep loai dd :";
		fflush(stdin); gets(xeploai);
		
		
	}
	void xuat(){
		cout<<"Ho va ten:"<<hoTen<<endl;
		cout<<" ngay sinh:"<<ngaysinh<<endl;
		cout<<" thang sinh:"<<thangsinh<<endl;
		cout<<" nam sinh:"<<namsinh<<endl;
		cout<<" gioi tinh :"<<gioitinh<<endl;
		cout<<" dtb :"<<dtb<<endl;
		cout<<" xep loai dd :"<<xeploai<<endl;
		
	}
}; 
int main(){
	Nguoi hs;
	hs.nhap();
	hs.xuat();
}
