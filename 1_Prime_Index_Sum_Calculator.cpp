#include<bits/stdc++.h>

using namespace std;

int main(){
    
    // input
    int X, Y;
    cin >> X >> Y;

    int limit = 110000;
    vector<bool> isPrime(limit + 1, true);

    isPrime[0] = isPrime[1] = false;

    // sieve
    for(int i = 2; i*i <= limit; i++){
        if(isPrime[i]){
            for(int j = i*i; j <= limit; j+=i){
                isPrime[j] =false;
            }
        }
    }
   
    // primes vector
    vector<int> primes;
    for(int i = 2; i < limit; i++){
        if(isPrime[i]){
            primes.push_back(i);
        }
    }

    //answer
    long long A = primes[X-1];
    long long B = primes[Y-1];

    cout << A + B - 1;

    return 0;
}