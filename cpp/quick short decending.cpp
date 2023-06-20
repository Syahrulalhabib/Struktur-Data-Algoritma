#include <stdio.h>
#include <conio.h>

#define N 20

int quick(int bawah, int atas);

int i, j, A[N];

main() {
	int jml;
// clrscr
	printf("MENGURUTKAN DATA DENGAN QUICK SORT \n\n");
	printf("Masukkan bilangan jumlah bilangan (maks 20) : ");
	scanf("%d",&jml);
//input data
	for (i=0 ; i<jml; i++) {
		printf("Bilangan ke %d :",i+1);
		scanf("%d",&A[i]);

	}

//pengurutan data
	quick(0,jml-1);

//menampilkan hasil
	printf("\n");
	printf("Data yang telah terurut : \n");
	printf("\n");

	for (i=0; i<jml; i++) {
		printf("%d ",A[i]);
	}

}
//fungsi quick
int quick(int bawah,int atas) {
	int pivot,temp;
//pengulangan dilakukan
//selama bawah<atas

	if (bawah<atas) {
		i=bawah;
		j=atas;
		pivot = A[j];

		do {
			while (i<j && A[i]>=pivot) {
				i++;
			}
			while (j>i && A [j]<=pivot) {
				j--;
			}
			if (i<j) {
				temp = A[i];
				A[i]= A[j];
				A[j]= temp;
			}
		} while (i<j);
		temp = A[j];
		A[j]= A[atas];
		A[atas]=temp;

		if (j-bawah<atas-i) {
			quick(bawah,j-1);
			quick(i+1,atas);
		}

		else {
			quick(i+1,atas);
			quick(bawah,j-1);
		}
	}

}
