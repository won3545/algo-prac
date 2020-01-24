#include<iostream>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int h, m;
    cin >> h >> m;
    if(m >= 45){
        cout << h << " " << (m-45) << endl;
    }else{
        if(h != 0){
            cout << (h-1) << " " << (m+15) << endl; 
        }else{
            cout << "23 " << (m+15) << endl;
        }
    }
    return 0;
}