#include <iostream>

using namespace std;

int main(){
    long max = 0;
    long maxindex = 0;
    long index = 0;

    for(long i = 1; i < 1000000; i++){
        index = 0;
        for(long k = i; k-1;){
            index++;
            if(k%2){
                k = 3 * k + 1;
            }
            else{
                k/=2;
            }
            
        }
        if(index > max){
            max = index;
            maxindex = i;
        }
    }
    cout << maxindex << endl;;
}