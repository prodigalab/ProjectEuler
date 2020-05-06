#include "primes.cpp"

class Factor{
    public:
        int prime;
        int power;
};

vector<Factor> Factors(int n){
    vector<long> primes = primesToN(n);
    vector<Factor> factors;
    int power = 0;
    for(auto it = primes.begin(); (*it)*(*it) < n;it++){
        power = 0;
        while(n%(*it)==0){
            n/=(*it);
            power++;
        }
        if(power){
            Factor temp;
            temp.prime = *it;
            temp.power = power;
            factors.push_back(temp);
        }
    }
    if(n != 1){
        Factor temp;
        temp.prime = n;
        temp.power = 1;
        factors.push_back(temp);
    }
    return factors;
}

vector<Factor> Power(vector<Factor> in, int power){
    for(auto it = in.begin(); it != in.end(); it++){
        it.power *= power;
    }
    return in;
}

vector<Factor> Power(int in, int power){
    return Power(Factors(in), power);
}

vector<Factor> Multiply(vector<Factor> in, vector<Factor> in2){
    vector<Factor> temp;
    auto it = in.begin();
    auto it2 = in2.begin();
    for(;it != in.end() && it2 != in2.end();it, it2 += 1){
        
    }
}

long numFactors(int n){
    vector<Factor> factors = Factors(n);
    long numFactors = 1;
    for(auto it = factors.begin(); it!=factors.end(); it++){
        numFactors *= (it->power+1);
    }
    return numFactors;
}