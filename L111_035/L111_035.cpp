#include <iostream>
#include "increment2.h"

int main() {
  int m;

  std::cout << "Введите значение m: ";
  std::cin >> m;

  // Вычисление выражения
  int y = 2 * m + 1;

  // Вывод результата
  std::cout << "Результат: y = " << y << std::endl;

  return 0;
}