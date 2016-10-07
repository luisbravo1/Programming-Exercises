#include <iostream>
using namespace std;

int main() {
    
    int iCases, iStops, iResult;
    
    do {
        cin >> iCases;
    } while (iCases < 1 || iCases > 30);
    
    for (int cont = 0; cont < iCases; cont++) {
        cin >> iStops;
        iResult = 0;
        
        for (int cont = 0; cont < iStops; cont++) {
            iResult = (iResult + 0.5) * 2;
        }
        
        cout << iResult << endl;
        
    }
}
