#include<iostream>
#include<iomanip>
using namespace std;
#define MAXROW 3
#define MAXCOLOUMN 3

struct matrix{
    int mat[MAXROW][MAXCOLOUMN];
};

matrix operator+ (matrix,matrix);
matrix operator- (matrix,matrix);
matrix operator* (matrix,matrix);
void matPrint (matrix);

int main(){
    matrix a ={{ {1,0,0},{0,1,0},{0,0,1} }};   
    matrix b ={{ {1,0,0},{0,1,0},{0,0,1} }};
    matrix c = a+b;
    matPrint (c);
    matrix d = a*b;
    matPrint(d);
    return 0;
}
matrix operator+ (matrix a,matrix b){
    matrix c;
    int i,j;
    for(i=0;i<MAXROW;i++){
        for(j=0;j<MAXCOLOUMN;j++){
            c.mat[i][j] = a.mat[i][j] + b.mat[i][j];
        }
    }
    return c;
}

void matPrint (matrix c){
    int i,j;
    for(i=0;i<MAXROW;i++){
        cout<<endl;
        for(j=0;j<MAXCOLOUMN;j++){
            cout<<setw(4)<<c.mat[i][j];
        }
    }
    cout<<endl;
}

matrix operator- (matrix a,matrix b){
    matrix c;
    int i,j;
    for(i=0;i<MAXROW;i++){
        for(j=0;j<MAXCOLOUMN;j++){
            c.mat[i][j] = a.mat[i][j] - b.mat[i][j];
        }
    }
    return c;
}

matrix operator* (matrix a,matrix b){
    matrix c;
    int i,j,k,sum = 0;
    for(i=0;i<MAXROW;i++){
        for(j=0;j<MAXCOLOUMN;j++){
            c.mat[i][j] = 0;
            for(k=0;k<MAXCOLOUMN;k++){
                c.mat[i][j] += a.mat[i][k]*b.mat[k][j];            
            }
        }
    }
    return c;
}