#include <iostream>
using namespace std;

//performing linear search
/*bool search(int arr[],int size,int value){
    for(int i=0;i<size;i++){
        if(arr[i]==value){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n;
    cin>>n;

    int nums[100];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    int key;
    cin>>key;

    if(search(nums,n,key)){
        cout<<"num is present"<<endl;
    }
    else{
        cout<<"num is not present"<<endl;
    }
}*/

//reversing using two pointers
/*void reversedArray(int nums[],int size){
    int l=0;
    int r=size-1;
    while(l<r){
        int temp=nums[l];
        nums[l]=nums[r];
        nums[r]=temp;
        l++;
        r--;
    }
    //return 0;
    //use void instead of int 
}
int main(){
    int n;
    cin>>n;

    int nums[100];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    reversedArray(nums,n);

     for(int i=0;i<n;i++){
        cout<<nums[i];
    }
}*/

//using single pointer to reverse array , arr[i]=arr[n-1-i]
void reversedArray(int nums[],int size){
    for(int i=0;i<size/2;i++){
        int temp=nums[i];
        nums[i]=nums[size-1-i];
        nums[size-1-i]=temp;
    }
    //return 0;
    //use void instead of int 
    //after size/2, it starts to reswap and will give the original array
}
int main(){
    int n;
    cin>>n;

    int nums[100];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    reversedArray(nums,n);

     for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}