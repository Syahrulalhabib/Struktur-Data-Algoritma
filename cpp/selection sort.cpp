#include <iostream>

void Selection(int data[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int indeks = i;
        for (int j = i + 1; j < n; j++) {
            if (data[j] < data[indeks]) {
                indeks = j;
            }
        }
        int temp = data[indeks];
        data[indeks] = data[i];
        data[i] = temp;
    }
}

void array(int data[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int n;
    std::cout << "Masukkan jumlah data: ";
    std::cin >> n;

    int data[n];
    std::cout << "Masukkan elemen :" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> data[i];
    }

    std::cout << "data sebelum diurutkan : ";
    array(data, n);

    Selection(data, n);

    std::cout << "data setelah diurutkan : ";
    array(data, n);

    return 0;
}

