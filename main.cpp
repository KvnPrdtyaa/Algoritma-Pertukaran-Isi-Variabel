#include <iostream>

using namespace std;
int main() {
  
  // Deklarasi Nilai A, B Dan C
  int A = 10;
  int B = 5; 
  int C;

  // Cetak Nilai Sebelum Pertukaran
  cout << "Sebelum pertukaran:" << endl;
  cout << "Nilai A adalah " << A << endl;
  cout << "Nilai B adalah " << B << endl;

  // Menetapkan nilai A ke C
  C = A;
  // Menetapkan nilai B ke A
  A = B;
  // Menetapkan nilai C ke B
  B = C;

  // Cetak A Dan B Setelah Pertukaran
  cout << "Setelah pertukaran:" << endl;
  cout << "Nilai A sekarang adalah " << A << endl;
  cout << "Nilai B sekarang adalah " << B << endl;

  return 0;
}