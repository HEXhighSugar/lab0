#include <iostream>

using namespace std;

int main() {
    int Hello_World;
    int Input_Symbol;
    return 0;
}

int Hello_World() {
    cout << "Hello World!"; 
    return 0;
}

int Input_Symbol() {
    char symbol;
    cout << "Введите любой символ: ";
    cin >> symbol;
    cout << "Заберите ваш символ обратно: " << symbol;
    return 0;
}