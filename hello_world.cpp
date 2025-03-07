#include <iostream>
#include <string>

int main() {
    string name;
    std::cout << "Enter your name: ";
    std::cin >> name;//делаем ввод имени пользователем
    std::cout << "Hello world from " << name << "!" << std::endl;//выводим приветствие с именем
    return 0;
}
