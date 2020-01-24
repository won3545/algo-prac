#include<iostream>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int score;
    cin >> score;
    if(score >= 90){
        cout << "A" << endl;
    }else if(score >= 80){
        cout << "B" << endl;
    }else if(score >= 70){
        cout << "C" << endl;
    }else if(score >= 60){
        cout << "D" << endl;
    }else{
        cout << "F" << endl;
    }
    return 0;
}