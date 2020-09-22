#include <iostream>
using namespace std;

int main() {
  long n;
  long suma;
  suma = 0;

  cout << "Introduceti un nr n: ";
  cin >> n;

  while (n != 0){
    suma = suma + n;
    cout << "Introduceti un alt numar sau 0 pentru a incheia ciclul: ";
    cin >> n;
  }
  cout << "Suma este " << suma << endl;
  return 0;
}