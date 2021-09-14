#include<iostream>
#include<math.h>
using namespace std;
class pt2{
	private:
		float a,b,c;
	public:
		void nhap(){
			cout<<"nhap a:"<<endl;cin>>a;
			cout<<"nhap b:"<<endl;cin>>b;
			cout<<"nhap c:"<<endl;cin>>c;
		}
		float delta(){
			return b*b-4*a*c;
		}
		void xuat(){
			if(delta()==0){
				cout<<"pt co 1 nghiem: x= "<<(float)-b/(2*a)<<endl;
			}
			else if(delta()>0){
				cout<<"pt co 2 nghiem pb:"<<endl;
				cout<<"x1 = "<<(float) (-b+sqrt(delta()))/(2*a)<<endl;
				cout<<"x2 = "<<(float) (b+sqrt(delta()))/(2*a)<<endl;
				
			}
			else{
				cout<<"pt vn!";
			}
			
		}
};
int main(){
	pt2 pt;
	pt.nhap();
	pt.xuat();
}
