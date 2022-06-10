#include<iostream>
using namespace std;

void PrintArray(int arr[], int n){
    //we write this for array traverasal
    for(int i=0;i<n;i++){
        cout<<arr[i] << " ";
        
    }

}

void swapAlternate(int arr[], int size){

    for(int i=0;i<size;i+=2){  // this is the logic 
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
        
    }
}

int main(){

    int even[8] ={4,3,6,1,8,2,9,10};
    int odd[5] ={8,5,4,1,9};

    swapAlternate(even,8);
    PrintArray(even,8);

    cout<<endl;
    swapAlternate(odd,5);
    PrintArray(odd,5);




}