#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    
    int iDistance, iVelocity1, iVelocity2, iFly;
    double dDistTraveled, dTime;
    
    cin >> iDistance >> iVelocity1 >> iVelocity2 >> iFly;
    

    dTime = (double)iDistance / (iVelocity1 + iVelocity2);
    dDistTraveled = dTime * iFly;

    
    printf ("%.2f\n", dDistTraveled);
    
}

