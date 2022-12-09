#include <iostream>

using namespace std;

int main() {
    int number;
    int count = 0;
    int a;
    int b;
    int c;

    cout << "Введіть трьохцифрове число : ";
    cin >> number;
    a = number / 100;
    b = number / 10 % 10;
    c = number % 10;

    cout << "Перше число" << a << "\n";
    cout << "Друге число" << b << "\n";
    cout << "Третє число" << c << "\n";

    if (a > 5) {
        count += a;
    }
    if (b > 5) {
        count += b;
    }
    if (c > 5) {
        count += c;
    }
    
    if (count == 0){
        cout << "Добуток чисел, більших за 5 немає(((" << endl;
    }
    else {
        cout << "Добуток чисел, більших за 5: " << count;
    }

    return 0;
}