#include<bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;

int findSum(int n){
    while(n >= 10){
        int sum = 0;
        while(n > 0){
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    return n;
}

int main(){
    vector<bool> prime(N+1, true);

    prime[0] = false;
    prime[1] = false;

    // sieve
    for(int i = 2; i*i <= N; i++){
        if(prime[i]){
            for(int j = i*i; j <= N; j += i){
                prime[j] = false;
            }
        }
    }

    // store
    vector<int> ans;
    for(int i = 2; i <= N; i++){
        if(prime[i]){
            ans.push_back(i);    
        }
    }

    int m, n;
    cin >> m >> n;

    int mthPrimeNumber = ans[m-1];
    int m1 = findSum(mthPrimeNumber);

    cout << m * m1 << endl;

    return 0;
}