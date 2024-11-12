#include<iostream>
using namespace std;
struct complex{
    int real,imag;
};
complex complexProd(complex,complex);
complex complexNo(int,int);
void complexPrint(complex);
int main(){
    int a = 1 , b= 2;
    int p = 1 , q = 2;
    complex c = complexNo(a,b);
    complex d = complexNo(p,q);
    complex prod = complexProd(c,d);
    complexPrint(prod);
    return 0;
}
complex complexNo(int x,int y){
    complex temp;
    temp.real = x;
    temp.imag = y;
    return temp;
}
complex complexProd(complex c,complex d){
    complex Prod;
    Prod.real = (c.real * d.real) - (c.imag * d.imag ) ;
    Prod.imag = (c.real * d.imag) + (c.imag * d.real ) ;
    return Prod;
}
void complexPrint(complex prod){
    cout << prod.real<<"+i"<<"("<<prod.imag<<")";
}