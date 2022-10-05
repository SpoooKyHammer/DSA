
// sequential aka linear search
#include<iostream>
using namespace std;

int linear_search(int list[], int len, int val){
    for(int i = 0; i < len; i++){
        if(list[i] == val){
            return i;
        }
    }
    return -1;
}


int main(){

    int n = 5;
    int arr[n] = {5, 10, 15, 25, 35};
    int index = linear_search(arr,n, 35);
    cout << "35 is present at index " << index <<  endl;
    index = linear_search(arr,n,5);
    cout << "5 is present at index " << index << endl;
    return 0;
}