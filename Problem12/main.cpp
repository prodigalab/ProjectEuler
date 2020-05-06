#include <vector>
#include <iostream>
#include "../math/factors.cpp"

#include <math.h>

int main(){
    int result = 2*2*2*2*5*7*11*17;
    cout << result << endl;
    cout << result/2 * (result - 1) << endl;
    cout << numFactors(result/2) << endl;
    cout << numFactors(result-1) << endl;
    cout << numFactors(result+1) << endl;

}