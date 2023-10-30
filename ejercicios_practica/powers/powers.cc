/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * @author Juan Esteban Tamayo Marmolejo.
 * @date 30 oct 2023
 * @brief Al ingresar dos números naturales, calcula la potencia del primero elevado al segundo.
 * @bug There are no known bugs
 * @see https://www.cs.cmu.edu/~410/doc/doxygen.html
**/

#include <iostream>
#include <cmath>

int main(){
  int number1, number2;
  long long potencia = 1;
  while (std::cin >> number1 >> number2){
    if (number1 == 0 && number2 == number1){
      std::cout << 1 << std::endl;
    }
    else {
      potencia = pow(number1, number2);
      std::cout << potencia << std::endl;
    }
  }
  return 0;
}