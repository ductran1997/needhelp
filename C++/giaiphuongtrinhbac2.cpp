#include <iostream>
#include <math.h>
using namespace std;

void GiaoPhuongTrinhBacNhat(int a, int b){
	if(a == 0 && b == 0){
		cout<<"phuong trinh vo so nghiem" <<endl;
	}
	else{
		if(a == 0 && b != 0){
			cout<<"Phuong trinh vo nghiem" <<endl;
		}
		else{
			cout<<"Phuong tring co mot nghiem la: " << -b/a << endl;
		}
	}	
}

void GiaiNghiemBac2Nhanh(int a, int b, int c){
	double x1, x2;
	x1=1;
	x2=c/a;
	if(x1 == x2){
		cout<<"phuong trinh co nghiem la: "<<x1 <<endl;
	}
	else{
		cout<<"x1 la: " << x1<<endl;
		cout<<"x2 la: "	<< x2<<endl;
	}	
}

void GiaiPhuongTrinhBac2(int a, int b, int c){
	if (a == 0){
		GiaoPhuongTrinhBacNhat(b, c);	
	}
	else{
		if(a + b + c == 0){			
			GiaiNghiemBac2Nhanh(a, b, c);
		}
		else{
			if(a - b + c == 0){
				double x1, x2;
				x1 = -1;
				x2 = -c/a;
				if(x1 == x2){
					cout<<"phuong trinh co mot nghiem la: " << x1<<endl;
				}
				else{
					cout<<"x1 la: "<< x1<<endl;
					cout<<"x2 la: "<< x2<<endl;
				}
			}
			else{
				double detal, x1, x2;
				detal= b*b-4*a*c;
				if(detal>0){
					x1=(-b+sqrt(detal)) / (2*a);
					x2=(-b-sqrt(detal)) / (2*a);
					cout<<"x1 la: " << x1 <<endl;
					cout<<"x2 la: " << x2 <<endl;
				}
				else{
					if(detal==0){
				       cout << "phuong trinh co nghiem kep: " << (-b/(2*a))<<endl;
					}
					else{
						cout<<"phuong trih vo nghiem."<<endl;
					}
				}
			}
		}
	}	
}

int main(){
	int a;
	int b;
	int c;
	cout<<"Nhap vao A"; cin>>a;
	cout<<"Nhap vao B"; cin>>b;
	cout<<"Nhap vao C"; cin>>c;
	
	GiaiPhuongTrinhBac2(a, b, c);
}
