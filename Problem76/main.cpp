#include <iostream>

using namespace std;



//Calculates summation count for a number
long long f(long long total, long long greatestElem){
    long long sum = 0;
    if(2*greatestElem > total){
        return 1;
    }
    if(2*greatestElem == total){
        return 2;
    }

    for(long long i = greatestElem; 2*i <= total; i++){
        sum += f(total - i, i);
    }
    sum += 1;
    return sum;
}



int main(){

    cout << f(100, 1) - 1<< endl;

    return 0;
}