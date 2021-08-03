#include<iostream>

using namespace std;

int main(){
    int query;
    cin >> query;
    while(query--){
            int n, key, searches=0, flag = 0;
            cin >> n;
            int arr[n];
            for(int i=0; i<n;i++){
                cin >> arr[i];
            }
            cin >> key;
            for(int i=0; i<n; i++){
                searches += 1;
                if(arr[i] == key){
                    printf("Present %d \n",searches);
                    flag = 1;
                    break;
                }
            }
            if(flag == 0){
                printf("Not Present %d \n", searches);
            }
    }
}
