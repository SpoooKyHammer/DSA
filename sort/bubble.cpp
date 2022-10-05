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
    int counter = 1;
    while(counter < n){
        for(int i=0; i < n-counter; i++){
            if(arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }

    cout << "\n--After sort--" << endl;
    display(arr,n);
    return 0; 
}