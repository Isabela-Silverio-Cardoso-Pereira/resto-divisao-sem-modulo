/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

    int divi(int N1, int N2);


int main()
{
    int conta, conta2;
    int N1 = 10;
    int N2 = 3;
    int resultado = divi(N1,N2);
    cout << resultado;
   

  
}

int divi(int N1, int N2){
    
    // Enquanto N1 for maior ou igual a N2, subtraia N2 de N1
    while (N1 >= N2) {
        N1 -= N2;
    }
    // O valor de N1 restante é o resto da divisão
    return N1;
    
}