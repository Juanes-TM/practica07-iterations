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
#include <cmath>      // pow
#include "binary-to-decimal.h"

void Usage(int argc, char *argv[]) {
  if (argc != 2) {
    std::cout << argv[0] << ": Falta un número natural como parámetro" << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    const std::string kHelpText = "Este programa calcula el decimal de un número binario, que se pasa como parámetro.";
    std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

int BinaryToDecimal(int binary_number) {
  int decimal_number{0};
  int remainder{0};
  int i{0};
  while (binary_number != 0) {
    remainder = binary_number % 10;
    binary_number /= 10;
    decimal_number += remainder * pow(2, i);
    ++i;
  }
  return decimal_number;
}