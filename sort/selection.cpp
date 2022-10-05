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
    for(int i = 0; i <= n; i++){
        for(int j = i+1; j <= n; j++){
            if(arr[j] < arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "\n--After sort--" << endl;
    display(arr,n);
    return 0;
}