#include<bits/stdc++.h>

using namespace std;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

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
        int i, j, min_idx,swaps=0, comparisons = 0;

        for (i = 0; i < n-1; i++){
            min_idx = i;
            for (j = i+1; j < n; j++){
                comparisons++;
                if (arr[j] < arr[min_idx]){
                    min_idx = j;
                }
            }
            swap(&arr[min_idx], &arr[i]);
            swaps++;
        }

        for(i = 0 ; i < n ; i++){
            cout << arr[i] << " ";
        }
        cout << "\ncomparison = " << comparisons << "\nswaps = " << swaps << "\n";
    }
}
