#include <iostream>
#include <cmath>
using namespace std;

double square_root(double a) {
    double x = a;
    double eps = 0.00001;
    while (abs(x*x-a) > eps) {
        x = (x*x + a)/(2*x);
    }
    return x;
}

int main() {
    double a;
    cout << "Nhap vao so duong a: ";
    cin >> a;
    cout << "Can bac hai cua " << a<< " = " << square_root(a) << endl;
    return 0;
}
