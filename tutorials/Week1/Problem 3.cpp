#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int N, key, comparisons = 1, end;
        cin>>N;
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>key;
        int left, index, right;
        int exp=1;
        while(arr[int(pow(2, exp))] < key){
            comparisons++;
            exp++;
            end = pow(2, exp);
            if(pow(2, exp) > N){
                end = N;
                break;
            }
        }
        /*
        left = pow(2,exp-1);
        right = pow(2,exp);
        index = (left+right)/2;
        while(arr[index] != key && left<right){
            if(arr[index] < key)
                left = index+1;
            else if(arr[index] > key)
                right = index-1;
            index = (left+right)/2;
            comparisons++;
        }
        if(arr[index] == key)
            cout<<"Present "<<comparisons<<endl;
        else
            cout<<"Not present "<<comparisons<<endl;
        */
        int i;
        for(i=int(pow(2, exp-1)); i<end; i++){
            comparisons++;
            if(arr[i] == key)
                break;
        }
        if(arr[i]==key)
            cout<<"Present "<<comparisons<<endl;
        else
            cout<<"Not present "<<comparisons<<endl;
    }
}
