#include <iostream>

using namespace std;
int main() {
  
  // Deklarasi Nilai A, B Dan C
  int A = 10;
  int B = 5; 
  int C;

  // Cetak Nilai Sebelum Pertukaran
  std::cout << "Sebelum pertukaran:" << std::endl;
  std::cout << "Nilai A adalah " << A << std::endl;
  std::cout << "Nilai B adalah " << B << std::endl;

  // Menukar Nilai A Dan B Menggunakan Variabel C
  C = A;
  A = B;
  B = C;

  // Cetak A Dan B Setelah Pertukaran
  std::cout << "Setelah pertukaran:" << std::endl;
  std::cout << "Nilai A sekarang adalah " << A << std::endl;
  std::cout << "Nilai B sekarang adalah " << B << std::endl;

  return 0;
}