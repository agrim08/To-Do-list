#include<iostream>
using namespace std;

int swapNo(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;

    return a,b;
}

int arrayReverse(int arr[], int n){

    int start = 0;
    int end = n-1;
    
    while(start>=end){
        swapNo(arr[start],arr[end]);
        start++;
        end--;
    }
    return arr[n] , n;
}

void printArr(int arr[], int n){

    for(int i = 0; i < n; i++){

        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    
    int n;
    cin >> n;
    
    int arr[1000];
    
    for(int i = 0; i < n; i++){
        cin >> arr[n];
    }
    

    arrayReverse(arr,n);
    printArr(arr,n);
    

    return 0;
}
