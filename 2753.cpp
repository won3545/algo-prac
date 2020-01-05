#include<iostream>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int year;
    cin >> year;
    if(year % 400 == 0){
        cout << "1" << endl;
    }else if(year % 4 == 0){
        if(year % 100 == 0){
            cout << "0" << endl;
        }else{
            cout << "1" << endl;
        }
    }else{
        cout << "0" << endl;
    }
    return 0;
}