#include <iostream>

using namespace std;


#define SUM 1000
int main(){
    for(int i = 0; i <  SUM; i++){
        for(int j = 0; j < SUM - i; j++){
            if(j*j+((SUM-j-i)*(SUM-j-i)) == i*i){
                cout << i*j*(SUM-j-i) << endl;;
                cout << i  << endl;
                cout << j << endl;
                cout << (SUM-i-j) << endl;
            }
        }
    }
}