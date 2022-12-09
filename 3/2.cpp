#include <iostream>
#include <string>

using namespace std;

int main() {
    int number;

    cout << "Введіть номер потягу(від 1 до 7) : ";
    cin >> number;

    switch (number) {
    case 1: cout << "Потяг 1, Київ - Харків"; break;
    case 2: cout << "Потяг 2, Київ - Львів"; break;
    case 3: cout << "Потяг 3, Івано-Франківськ - Суми"; break;
    case 4: cout << "Потяг 4, Івано-Франківськ - Чернігів"; break;
    case 5: cout << "Потяг 5, Івано-Франківськ - Київ"; break;
    case 6: cout << "Потяг 6, Івано-Франківськ - Харків"; break;
    case 7: cout << "Потяг 7, Дніпро - Київ"; break;
    default: cout << "Потягу " << number << " в списку немає"; break;
    }

    return 0;
}