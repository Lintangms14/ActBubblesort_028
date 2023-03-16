#include <iostream>
using namespace std;

int a[20];				// Deklarasi Array a dengan ukuran 20
int n;					// Deklarasi variabel n untuk menyimpan banyaknya elemen array


void input() {			// metode untuk input
	while (true) {		// looping
		cout << "masukan banyaknya elemen pada array : ";	//output ke layar
		cin >> n;		// input dari pengguna
		if (n <= 20)	// jika n kurang dari atau sama dengan 20
			break;		// keluar dari loop
		else {			// jika n lebih dari 20
			cout << "\nArray dapat mempunyai maksimal 20 elemen. \n";	//output ke layar
		}
		cout << endl;								// output baris kosong
		cout << "===================" << endl;		// output ke layar
		cout << "Masukan Elemen Array" << endl;		// output ke layar
		cout << "===================" << endl;		// output ke layar

		for (int i = 0; i < n; i++) {
			cout << "data ke-" << (i + 1) << ": ";
			cin >> a[i];
		}

	}
	
}

void display() {		// methode untuk menampilkan hasil
	cout << endl;		// output baris kosong
	cout << "===============================" << endl;		// output ke layar
	cout << "Element Array yang telah tersusun" << endl;	// output ke layar
	cout << "===============================" << endl;		// output ke layar
	for (int j = 0; j < n; j++) {		// looping dengan j di mulai dari 0 hingga n-1
		cout << a[j] << endl;			// output ke layar
	}
	cout << endl;
}

void bubblesortArray() {					// method untuk mengurutkan array dengan method bubble sort
	for (int i = 1; i < n; i++) {			// looping dengan i dimulai dari 1 hingga n-1
		for (int j = 0; j < n - i; i++) {	// looping dengan j dimulai dari 0 hingga n-i-1
			if (a[j] > a[j + 1]) {			// jika nilai pada a[j] lebih besar dari a[j+l]
				int temp = a[j];			// simpan nilai a[j] ke variabel sementara temp
				a[j] = a[j + 1];			// assign nilai a[j+l] ke a[j]
				a[j + 1] = temp;			// assign nilai temp ke a[j+l
			}
		}
	}
}

int main() {
	//membuat objek obj dari class Bubblesort
	input();				// memanggil read() dari class Bubblesort
	bubblesortArray();		// memanggil BubblesortArray() dari class Bubblesort
	display();				// memanggil display() dari class Bubblesort
	return 0;
}