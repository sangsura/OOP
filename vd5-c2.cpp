#include<iostream>
#include<math.h>
using namespace std;
class tamgiac{
	private:
		float a,b,c;
	public:
		void nhap(){
			cout<<"nhap canh a:"<<endl;cin>>a;
			cout<<"nhap canh b:"<<endl;cin>>b;
			cout<<"nhap canh c:"<<endl;cin>>c;
			
		}
		float v(){
			return a+b+c;
		}
		float s(){
			float p=v()/2;
			return (float) sqrt(p*(p-a)*(p-b)*(p-c));
		}
		void xuat(){
			cout<<"S hinh tam giac:"<<s()<<endl;
			cout<<"V hinh tam giac:"<<v();
		}
};
int main(){
	tamgiac tg;
	tg.nhap();
	tg.xuat();
}
