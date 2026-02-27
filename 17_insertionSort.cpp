#include <iostream>
#include <vector>
using namespace std;

//implementing insertion sort
/*void insertionSort(vector<int> &nums, int n){
    for(int i=1;i<n;i++){
        int temp = nums[i];

        int j = i-1;
        while(j>=0){
            if(nums[j]>temp){
                nums[j+1]=nums[j];
            }
            else{
                break;
            }
            j--;
        }
        nums[j+1]=temp;
    }
}*/

//another version, cleaner using while loop only for the sorting 
void insertionSort(vector<int> &nums, int n){
    for(int i=1;i<n;i++){
        int temp = nums[i];

        int j = i-1;
        while(j>=0 && nums[j]>temp){
            nums[j+1]=nums[j];
            j--;
        }
        nums[j+1] = temp;
    }
}

void printNums(vector<int> &nums,int n){
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;

    vector<int> nums(n);

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    insertionSort(nums,n);
    printNums(nums,n);

}