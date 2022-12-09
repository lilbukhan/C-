#include <iostream>

using namespace std;

struct date
{
    int hours;
    int minutes;
};

int main()
{
    date time;
    
    cin >> time.hours;
    cin >> time.minutes;
    
    int number;
    cin >> number;
    time.hours += number / 60;
    while(time.hours > 24){
        time.hours -= 24;
    }
    time.minutes += number % 60;
    while(time.minutes > 60){
        time.minutes -= 60;
    }
    
    cout << time.hours << ":" << time.minutes;

    return 0;
}