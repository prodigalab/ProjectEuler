#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){
    ifstream nums;
    nums.open("number.txt");
    string input;
    vector<int> numv (0,-1);
    if(!nums){
        cout << "Error" << endl;
        return 1;
    }
    while(!nums.eof()){
        getline(nums, input);
        for(int i = 0; input[i]; i++){
            cout << input[i];
            numv.push_back(input[i] - '0');
        }
        cout << endl << input << endl;
    }
    long products[13];
    for(int i = 0; i < 13; i++){
        products[i] = 0;
        cout << products[i];
    }


    ///EVERYTHING ABOVE VERIFIED


//set default for min
    long max = -1;

//loop through 
    for(auto it = numv.begin(); it != numv.end(); ++it){
        for(int i = 0; i < 12; i++){
            products[i] = 0;
            products[i] = products[i+1] * (*it);
            cout << products[i] << " ";
        }
        cout << endl;
        products[12] = *it;
        if(products[0] > max){
            max = products[0];
        }
    }
    cout << max << endl;
}