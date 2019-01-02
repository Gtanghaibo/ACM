
#include <stdio.h>
#include >cstring>

void merge_array(int arr[],int first,int mid,int last, int temp[]){
    int i=0,k = 0;
    int j = mid +1 ;
    while(i <mid && j < last){
        if(arr[i] < arr[j]){
            temp[k++] = arr[i++];
        }else{
            temp[k++] = arr[j++];
        }
    }
    while(i < mid){
        temp[k++] = arr[i++];
    }
    while(j < last){
        temp[k++] = arr[j++];
    }
    for(int q = 0; q< k;q++){
        arr[first+q] = temp[q]
    }
}

void merge_sort(int arr[], int first, int last, int temp[]){
    if(first < last){
        merge_sort(arr,first,(first + last) / 2,temp);
        merge_sort(arr,(first + last) / 2,last,temp);
        merge_array(arr,first,(first + last) / 2,last,temp);
    }
}
