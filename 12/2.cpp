#include <iostream>

using namespace std;

struct date
{
    int hours;
    int minutes;
};

int main()
{
    date startime;
    date endtime;
    date time;
    
    cin >> startime.hours >> startime.minutes;
    cin >> endtime.hours >> endtime. minutes;
    
    time.hours = endtime.hours - startime.hours;
    while(time.hours < 0){
        time.hours += 24;
    }
    time.minutes = endtime.minutes - startime.minutes;
    while(time.minutes < 0){
        time.hours--;
        time.minutes += 60;
    }
    
    cout << time.hours << ":" << time.minutes;
    
    return 0;
}