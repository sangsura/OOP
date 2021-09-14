#include<iostream>
using namespace std;
class hinhtron{
	private:
		float r;
	public:
		void nhap(){
			cout<<"nhap ban kinh r:"<<endl;cin>>r;
			
		}
		float s(){
			return (float) 3.14*r*r;
		}
		float c(){
			return (float) 3.14*2*r;
		}
		void xuat(){
			cout<<"S hinh tron:"<<s()<<endl;
			cout<<"V hinh tron:"<<c();
		}
};
int main(){
	hinhtron ht;
	ht.nhap();
	ht.xuat();
}
