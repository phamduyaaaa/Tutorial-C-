#include <iostream>
#include <math.h>
using namespace std;
float Tinh(float x, int n);
void Nhap(float &x,int &n);
// Ham chinh
int main(){
    float x;
    int n;
    Nhap(x,n);
    cout<<Tinh(x,n);
	return 0;
}

// Ham Nhap
void Nhap(float &x,int &n){
	cin>>x;
	cin>>n;
}

// Ham Tinh
float Tinh(float x, int n){
	float P = 0;
	int S = 0;
	if(n<=10)
	for(int i = 1;i<=n;i++){
	S +=i;
	P += (x-i)/S;
}
    else
    P = 2020*x +sqrt(pow(n,3));
    
return P;
}
