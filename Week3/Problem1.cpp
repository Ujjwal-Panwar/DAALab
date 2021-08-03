#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }

        int i,key,j;
        int shifts = 0, comparisons=0;
        for (i = 1; i < n; i++)
        {
            key = arr[i];
            j = i - 1;
            while (j >= 0 && arr[j] > key)
            {
                comparisons+=1;
                arr[j + 1] = arr[j];
                shifts++;
                j = j - 1;
            }
            arr[j + 1] = key;
            shifts++;
        }

        for(int i=0;i<n;i++){
            cout << arr[i] << " ";
        }
        cout << "\ncomparisons = " << comparisons << "\nshifts = "<<shifts <<"\n";
    }

}
