#include <iostream>

using namespace std;

float fungsiHitungrerata(float x, float y){
    return (x+y)/2;
}

string fungsiCekStatusKelulusan(float a){
    if (a >=70){
        return "Lulus";
    }
    else {
        return "Gagal";
    }
}

int main (){
    float Nilai1, Nilai2, Rerata;
    cout << "masukkan Nilai1 = ";
    cin >> Nilai1;
    cout << "Masukkan Nilai2 = ";
    cin >> Nilai2;
    cout << "Status Kelulusan = " << fungsiCekStatusKelulusan(fungsiHitungrerata(Nilai1,Nilai2));
}