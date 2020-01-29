/*
#14503 
1 - wall , 0 - blank
*/

#include<iostream>
using namespace std;
int N, M;
int r, c, d;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int map[51][51] = {0};
bool checkMap[51][51] = { false };
int result = 0;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> M;
    cin >> r >> c >> d;
    for(int n = 0; n < N; ++n){
        for(int m = 0; m < M; ++m){
            cin >> map[n][m];
        }
    }

    cout << result << endl;
    return 0;
}

void process() {
    while(true){
        if(checkMap[r][c] == false){
            checkMap[r][c] = true;
            
        }
    }
}