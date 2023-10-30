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

void Usage(int argc, char *argv[]) {
  if (argc != 2) {
    std::cout << argv[0] << ": Falta un número natural como parámetro" << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    const std::string kHelpText = "Este programa calcula la suma de todos los digitos de un número natural que ha de introducir por línea de comandos para la ejecución del programa";
    std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

int sum_digits(int number) {
  int sum{0};
  while (number > 0) {
    sum += number % 10;
    number /= 10;
  }
  return sum;
}

