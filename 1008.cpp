#include<iostream>
using namespace std;
int main(void){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b;
    cin >> a >> b;

    cout.precision(10);
    cout <<(double) a/b << endl;
    return 0;
}