#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;

int main() {
    
    int iDistance, iVelocity1, iVelocity2, iFly, iCases;
    double dDistTraveled, dTime;
    
    do {
        cin >> iCases;
    } while (iCases > 100);
    
    for (int count = 0; count < iCases; count++) {
        cin >> iDistance >> iVelocity1 >> iVelocity2 >> iFly;
    
        dTime = (double)iDistance / (iVelocity1 + iVelocity2);
        dDistTraveled += dTime * iFly;
    }
    
    
    printf ("%.2f\n", ceil(dDistTraveled));
    
}
