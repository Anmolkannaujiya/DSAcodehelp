#include <iostream>
#include <vector>
using namespace std;

//reversing array :-
//just use two pointer, start and end and keep swapping till while(start<=end)


//merging two sorted arrays
void merge(vector<int> &arr1, int n, vector<int> &arr2, int m, vector<int> &ans){
    int i=0;
    int j=0;

    //merging
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            ans.push_back(arr1[i]);
            i++;
        }
        else{
            ans.push_back(arr2[j]);
            j++;
        }
    }
     //inserting rest of arr1
    while(i<n){
        ans.push_back(arr1[i]);
        i++;
    }
    //inserting remaining of arr2
    while(j<m){
        ans.push_back(arr2[j]);
        j++;
    }
  
   
}

void print(vector<int> ans, int size){
    cout<<"the merged array is : ";
    for(int i=0;i<size;i++){
        cout<<ans[i]<<" ";
    }
} 

int main(){
    int n,m;
    cin>>n>>m;

    vector<int> arr1(n);
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }

    vector<int> arr2(m);
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    
    //vector<int> ans(n+m);
    //initialise the ans vector with empty vector, ans(n) will put n times zero in it so psuh_back wont work properly

    vector<int> ans;

    merge(arr1,n,arr2,m,ans);

    print(ans,n+m);

}