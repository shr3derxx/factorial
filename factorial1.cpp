// Необходимо написать любую программу на языке С++, затем создать публичный репозиторий на GitHub и загрузить туда данную программу. В качестве ответа прикрепите код программы и ссылку на GitHub.
#include <iostream>

using namespace std;

int factorial(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

int main() {
  int number;

  cout << "Введите целое число: ";
  cin >> number;

  cout << "Факториал " << number << " равен " << factorial(number) << endl;

  return 0;
}
