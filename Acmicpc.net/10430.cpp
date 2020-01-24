#include<iostream>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b, c;
    cin >> a >> b >> c;
    cout << (a + b) % c << endl;
    cout << (a % c + b % c) % c << endl;
    cout << (a * b) % c << endl;
    cout << (a % c * b % c) % c << endl;
    return 0;
}