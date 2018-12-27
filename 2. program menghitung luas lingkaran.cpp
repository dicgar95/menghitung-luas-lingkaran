#include "iostream"
using namespace std;

int main(int argc, char const *argv[]) {
  int r;
  float phi=3.14,luas;

  std::cout << "menghitung luas lingkaran" << '\n';
  std::cout << "masukan jari-jari :";
  std::cin >> r;

  luas=phi*r*r;

  std::cout << "luar lingkaran adalah :"<<luas << '\n';
  return 0;
}
