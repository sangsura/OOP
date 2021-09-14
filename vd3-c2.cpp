#include<iostream>
using namespace std;
class pt1{
	private:
		float a,b;
	public:
		void nhap(){
			cout<<"nhap a:"<<endl;cin>>a;
			cout<<"nhap b:"<<endl;cin>>b;
		}
		float x(){
			return (float) -b/a;
		}
		void xuat(){
			if(a==0&&b!=0){
				cout<<"pt vn!";
			}
			else{
				cout<<"nghiem pt:"<<x();
			}
			
		}
};
int main(){
	pt1 pt;
	pt.nhap();
	pt.xuat();
}
