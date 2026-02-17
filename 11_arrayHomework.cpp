//finding the triplets, whoose sum is equal to k
//1st :- three loops brute force
//2nd :- two pointers O(n^2)
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

//brute force approach
//note:- if it was mentioned to find unique triplets or similar ques, then sorting is must
/*vector<vector<int>> checkTriplets(vector<int> nums, int target){
    int n=nums.size();

    vector<vector<int>> ans;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(nums[i]+nums[j]+nums[k]==target){
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    ans.push_back(temp);
                }
            }
        }
    }
    return ans;
}
void printFun(vector<vector<int>> ans){
    //check when no solution
    if(ans.empty()){
        cout<<"No triplets found";
    }

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int target;
    cin>>target;
    printFun(checkTriplets(v,target));

}*/

//note: above code will give multiple duplicates if present, we use set to eliminate it
/*vector<vector<int>> checkTriplets(vector<int> nums, int target){

    int n = nums.size();

    sort(nums.begin(), nums.end());   // VERY IMPORTANT

    set<vector<int>> unique;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){

                if(nums[i] + nums[j] + nums[k] == target){

                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    unique.insert(temp); // duplicates automatically removed
                }
            }
        }
    }

    // convert set -> vector
    vector<vector<int>> ans(unique.begin(), unique.end());
    return ans;
}
void printFun(vector<vector<int>> ans){
    //check when no solution
    if(ans.empty()){
        cout<<"No triplets found";
    }

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int target;
    cin>>target;
    printFun(checkTriplets(v,target));
}*/

//note: in the above code we can use loop to convert the set into vector
/*
for(vector<int> v:unique){
    ans.push_back(v);
}
*/


//sort 0 1 2, using the dutch national flag algorithm 
void sortingDigits(int arr[], int n){

    int l = 0;
    int m = 0;
    int r = n - 1;

    while(m <= r){

        if(arr[m] == 0){ 
            swap(arr[l], arr[m]);
            l++;
            m++;
        }

        else if(arr[m] == 1){
            m++;
        }

        else{ // arr[m] == 2
            swap(arr[m], arr[r]);
            r--;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int  arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sortingDigits(arr,n);
    for(int i=0; i<n;i++){
        cout<<arr[i];
    }
   
}

