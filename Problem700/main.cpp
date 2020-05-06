#include <iostream>

using namespace std;

int main(){
    long long int mod = 4503599627370517;
    long long int start = 1504170715041707;
    long long int current = start;
    long long int sum = current;
    long long int diff;
    long long int gap = mod - current;
    long long int last = 2 * current;
    long long int leftover = mod - last;
    long long int candidate = start;
    long long int temp;
    for(current = start; current > 0 ;){
        gap = mod - candidate;
        leftover = gap % start;
        candidate = start - leftover;
        if(candidate < current){
            diff = current - candidate;
            for(temp = current; temp = temp - diff; temp > 0){
                sum+=temp;
            }
            if(last < temp%mod){
                current = temp;
            }
            cout << current << endl;

        }
    }
    cout << sum << endl;
}