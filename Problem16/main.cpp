#include <iostream>

using namespace std;

int main(){
    char rahc[600];
    cin >> rahc;
    int sum;
    for(int i = 0; rahc[i];i++){
        sum += rahc[i] - '0';
    }
    cout << sum << endl;
}