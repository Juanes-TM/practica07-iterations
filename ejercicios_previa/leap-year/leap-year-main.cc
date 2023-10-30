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

int main(int argc, char *argv[]) {
  Usage(argc, argv);
  int year = std::atoi(argv[1]);
  LeapYear(year);
  return 0;
}