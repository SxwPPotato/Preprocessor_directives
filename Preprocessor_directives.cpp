#include <iostream>
#define MODE 1
void add(int& num1, int& num2) {
    std::cout << "Введите число 1: ";
    std::cin >> num1;
    std::cout << "Введите число 2: ";
    std::cin >> num2;
    std::cout << "Результат сложения : " << num1 + num2;
}

int main()
{
setlocale(LC_ALL, "russian");
int num1;
int num2;
#if !defined(MODE) 
std::cout << "Определите MODE";
#elif (MODE == 0)
    std::cout << "Работаю в режиме тренировки";
#elif (MODE == 1)
std::cout << "Работаю в боевом режиме\n";
add(num1, num2);
#else std::cout << "Неизвестный режим. Завершение работы";
#endif
#undef MODE 
}
