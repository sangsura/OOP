#include<iostream>
using namespace std;
class hinhthang{
	private:
		float a,b,h;
	public:
		void nhap(){
			cout<<"nhap day a:"<<endl;cin>>a;
			cout<<"nhap day b:"<<endl;cin>>b;
			cout<<"nhap ccao h:"<<endl;cin>>h;
			
		}
		float s(){
			return (float) 1/2*(a+b)*h;
		}
		void xuat(){
			cout<<"S hinh thang:"<<s();
		}
};
int main(){
	hinhthang ht;
	ht.nhap();
	ht.xuat();
}
