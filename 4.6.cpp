#include <iostream>
#include <math.h>
using namespace std;

int main()
{
//khai bao bien
    int a,n;
    int X = 0;
    int Y = 0;
    int Z = 0;	
    int T = 0;
    int b[n];
// chieu vector
    cout<<"Nhap vao so phan tu cua vector: "<<endl;
    cin>>n;
// nhap phan tu cua vector
    for(int i = 0;i<n;i++)
    {
        cout<<"Nhap phan tu thu "<<i+1<<" cua vector: "<<endl;
        cin>>b[i];
    }
    for(int i= 0;i<n;i++)
    {
// Tinh cac chuan
       X += abs (b[i]); 
       Y += pow (b[i], 2); 
       Z += max(Z,abs(b[i])); 
	if (b[i] !=0)
	T++;
    }
// Tra KQ cac chuan
    cout <<"Chuan 1 cua vector X la: " <<X << endl;
    cout <<"Chuan 2 cua vector X la: " << Y << endl;
    cout << "Chuan vo cuc cua vector X la: " << Z << endl;
    cout << "Chuan 0 cua vector X la: " <<T << endl;

 return 0;   
} 
