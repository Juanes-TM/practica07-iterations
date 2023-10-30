/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Juan Esteban Tamayo Marmolejo
 * @date 30 oct 2023
 * @brief Dice si un año es bisiesto o no.
 */

#include <iostream>
#include <cstdlib>    // exit
#include "leap-year.h"

void Usage(int argc, char *argv[]) {
  if (argc != 2) {
    std::cout << argv[0] << ": Falta un número natural como parámetro" << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    const std::string kHelpText = "Este programa dice si un año es bisiesto o no, el año debe pasarse como parámetro.";
    std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

void LeapYear(int year) {
  int resto = year / 100;
  if (year % 4 == 0 && year % 100 != 0){
    std::cout << "YES" << std::endl;
    return;
  }
  else if (year%100 == 0 && resto % 4 == 0){
    std::cout << "YES" << std::endl;
    return;
  }
  else{
    std::cout << "NO" << std::endl;
    return;
  }
}