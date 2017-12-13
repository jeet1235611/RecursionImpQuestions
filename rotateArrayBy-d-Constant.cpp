#include<iostream>
using namespace std;
int main(){
        int n, d, temp, k = 0;
        int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
        cout<<"Enter the value of d\n";
        cin>>d;

        while(k<d){
                temp = arr[0];
                for(int i = 0; i < 11; i++){
                        //temp = arr[0];
                        arr[i] = arr[i+1];
                }
                arr[10] = temp;
                k++;
        }
        for(int j = 0; j < 11; j++){
                cout<<arr[j]<<endl;
        }
        return 0;
}
