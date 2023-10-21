#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{   
    for(int i = 1; i<n; i++) {
        //for round 1 to n-1
        bool swapped = false;
        
        for(int j =0; j<n-i; j++) {
            
            //process element till n-i th index
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
            
        }
        
        if(swapped == false) {
            //already sorted
            break;
        }
           
    }
}
    //function to print an array
void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<" "<< arr[i];
    }
}

    //testing functions
int main(){
    int arr[] = {64, 34, 25, 12, 22, 11, 90 };
    int N= sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr,N);
    cout<<"Sorted array"<<endl;
    printArray(arr,N);
    return 0;
}