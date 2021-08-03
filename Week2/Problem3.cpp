#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n, key, count=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        cin>>key;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(arr[i]-arr[j] == key)
                    count++;
            }
        }
        cout<<count<<"\n";
    }
}
/*
2
5
1 51 84 21 31
20
10
24 71 16 92 12 28 48 14 20 22
4
*/
