#include <iostream>
using namespace std;

main()
{
    int a;
    int tichvohuong = 0;
    int x[a],y[a];
    cout<<"Nhap vao so phan tu cua x,y: "<<endl;
    cin>>a;
    for(int i = 0; i<a;i++)
    {
        cout<<"Nhap phan tu thu "<<i+1<<" cua x: "<<endl;
        cin>>x[i];
    }
    for(int i = 0; i<a;i++)
    {
        cout<<"Nhap phan tu thu "<<i+1<<" cua y: "<<endl;
        cin>>x[i];
    }
    for(int i=0;i<a;i++)
    {
        tichvohuong+=x[i]*y[i];
    }
    cout<<"Tich vo huong cua hai vecto la: "<<tichvohuong<<endl;
    return 0;
}
