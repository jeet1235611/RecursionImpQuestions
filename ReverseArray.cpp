#include<iostream>
using namespace std;
void reverseArray(int arr[], int start, int end){
        //int start = 0, end = size - 1;

        if(start>=end){
                return ;
        }
        int temp;
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
//      cout<<arr[start]<<endl;

        reverseArray(arr, start+1, end-1);
        return ;
}
int printArray(int arr[], int size){
        for(int i = 0; i < size; i++){
                cout<<arr[i]<<endl;
//              return 0;
        }
        return 0;
}
int main(){
        int arr[] = {1, 9, 0, 2, 5, 1, 3};
        reverseArray(arr, 0, 6);
        printArray(arr, 7);
        return 0;
}
