#include <iostream>
#include "../math/primes.cpp"

int main(){
    vector<long> primes = primesToN(2000000);
    auto it = primes.begin();
    long sum = 0;
    for(;it!=primes.end();it++){
        sum += *it;
    }
    cout << sum << endl;
}