#include <fstream>
#include <iostream>

using namespace std;

int main(){
    ifstream in;
    in.open("number.txt");
    char numbers[100][51];
    long long int result;
    for(int i = 0; i < 100; i++){
        in >> numbers[i];
    }
    long long int[100] list;
    for(int i = 0; i < 100 ;i++){

    }
    for(int i = 0; i < 54; i++){
        cout<< result[i] << endl;
    }
}