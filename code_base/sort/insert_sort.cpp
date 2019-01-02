
#include <cstring>
#include <stdio.h>
#include <algorithm>

void insort_sort1(int arr[], int n){
    int temp,j;
    for(int i =1; i < n; i++){
        for(j = i-1; j >0;j--){
            if(arr[j] < arr[i])
                break;
        }
        temp = arr[i];
        if(j != i-1){
            for(int q = i-1;q > j;q--){
                arr[q+1] = arr[q];
            }
            arr[j] =temp;
        }
    }
}


void insort_sort2(int arr[],int n){
    int temp,j;
    for(int i=1; i< n; i++){
        if(arr[i] < arr[i-1]){
            temp = arr[i];
            for(j = i-1;j >0&&arr[j] > temp; j--){
                arr[j+1] = arr[j];
            }
            arr[j+1] = temp;
        }
    }
}

void insort_sort3(int arr[], int n){
    int temp;
    for(int i =1; i<n; i++){
        for(int j = i-1; j >=0 && arr[j]> arr[j+1] ; j--){
            temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[i] = temp;
        }
    }

}
