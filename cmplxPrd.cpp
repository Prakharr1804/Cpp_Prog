#include<iostream>
using namespace std;
int main(){
    int real1 = 1,real2 = 2;
    int imag1 = -2, imag2 = -1;
    int real,imag;
    real = (real1*real2) - (imag1*imag2);
    imag = (real1*imag2) + (real2*imag1);
    cout<<real<<"+i"<<"("<<imag<<")";
    return 0;
}