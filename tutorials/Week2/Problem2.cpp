#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin >> arr[i];

        bool flag = false;
        for(int i=2;i<n;i++){
            for(int j=0;j<i;j++){
                for(int k=j+1;k<i;k++){
                    if(arr[j] + arr[k] == arr[i]){
                        flag = true;
                        cout<<j+1<<", "<<k+1<<", "<<i+1<<"\n";
                    }
                }
            }
        }
        if(!flag){
            cout << "No sequence found.\n";
        }
    }
}
/*
3
5
1 5 84 209 341
10
24 28 48 71 86 89 92 120 194 201
15
64 69 82 95 99 107 113 141 171 350 369 400 511 590 666
*/
