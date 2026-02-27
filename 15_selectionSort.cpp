#include <iostream>
#include <vector>
using namespace std;

//implementing selection sort
void selectionSort(vector<int> &nums, int n){
    for(int i =0; i< n-1; i++){
        int minIndex =i;

        for(int j=i+1;j<n;j++){
            if(nums[j]<nums[minIndex]) 
                minIndex = j;
        }
        swap(nums[i],nums[minIndex]);
    }
}
int main(){
    int n;
    cin>>n;

    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    selectionSort(nums,n);

    cout<<"printing the result :"<<endl;
     for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}