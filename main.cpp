#include <iostream>
using namespace std;
#define max 100


int main(int argc, char** argv) {
	int n;
	cout<<"nhap n:";
	cin>> n;
	int a[n];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int b;
	cout<<"nhap b:";
	cin>>b;
	int c[n];
	int nho=0;
	int tg;
	for(int i=1;i<=n;i++){
		tg = b*a[i]+nho;
		c[i]=tg%10;
		nho=tg/10;
	}
	if(nho>0){
		n++;
		c[n]=nho;
	}
	for(int i=n; i>0;i--){
		cout<<c[i];
	}
	return 0;
}
