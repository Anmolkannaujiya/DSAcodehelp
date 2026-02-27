#include <iostream>
#include <vector>
using namespace std;

//implementing bubble sort
void bubbleSort(vector<int> &arr, int n){
    for(int i=0;i<n-1;i++){

        bool flag = false;

        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = true;
            }
        }
        if(flag == false) break;
    }
}
int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i =0; i< n; i++){
        cin>>arr[i];
    }
    
    bubbleSort(arr,n);
    //printing sorted 
    for(int i =0; i< n; i++){
        cout<<arr[i]<<" ";
    }
}