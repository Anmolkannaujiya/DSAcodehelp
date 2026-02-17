#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int target){
    int start=0;
    int end = size-1;

    int mid = start + (end-start)/2;
    //just (start+end)/2 will overflow on INT_MAX value

    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }
        if(target>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;    
    }
    return -1;
}
int main(){
    int even[8] = {2,4,5,6,8,9,11,16};
    int odd[7] = {3,5,6,8,9,16,21};

    int evenIndex = binarySearch(even,8,11);
    cout<<" evenIndex of the target is : "<<evenIndex;

    int oddIndex = binarySearch(odd,7,8);
    cout<<" oddIndex of the target is : "<<oddIndex;
}