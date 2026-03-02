//libary
#include <iostream>
using namespace std;

//deklarasi variabel global
int r;

//implementasi fungsi dan prosedur
void input(){
    cout << "masukkan r : ";
    cin >> r;
}
float luasLingkaran (int b){
    return phi*b*b;
}

//prosedur luas lingkaran
void output (){
    cout << "hasilnya : " << luasLingkaran (phi,r) << endl;
}

//program utama

}
