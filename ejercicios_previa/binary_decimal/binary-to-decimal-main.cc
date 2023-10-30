/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Juan Esteban Tamayo Marmolejo
 * @date 30 oct 2023
 * @brief Convierte un número binario a decimal, sin usar vextores ni cadenas.
 */

#include <iostream>
#include <cstdlib>    // exit
#include "binary-to-decimal.h"

int main(int argc, char *argv[]) {
  Usage(argc, argv);
  int binary_number = std::stoi(argv[1]);
  std::cout << BinaryToDecimal(binary_number) << std::endl;
  return 0;
}