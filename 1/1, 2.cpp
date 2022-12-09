#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a = 10;
    float b = 0.5;
    
    float y = 0.314 * exp(a) - 0.512 * exp(b) / sin(b / 3 * M_PI) * log(a);
    cout << "Приклад 3: " << y << endl; 
    
    a = 1;
    b = 12.21;
    
    y = (0.81 * pow(a , 1./3) - 1 / 2.125 * pow(b , 1./3)) * exp(a);
    cout << "Приклад 8: " << y << endl;

    return 0;
}
