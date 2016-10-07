#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

int main() {
    
    int iCases;
    double dDistance, dVelocity1, dVelocity2, dFly;
    double dDistTraveled, dTime;
    
    
    do {
        cin >> iCases;
    } while (iCases > 100);


    
    for (int count = 0; count < iCases; count++) {
        cin >> dDistance >> dVelocity1 >> dVelocity2 >> dFly;
    
        dTime = dDistance / (dVelocity1 + dVelocity2);
        dDistTraveled = dTime * dFly;
        
        printf ("%.2f\n", dDistTraveled);
    }
    
    
    return 0;
}
