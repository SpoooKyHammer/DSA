// can be only used for sorted arrays.
#include<iostream>
using namespace std;

int binary_search(int list[], int len, int val){
    int start = 0;
    int end = len;
    while(start <= end){
        int middle = (start + end)/2;
        
        if(list[middle] == val){
            return middle;
        }else if(list[middle] > val){
            end = middle - 1;
        }else{
            start = middle + 1;
        }
    }
    return -1;
}


int main(){

    int n = 5;
    int arr[n] = {5, 10, 15, 25, 35};
    int index = binary_search(arr,n, 35);
    cout << "35 is present at index " << index <<  endl;
    index = binary_search(arr,n,5);
    cout << "5 is present at index " << index << endl;
    return 0;
}