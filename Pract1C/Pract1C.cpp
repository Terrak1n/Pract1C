#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>


using namespace std;

// Класс для задания на циклы 9.

/*bool isPrime(int num) {
    if (num <= 1) {
        return false; 
    } else if (num <= 3) {
        return true; 
    } else if (num % 2 == 0 || num % 3 == 0) {
        return false; 
    }

    int i = 5;
    while (i * i <= num) {
        if (num % i == 0 || num % (i + 2) == 0) {
        return false; 
        }
        i += 6;
    }
    return true; 
    }*/

// Класс для Задания на циклы 10.

/*bool isSymmetric(int num) {
    if (num < 0) {
        num = -num; // Преобразуем отрицательное число в положительное
    }

    int originalNum = num;
    int reversedNum = 0;

    while (num > 0) {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }

    return originalNum == reversedNum;
    }*/

int main() {

    setlocale(LC_ALL, "Russian");

    // - Дополнительное задание 1.

    /*

    srand(time(0));

    int secretNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;

    cout << "Добро пожаловать в игру 'Угадай число'!\n";
    cout << "Загадано число от 1 до 100. Попробуйте угадать его.\n";

    while (true) {
        cout << "Введите ваше предположение: ";
        cin >> guess;

        attempts++;

        if (guess < secretNumber) {
            cout << "Слишком мало!\n";
        }
        else if (guess > secretNumber) {
            cout << "Слишком много!\n";
        }
        else {
            cout << "Поздравляю! Вы угадали число за " << attempts << " попыток!\n";
            break;
        }
    }
    return 0;*/

    // - Дополнительное задание 2.

    /*

    char operation;
    double num1, num2;

    cout << "Калькулятор\n";
    cout << "Выберите операцию:\n";
    cout << "1. Сложение (+)\n";
    cout << "2. Вычитание (-)\n";
    cout << "3. Умножение (*)\n";
    cout << "4. Деление (/)\n";
    cout << "Введите символ операции: ";
    cin >> operation;

    cout << "Введите первое число: ";
    cin >> num1;

    cout << "Введите второе число: ";
    cin >> num2;

    switch (operation) {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0) {
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        }
        else {
            cout << "Деление на ноль недопустимо!" << endl;
        }
        break;
    default:
        cout << "Неверный символ операции!" << endl;
    }

    return 0;
}*/

    // - Дополнительное задание 3.

    /*

    int age;

    cout << "Введите ваш возраст: ";
    cin >> age;

    if (age < 13) {
        cout << "Вы ребенок.\n";
    }
    else if (age >= 13 && age < 18) {
        cout << "Вы подросток.\n";
    }
    else if (age >= 18 && age < 65) {
        cout << "Вы взрослый.\n";
    }
    else {
        cout << "Вы пожилой человек.\n";
    }

    return 0;
}
*/

    // - Дополнительное задание 4.

    /*

    string password;
    bool hasDigit = false;
    bool hasSpecialChar = false;

    cout << "Введите пароль: ";
    cin >> password;

    if (password.length() < 8) {
        cout << "Пароль должен быть не менее 8 символов.\n";
    }
    else {
        for (char c : password) {
            if (isdigit(c)) {
                hasDigit = true;
            }
            else if (!isalnum(c)) { // Проверка на спецсимволы
                hasSpecialChar = true;
            }
        }

        if (!hasDigit) {
            cout << "Пароль должен содержать хотя бы одну цифру.\n";
        }

        if (!hasSpecialChar) {
            cout << "Пароль должен содержать хотя бы один специальный символ.\n";
        }

        if (hasDigit && hasSpecialChar) {
            cout << "Пароль соответствует всем требованиям!\n";
        }
    }

    return 0;
}*/

    // - Дополнительное задание 5.

    /*
    double side1, side2, side3;

    cout << "Введите длину первой стороны треугольника: ";
    cin >> side1;

    cout << "Введите длину второй стороны треугольника: ";
    cin >> side2;

    cout << "Введите длину третьей стороны треугольника: ";
    cin >> side3;

    
    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)) {
        cout << "Треугольник может существовать.\n";
    } else {
        cout << "Треугольник не может существовать.\n";
    }

    return 0;
    }*/

    // - Задания на циклы 1.

    /*
    int n;
    int sum = 0;

    cout << "Введите число N: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "Сумма чисел от 1 до " << n << " равна: " << sum << endl;

    return 0;
    }*/

    // - Задания на циклы 2.

    /*
    int n;
    int factorial = 1;

    cout << "Введите число N: ";
    cin >> n;

    int i = 1;
    while (i <= n) {
        factorial *= i;
        i++;
    }

    cout << "Факториал числа " << n << " равен: " << factorial << endl;

    return 0;
    }
    */

    // - Задание на циклы 3.

    /*int n;

    cout << "Введите число N: ";
    cin >> n;

    cout << "Нечетные числа от 1 до " << n << ": ";

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
        cout << i << " ";
        }
    }

    cout << endl; // Переход на новую строку

    return 0;
    }*/

    // - Задание на циклы 4.

    /*int n;

    cout << "Введите число N: ";
    cin >> n;

    cout << "Числа от " << n << " до 1: ";
    for (int i = n; i >= 1; i--) {
        cout << i << " ";
    }
    cout << endl; // Переход на новую строку

    return 0;
    }*/

    // - Задание на циклы 5.

    /*int n;

    cout << "Введите число N: ";
    cin >> n;

    if (n <= 0) {
        cout << "Число N должно быть положительным.\n";
        return 1; // Выход из программы с кодом ошибки
    } else if (n == 1) {
        cout << "1-е число Фибоначчи: 0\n";
        return 0; // Выход из программы
    } else if (n == 2) {
        cout << "2-е число Фибоначчи: 1\n";
        return 0; // Выход из программы
    }

    int a = 0;
    int b = 1;
    int fib = 0;

    for (int i = 3; i <= n; i++) {
        fib = a + b;
        a = b;
        b = fib;
    }

    cout << n << "-е число Фибоначчи: " << fib << endl;

    return 0;
    }
    */

    // - Задание на циклы 6.

    /*int n, sum = 0, digit;

        cout << "Введите число N: ";
        cin >> n;

        // Проверка на отрицательное число
        if (n < 0) {
            n = -n; // Преобразование в положительное
        }

        while (n > 0) {
            digit = n % 10; // Получение последней цифры
            sum += digit; // Добавление цифры к сумме
            n /= 10; // Удаление последней цифры
        }

        cout << "Сумма цифр числа N: " << sum << endl;

        return 0;
        }
        */

    // - Задание на циклы 7.

    /*
    int n;

    cout << "Введите число N: ";
    cin >> n;

    cout << "Таблица умножения для числа " << n << ":" << endl;

    for (int i = 1; i <= 1; i++) {

        for (int j = 1; j <= 10; j++) {

            cout << n << " * " << j << " = " << n * j << "\t";
    }
        cout << endl; 
    }

        return 0;
    }
    */

    // - Задание на циклы 8.

    /*
    string inputString;

    cout << "Введите строку: ";
    getline(cin, inputString); // Используем getline для ввода строки с пробелами

    string reversedString = "";

    for (int i = inputString.length() - 1; i >= 0; i--) {
        reversedString += inputString[i];
    }

    cout << "Перевернутая строка: " << reversedString << endl;

    return 0;
    }
    */

    // - Задание на циклы 9.

    /*
    int n;

    cout << "Введите число: ";
    cin >> n;

    if (isPrime(n)) {
        cout << n << " - простое число.\n";
    } else {
        cout << n << " - не простое число.\n";
    }

    return 0;
    }
    */

    // - Задание на циклы 10.

    /*
    int n;

        cout << "Введите число: ";
        cin >> n;

    if (isSymmetric(n)) {
        cout << n << " - симметричное число.\n";
    }
    else {
        cout << n << " - не симметричное число.\n";
    }

    return 0;
    }*/

    // Задания по логическим операторам и условиям - 1.
    
    /* int number;

  cout << "Введите число: ";
  cin >> number;

  if (number % 2 == 0) {
    cout << number << " - четное число.\n";
  } else {
    cout << number << " - нечетное число.\n";
  }

  return 0;
    }*/

    // Задания по логическим операторам и условиям - 2.

    /* int number;

  cout << "Введите число: ";
  cin >> number;

  if (number > 0) {
    cout << number << " - положительное число.\n";
  } else if (number < 0) {
    cout << number << " - отрицательное число.\n";
  } else { // number == 0
    cout << number << " - ноль.\n";
  }

  return 0;
    }*/

    // Задания ппо логическим операторам и условиям - 3.

    /*
    int number;

  cout << "Введите число: ";
  cin >> number;

  string result = number > 10 ? "Больше 10" : "10 и меньше";
  cout << result << endl;

  return 0;
    }
    */

    // Задания по логическим операторам и условиям - 4.

    /*int number;

  cout << "Введите число: ";
  cin >> number;

  string result = (number % 5 == 0) ? "Число кратно пяти" : "Число не кратно пяти";
  cout << result << endl;

  return 0;
    }*/

    // Задания по логическим операторам и условиям - 5.

    /*int year;

  cout << "Введите год: ";
  cin >> year;

  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
    cout << year << " - високосный год.\n";
  } else {
    cout << year << " - не високосный год.\n";
  }

  return 0;
}
    */

    // Задания по логическим операторам и условиям - 6.

    /* int number;

  cout << "Введите число: ";
  cin >> number;

  if (number >= 1 && number <= 100) {
    cout << number << " находится в диапазоне от 1 до 100.\n";
  } else {
    cout << number << " не находится в диапазоне от 1 до 100.\n";
  }

  return 0;
}
    */

    // Задания по логическим операторам и условиям - 7.

    /*int day;

  cout << "Введите число дня недели (от 1 до 7): ";
  cin >> day;

  switch (day) {
    case 1:
      cout << "Понедельник" << endl;
      break;
    case 2:
      cout << "Вторник" << endl;
      break;
    case 3:
      cout << "Среда" << endl;
      break;
    case 4:
      cout << "Четверг" << endl;
      break;
    case 5:
      cout << "Пятница" << endl;
      break;
    case 6:
      cout << "Суббота" << endl;
      break;
    case 7:
      cout << "Воскресенье" << endl;
      break;
    default:
      cout << "Неверное число дня недели." << endl;
      break;
  }

  return 0;
}
    */

    // Задания по логическим операторам и условиям - 8.

    /*int month;

  cout << "Введите номер месяца (от 1 до 12): ";
  cin >> month;

  switch (month) {
    case 1:
      cout << "Январь" << endl;
      break;
    case 2:
      cout << "Февраль" << endl;
      break;
    case 3:
      cout << "Март" << endl;
      break;
    case 4:
      cout << "Апрель" << endl;
      break;
    case 5:
      cout << "Май" << endl;
      break;
    case 6:
      cout << "Июнь" << endl;
      break;
    case 7:
      cout << "Июль" << endl;
      break;
    case 8:
      cout << "Август" << endl;
      break;
    case 9:
      cout << "Сентябрь" << endl;
      break;
    case 10:
      cout << "Октябрь" << endl;
      break;
    case 11:
      cout << "Ноябрь" << endl;
      break;
    case 12:
      cout << "Декабрь" << endl;
      break;
    default:
      cout << "Неверный номер месяца." << endl;
      break;
  }

  return 0;
}
    */

    // Задания по логическим операторам и условиям - 9.

    /*int number;

  cout << "Введите число: ";
  cin >> number;

  if (number > 0 && number % 2 == 0) {
    cout << number << " - четное и положительное число.\n";
  } else {
    cout << number << " - не является четным и положительным числом.\n";
  }

  return 0;
}
    */

    // Задания по логическим операторам и условиям - 10.

    /*int number;

  cout << "Введите число: ";
  cin >> number;

  if (number < 0 || number % 2 != 0) {
    cout << number << " - отрицательное или нечетное число.\n";
  } else {
    cout << number << " - не является ни отрицательным, ни нечетным.\n";
  }

  return 0;
}
    */

    // Задания по комбинированию операторов - 1.

    /*int number;

  cout << "Введите число: ";
  cin >> number;

  if (number >= 10 && number <= 20 && number % 2 == 0) {
    cout << number << " - четное число в диапазоне от 10 до 20.\n";
  } else {
    cout << number << " - не является четным числом в диапазоне от 10 до 20.\n";
  }

  return 0;
}
    */

    // Задания по комбинированию операторов - 2.

    /*int number;

  cout << "Введите число: ";
  cin >> number;

  string result = (number > 0 && number % 2 == 0) ? "Число положительное и четное" : "Число не положительное или нечетное";
  cout << result << endl;

  return 0;
}*/

    // Задания по комбинированию операторов - 3.

    /*char grade;

  cout << "Введите оценку (A, B, C, D, F): ";
  cin >> grade;

  switch (grade) {
    case 'A':
      cout << "Отлично!" << endl;
      break;
    case 'B':
      cout << "Хорошо" << endl;
      break;
    case 'C':
      cout << "Удовлетворительно" << endl;
      break;
    case 'D':
      cout << "Неудовлетворительно" << endl;
      break;
    case 'F':
      cout << "Неуспешно" << endl;
      break;
    default:
      cout << "Неверная оценка." << endl;
      break;
  }

  return 0;
}
    */

    // Задания по комбинированию операторов - 4.

    /*int number;

  cout << "Введите число: ";
  cin >> number;

  if (number > 0 && number % 3 == 0) {
    cout << number << " - положительное число, которое делится на 3.\n";
  } else {
    cout << number << " - не положительное число или не делится на 3.\n";
  }

  return 0;
}
    */

    // Задания по комбинированию операторов - 5.

    /*int number;

  cout << "Введите число: ";
  cin >> number;

  if (number >= 1 && number <= 100 && number % 2 == 0) {
    cout << number << " - четное число в диапазоне от 1 до 100.\n";
  } else {
    cout << number << " - не является четным числом в диапазоне от 1 до 100.\n";
  }

  return 0;
}
    */