#include<iostream>
#include<vector>
using namespace std;

bool ispossible(vector<int>arr, int n, int m,int mid){
    int studentCount = 1;
    int pageSum = 0;

    for(int i = 0; i < n; i++){
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount > m || arr[i] > mid){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int bookAllocation(vector<int>arr, int n, int m){
    int s = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while(s <= e){
        if(ispossible(arr,n,m,mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans; 
}

int main(){
    int n,m,value;
    cout<<"Enter the no. of books: ";
    cin>>n;
    cout<<"Enter the no. of student: ";
    cin>>m;
    vector<int>arr;
    cout<<"Enter the no. of Pages in books: "<<endl;
    for(int i = 0; i < n; i++){
        cin>>value;
        arr.push_back(value);
    }

    cout<<"Minimum value: "<<bookAllocation(arr,n,m);

}