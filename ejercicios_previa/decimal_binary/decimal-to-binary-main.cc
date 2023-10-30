/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Juan Esteban Tamayo Marmolejo
 * @date 30 oct 2023
 * @brief Convierte un número decimal a binario, sin usar vextores ni cadenas.
 */

#include <iostream>
#include <cstdlib>    // exit
#include "decimal-to-binary.h"

int main(int argc, char *argv[]) {
  Usage(argc, argv);
  int decimal_number = std::stoi(argv[1]);
  std::cout << DecimalToBinary(decimal_number) << std::endl;
  return 0;
}