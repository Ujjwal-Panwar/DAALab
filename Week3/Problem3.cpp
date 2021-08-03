#include<bits/stdc++.h>

using namespace std;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int part(int arr[], int low, int high){
    int pivot = arr[high];
    int i = (low - 1);

    for(int j=low;j<=high-1;j++){
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void sorter(int arr[], int low, int high ){
    if(low<high){
        int part_index = part(arr,low,high);
        sorter(arr, low, part_index-1);
        sorter(arr, part_index+1, high);
    }
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
        int flag = 0;
        sorter(arr,0,n-1);
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]){
                    flag = 1;
                    cout << "YES\n";
                    break;
            }
        }
        if(!flag){
            cout << "NO\n";
        }
    }
}
