#include <iostream>
#include <vector>
using namespace std;

//finding the 1st and last occurance of the element in sorted array using binary search

/*int firstOccurance(vector<int> vec, int n, int k){
        int ans=-1;
        int start =0;
        int end = n-1;
        int mid = start + (end-start)/2;

        while(start<=end){
            if(vec[mid]==k){
                ans = mid;
                end = mid-1;
            }
            else if(vec[mid]<k){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
             mid = start + (end-start)/2;
        }
        return ans;
    }
int secondOccurance(vector<int> vec, int n, int k){
        int ans=-1;
        int start =0;
        int end = n-1;
        int mid = start + (end-start)/2;

        while(start<=end){
            if(vec[mid]==k){
                ans = mid;
                start = mid+1;
            }
            else if(vec[mid]<k){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
             mid = start + (end-start)/2;
        }
        return ans;
}

//using helper functions to create this, can also do it in the same fucntion as well
pair<int,int> firstandlastposition(vector<int> vec, int n, int k){
    return {firstOccurance(vec,n,k),secondOccurance(vec,n,k)};

}
int main(){
    int T;
    cin>>T;

    while(T--){
        int n, k;
        cin>>n>>k;

        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        pair<int,int> ans = firstandlastposition(vec, n, k);
        cout<<ans.first<<" "<<ans.second<<endl;
    }
}*/

//the same question but instead only using one fucntion
pair<int,int> firstandlastposition(vector<int> vec, int n, int k){
    pair<int,int> ans={-1,-1};

    int start =0;
    int end = n-1;
    int mid = start + (end-start)/2;

    while(start<=end){
            if(vec[mid]==k){
                ans.first = mid;
                end = mid-1;
            }
            else if(vec[mid]<k){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
             mid = start + (end-start)/2;
    }

    start =0;
    end = n-1;
    mid = start + (end-start)/2;

    while(start<=end){
            if(vec[mid]==k){
                ans.second = mid;
                start = mid+1;
            }
            else if(vec[mid]<k){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
            mid = start + (end-start)/2;
    }
    return ans;
    
}

int main(){
    int T;
    cin>>T;

    while(T--){
        int n, k;
        cin>>n>>k;

        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        pair<int,int> ans = firstandlastposition(vec, n, k);
        //to find total no  of occurance, just do (pair.second - pair.first + 1) 
        cout<<ans.first<<" "<<ans.second<<endl;
    }
}