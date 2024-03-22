/* 
1.  Algoritma Bubble Sort bekerja dengan cara melakukan pemindaian (pass) secara berulang terhadap nilai dalam array.
    Pada pass 1 perbandingan dilakukan pada nilai yang tersimpan di dalam index 0 dengan nilai di dalam index 1.
    Jika nilai index 0 > nilai index 1 maka nilainya akan ditukar. Nilai yang lebih besar akan berpindah ke arah kanan. Kemudian index 1 dibandingkan dengan index 2, jika nilai index 1 < nilai index 2 maka tidak ada perubahan.
    Begitu seterusnya hingga pass 1 selesai, nilai terbesar akan berada pada posisi yang tepat setelah pass 1. Lalu ke pass 2 dst. Pemindaian dilakukan selama n-1 kali.

2.  Shell Sort membagi array menjadi beberapa subset yang lebih kecil. Dalam setiap iterasi, algoritma ini melakukan penyisipan (insertion) terhadap elemen-elemen yang berjarak tertentu. Jarak antara elemen-elemen ini awalnya lebih besar dari 1.
    Dalam setiap iterasi, Shell Sort membandingkan pasangan elemen yang terpisah oleh jarak yang telah ditentukan. Algoritma ini kemudian menyisipkan elemen-elemen tersebut ke dalam posisi yang tepat sesuai dengan urutan yang diinginkan.
    Setelah proses penyisipan selesai, jarak antar elemen-elemen yang dibandingkan akan dikurangi. Hal ini dilakukan untuk mengurangi jarak antar elemen-elemen yang dibandingkan dalam iterasi berikutnya.
    Proses ini diulangi dengan jarak yang semakin berkurang setiap iterasi, sehingga pada akhirnya, proses penyisipan dilakukan dengan jarak 1.
    Shell Sort berhenti ketika semua iterasi selesai dan jarak antar elemen yang dibandingkan telah mencapai 1, yang menandakan bahwa iterasi terakhir telah selesai dan array sudah terurut.

3.  Sebaiknya menggunakan Insertion Sort, karena algoritma ini memiliki kinerja yang sangat baik pada data yang hampir terurut atau sudah sebagian terurut.
    Ini karena algoritma tersebut hanya perlu memeriksa sedikit elemen untuk memastikan bahwa setiap elemen berada di posisi yang benar. Dengan demikian, Insertion Sort cenderung lebih cepat pada data yang sudah sebagian terurut dibandingkan dengan algoritma lain. 
*/

#include <iostream>
using namespace std;

    int Fadil[99];
    int n;

void input() { 
	while (true) {
		cout << "Masukkan banyaknya elemen pada array = ";
		cin >> n;
		if (n <= 99) 
			break; 
		else {
			cout << "\n Array dapat mempunyai maksimal 99 elemen. \n";
		}
	}

    	cout << endl;
	cout << "=====================" << endl;
	cout << "Masukkan Elemen Array" << endl;
	cout << "=====================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke - " << (i + 1) << ": ";
		cin >> Fadil[i];
	}
}
void selectionSort() {

    for (int j = 0; j < n - 1; j++) {
        int min_index = j;
        for (int i = j + 1; i < n; ++i) {
            if (Fadil[i] < Fadil[min_index]) {
                min_index = i;        
                
            }
        }
         int temp = Fadil[j];
                Fadil[j] = Fadil[min_index];
                Fadil[min_index] = temp;
    }
}

void display() {

	cout << endl;
	cout << "=================================" << endl;
	cout << "Element Array yang telah tersusun" << endl;
	cout << "=================================" << endl;

	for (int j = 0; j < n; j++) {
		cout << Fadil[j];
		if (j < n - 1) {
			cout << "-->";
		}
	}
	cout << endl;
	cout << endl;

	cout << "Jumlah Pass = " << n - 1 << endl;
	cout << endl;
	cout << endl;
}



int main()
{
	input();
	selectionSort();
	display();

	return 0;
}

