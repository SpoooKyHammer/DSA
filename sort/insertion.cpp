#include<iostream>
using namespace std;

void display(int list[], int len){
    cout << "\nArray: ";
    for(int i = 0; i < len; i++){
        cout << "\t" << list[i];
    }
}


int main(){
    int n;
    cout << "Enter length of array: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cout << "Enter value of element " << i << ": ";
        cin >> arr[i];
    }

    cout << "--Before sort--" << endl;
    display(arr,n);

    // sorting
    for(int i = 1; i < n; i++){
        int current = arr[i];
        int j = i - 1;
        while(arr[j] > current && j >= 0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }

    cout << "\n--After sort--" << endl;
    display(arr,n);
    return 0; 
}