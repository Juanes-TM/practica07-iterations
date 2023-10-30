/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Juan Esteban Tamayo Marmolejo
 * @date 30 oct 2023
 * @brief Suma los digitos de un numero natural.
 */

#include <iostream>
#include <cstdlib>    // exit
#include "sum_natural.h" 

int main(int argc, char* argv[]) {
  Usage(argc, argv);
  int number{std::stoi(argv[1])};
  std::cout << sum_digits(number) << std::endl;
  return 0;
}

