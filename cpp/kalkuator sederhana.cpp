#include <iostream>
using namespace std;

int main() {
    char operatorChar;
    double angka_1, angka_2, hasilnya;

    cout << "Selamat datang di Kalkulator Sederhana\n";
    cout << "=====================================\n";

 
    cout << "Masukkan operator (+, -, *, /): ";
    cin >> operatorChar;


    cout << "Masukkan angka pertama: ";
    cin >> angka_1;
    cout << "Masukkan angka kedua: ";
    cin >> angka_2;

   
    switch (operatorChar) {
        case '+':
            hasilnya = angka_1 + angka_2;
            break;
        case '-':
            hasilnya = angka_1 - angka_2;
            break;
        case '*':
            hasilnya = angka_1 * angka_2;
            break;
        case '/':
            hasilnya = angka_1 / angka_2;
            break;
        default:
            cout << "Operator yang dimasukkan tidak valid!";
            return 0;
    }

    cout << "Hasil: " << angka_1 << " " << operatorChar << " " << angka_2 << " = " << hasilnya << "\n";

    return 0;
}

