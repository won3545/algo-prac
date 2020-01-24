#include<iostream>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int input;
    cin >> input;
    for(int i = 1; i <=9; ++i){
        cout << input << " * " << i << " = " << input * i << endl;
    }
    return 0;
}