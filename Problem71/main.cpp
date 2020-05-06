#include <iostream>

using namespace std;

long long gcf(long long a, long long b){
    long long temp;
    for(;(a*b)!=0;){
        a = a % b;
        temp = a;
        a = b;
        b = temp;
    }
    return a + b;
}

class fraction{
    public:
    long long numerator;
    long long denominator;
};

bool isGreater(fraction Fraction1, fraction Fraction2){
    if(Fraction2.numerator == 0){
        return true;
    }
    if((Fraction1.numerator*Fraction2.denominator) > (Fraction1.denominator*Fraction2.numerator)){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    fraction temp;
    fraction max;
    fraction goal;

    goal.numerator = 3;
    goal.denominator = 7;

    max.numerator = 0;
    max.denominator = 1;

    int n = 0;
    int d = 0;
    while(d <= 1000000){
        temp.numerator = n;
        temp.denominator = d;
        if(isGreater(goal, temp)){
            if(isGreater(temp, max)){
                max.numerator = n;
                max.denominator = d;
                cout << n << " " << d << endl;
            }
            n++;
        }else{
            d++;
        }
    }

    long long gcd = gcf(temp.numerator, temp.denominator);

    cout << max.numerator/gcd << endl << endl;

    return 0;
}