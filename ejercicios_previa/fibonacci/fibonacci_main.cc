/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Juan Esteban Tamayo Marmolejo
 * @date 30 oct 2023
 * @brief Calcula los N primeros digitos de la serie de Fibonacci.
 */

#include <iostream>
#include <cstdlib>    // exit
#include "fibonacci.h"

int main(int argc, char *argv[]) {
  Usage(argc, argv);
  int number = std::atoi(argv[1]);
  fibonacci_numbers(number);
  return 0;
}