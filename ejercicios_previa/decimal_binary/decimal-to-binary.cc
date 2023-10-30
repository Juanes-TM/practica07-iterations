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

void Usage(int argc, char *argv[]) {
  if (argc != 2) {
    std::cout << argv[0] << ": Falta un número natural como parámetro" << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    const std::string kHelpText = "Este programa calcula el binario de un número decimal, que se pasa como parámetro.";
    std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

int DecimalToBinary(int decimal_number) {
  int binary_number{0};
  int remainder{0};
  int i{1};
  while (decimal_number != 0) {
    remainder = decimal_number % 2;
    decimal_number /= 2;
    binary_number += remainder * i;
    i *= 10;
  }
  return binary_number;
}