#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

string classify(int temp){
    if(temp < 10) return "it's very cool";
    else if(temp <= 20) return "it's cold";
    else return "it's warm";
}

int main(){
    int t1, t2;
    cin >> t1 >> t2;

    cout << classify(t1) << endl;
    cout << classify(t2) << endl;

    double avg = (t1 + t2) / 2.0;

    cout << fixed << setprecision(1) << avg << endl;

    cout << t2 << " " << t1;

    return 0;
}