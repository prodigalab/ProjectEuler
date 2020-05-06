#include <fstream>
#include <iostream>

using namespace std;

int main(){
    ifstream in;
    in.open("number.txt", ios::in);
    int temp;
    int nums[20][20];
    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 20; j++){
            char temp[100];
            in >> temp;
            nums[i][j] = atoi(temp);
        }
    }
    int max = 0;
    int prod = 0;
    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 17; j++){
            prod = nums[i][j] * nums[i][j+1] * nums[i][j+2] * nums[i][j+3];
            if(prod > max){
                max = prod;
            }
        }
    }
    for(int i = 0; i < 17; i++){
        for(int j = 0; j < 20; j++){
            prod = nums[i][j] * nums[i+1][j] * nums[i+2][j] * nums[i+3][j];
            if(prod > max){
                max = prod;
            }
        }
    }for(int i = 0; i < 17; i++){
        for(int j = 0; j < 17; j++){
            prod = nums[i][j] * nums[i+1][j+1] * nums[i+2][j+2] * nums[i+3][j+3];
            if(prod > max){
                max = prod;
            }
        }
    }for(int i = 3; i < 20; i++){
        for(int j = 0; j < 17; j++){
            prod = nums[i][j] * nums[i-1][j+1] * nums[i-2][j+2] * nums[i-3][j+3];
            if(prod > max){
                max = prod;
            }
        }
    }
    cout << max;
}