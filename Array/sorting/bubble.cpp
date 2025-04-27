#include<iostream>
using namespace std;

void bubbleSort(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        int iterationcount = 0;  // see the process of sorting
        bool swapped = false;  // use for optimizing bubble sort with track flag
        for(int j = 0; j < size - 1 - i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
            }
        }
        //check array iteration after iteration
        iterationcount++;
        cout<<"iteration "<<iterationcount<<" : ";
        for(int k = 0; k < size; k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;
    
    // check if no no. is swapped in any pass then break it don't go to next pass
        if(!swapped) 
        break;
    }

     cout<<"Final sorting Array"<<endl;
     for(int i = 0; i < 6; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[6] = {12,45,23,51,19,8};
    cout<<"Without sorting Array"<<endl;
    for(int i = 0; i < 6; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bubbleSort(arr,6);

}