#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

void Nhap(float &x, int &a);
float TinhP(int a, int b);
float TinhQ(float x, int n);
int main(){
    float x;
    int n;
    Nhap(x,n);
    cout<<TinhP(x,n)<<endl;
    return 0;
    
}
void Nhap(float &x, int &a){
    cin>>x>>a;
}
float TinhP(int a, int b){
    if((pow((a-b),2)+pow((a/b),2))<0){
        return 0;
    }
    else{
        return sqrt((pow((a-b),2)+pow((a/b),2)));
    }
}
float TinhQ(float x, int n){
    float Q = exp(abs(x+1));
    for(int i = 1; i<= x; i ++){
        Q += x/(i*2+1);
    }
    return Q;
}
