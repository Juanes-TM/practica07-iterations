/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * @author Juan Esteban Tamayo Marmolejo.
 * @date 30 oct 2023
 * @brief Al ingresar un "n" número te da su redondeo alto, bajo y general.
 * @bug There are no known bugs
 * @see https://www.cs.cmu.edu/~410/doc/doxygen.html
**/

#include <iostream>
#include <cmath>

int main(){
  double number;
  std::cin >> number;
  int alto, bajo, general;
  alto = floor(number);
  bajo = ceil(number);
  general = roundl(number);
  std::cout <<  alto << " " << bajo << " " << general << std::endl;
  return 0;
}