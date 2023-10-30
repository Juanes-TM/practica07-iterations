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

void Usage(int argc, char *argv[]) {
  if (argc != 2) {
    std::cout << argv[0] << ": Falta un número natural como parámetro" << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    const std::string kHelpText = "Este programa calcula los N primeros digitos de la serie fibonacci, siguiendo un número que ha de introducir por línea de comandos para la ejecución del programa";
    std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

void fibonacci_numbers(int number){
  int first_number(0), second_number(1), next_number(0);
  for (int i=0; i < number; i++){
    if (i <= 1){
      next_number = i;
    }
    else{
      next_number = first_number + second_number;
      first_number = second_number;
      second_number = next_number;
    }
    std::cout << next_number << " ";
  }
  std::cout << std::endl;
}