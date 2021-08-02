#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        int n,key;
        int key_count=0;
        cin >> n;
        int arr[n];

        for(int i=0;i<n;i++){
            cin >> arr[i];
        }

        cin >> key;

        int i=0;
        while(i<n){
            if(i==0){
                i=1;
            }
            else{
                i *=2;
            }
            if(arr[i] >= key){
                // cout << "arr[i] is "<< arr[i] << " at i= "<< i << "\n";
                break;
            }

        }
        i=i/2;
        while(arr[i]!=key){
            i++;
        }
        while(arr[i] == key){
            // cout << "Key count is " << key_count << "\n" ;
            key_count+=1;
            i+=1;
        }

        if(key_count == 0){
            printf("Key not present\n");
        }
        else{
            cout << key << " - " << key_count << "\n";
        }

    }
}

/*
2
10
235 235 278 278 763 764 790 853 981 981
981
15
1 2 2 3 3 5 5 5 25 75 75 75 97 97 97
75
*/

