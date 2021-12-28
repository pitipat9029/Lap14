#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double I[],int N,double O[]){

    double sum ;
    for (int i = 0; i < N ; i++)
    {
        sum += I[i] ;
    }
    O[0] = sum/N ;

    double sumA ;
    for (int i = 0; i < N; i++)
    {
        sumA += pow((I[i] - O[0]),2) ;
    }
    O[1] = sqrt(sumA/N) ;

    
    double GM = 1.00  ;
    for (int i = 0; i < N; i++)
    {
        GM = GM * I[i] ;
    } 
    O[2] = pow(GM,(double)1/N) ;


    double HM ;
    for (int i = 0; i < N; i++)
    {
        HM += 1/I[i]  ;
    }
    O[3] = N/HM ;

    

    double MAX = I[0] , MIN = I[0] ;
    for (int i = 0; i < N; i++)
    {
        if(I[i] > MAX) MAX = I[i] ;
        if(I[i] < MIN) MIN = I[i] ;
    }
    O[4] = MAX ;
    O[5] = MIN ;


}