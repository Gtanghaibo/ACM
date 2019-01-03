


void shell_sort(int arr[], int n){
    for(int gap = n / 2; gap > 0; gap /= 2){
        for(int i =0; i < gap; i++){
            for(int j = gap +i; j < n;j += gap){
                if(arr[j] < arr[j-gap]){
                    int temp = arr[j];
                    int k = j-gap;
                    while(k > 0 && arr[k] > temp){
                        arr[k+gap] =  arr[k];
                        k -= gap;
                    }
                    arr[k+gap] = temp;
                }
            }
        }
    }
}


int find_square(int m,int n){
    int result =0;
    int side = m > n ? n : m;
    for( int i =1; i<= side; i++){
        for(int r = 0;r < n -i; r++){
            for(int c=0; c < m-i;c++){
                result++;
            }
        }
    }
    return result;

}


// 汉明距离 是指两个数求异或的结果中的 1 的个数
int hanming_distance(int x, int y){
    x = x ^ y;
    int result=0;
    while(x){
        //if(x & 0x01){
        //    result ++;
        //}
        //x >> 1;
        x &= x-1;
        result++;
    }

    return result;
}

int find_oneNumber(int arr[],int first,int last){
    if(first < last){
        int temp1 = find_oneNumber(arr,first,(first + last)/2);
        int temp2 = find_oneNumber(arr,(first + last) /2 + 1, last);
        return temp1 + temp2;
    }else{
        return arr[first] & 0x01;
    }
}

