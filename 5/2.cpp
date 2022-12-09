#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long key = 1;
    
    for (int a = 1; a <= 40; a++) {
        if((a % 4) == 0){
            key *= a;
            cout << key << "\n";
        }
    }

    return 0;
}