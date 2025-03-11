#include <iostream>

using namespace std;

float Panjang, Lebar, Luas;
void prosedurHitungLuas(){
    Luas = Panjang*Lebar;
}

void prosedurInputData(){
    cout << "masukkan panjangnya = ";
    cin >> Panjang;
    cout << "Masukkan Lebarnya = ";
    cin >> Lebar;
}

void prosedurOutputData(){
    cout << "Luas Persegi panjang = "<< Luas;
}

int main(){
    prosedurInputData();
    prosedurHitungLuas();
    prosedurOutputData();
}