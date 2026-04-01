#include <iostream>
using namespace std;

// Variabel global
int n, pilihan;

// Function cek bilangan prima
bool isPrima(int n){
    if(n <= 1) return false;
    int i = 2;
    while(i <= n/2){
        if(n % i == 0) return false;
        i++;
    }
    return true;
}

// Function cek Fibonacci
bool isFibonacci(int n){
    int a = 0, b = 1, c;
    while(a <= n){
        if(a == n) return true;
        c = a + b;
        a = b;
        b = c;
    }
    return false;
}

// Prosedur input
void input(){
    cout << "Masukkan angka: ";
    cin >> n;
}

// Prosedur output
void outputPrima(){
    if(isPrima(n))
        cout << n << " adalah bilangan prima\n";
    else
        cout << n << " bukan bilangan prima\n";
}

void outputFibonacci(){
    if(isFibonacci(n))
        cout << n << " termasuk deret Fibonacci\n";
