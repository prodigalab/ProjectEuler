//defines a set of functions that acts as a resource for the rest of the Project euler problems
#include <vector>
#include <iostream>

using namespace std;

static vector<long> primes;





//Gets pointer to array of first n primes
//does not work for large n
vector<long> primesToN(long n){
    static int i = 0; 
    primes.push_back(2);
    for(long i = 3; i < n; i+=2){
        bool isPrime = true;
        for(auto it = primes.begin(); (*it)*(*it)<=i; it++){
            if(i%(*it) == 0){
                isPrime = false;
            }
        }
        if(isPrime){
            primes.push_back(i);
        }
    }
    return primes;
}
/*
int main(){
    vector<long> primes = primesToN(1000);
    for(auto it = primes.begin(); it!=primes.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}
*/