/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * @author Juan Esteban Tamayo Marmolejo.
 * @date 30 oct 2023
 * @brief Al ingresar un "n" número entero, devuelve la suma de cuadrados de números del intervalo  [1,n].
 * @bug There are no known bugs
 * @see https://www.cs.cmu.edu/~410/doc/doxygen.html
**/

#include <iostream>
#include <cmath>

int main() {
  int number;
  int suma = 0;
  std::cin >> number;
  for(int i{1}; i <= number; i++){
    suma = suma + pow (i,2);
  }
  std::cout << suma << std::endl;
  return 0;
}