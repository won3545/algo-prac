#include<iostream>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    int a, b;
    cin >> T;
    for(int t = 0; t < T; ++t){
        cin >> a >> b;
        cout << a + b << endl;
    }
    return 0;
}