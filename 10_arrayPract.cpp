#include <iostream>
#include <algorithm>
using namespace std;

//swapping alternate indexes in the array
/*void swapAlternate(int arr[],int size){
    for(int i=0;i+1<size;i+=2){
        swap(arr[i],arr[i+1]);
    } 
}
int main(){
    int n;
    cin>>n;

    int arr[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    swapAlternate(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}*/

//there is an array of size 2m+1, meaning it is an odd array, now there is m no of elements who occur twice, leaving one unique element
//find the unique eleqment
//1st approach -> sort and compare alternate for unequal, if not found then  last element is the one since odd array
//2nd approach -> nested loop, i and j i till i+1<arr.size, j<arr.size, compare and find the non eqaul number using brute force
//3rd approachj -> using hashmap, find the frequency and return the one with one 
//4th and best approach -> use Xor, a^a=0, 0^b=b, we get b as the unique element

//implemnentation
/*int UniqueXor(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum = sum^arr[i];
    }
    //cout<<sum;
    return sum;
    //Xor is associative and commutitive, it works even if not done at the same time, unordered.

}
int main(){
     int n;
    cin>>n;

    int arr[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<UniqueXor(arr,n);


}*/

//grok sample code for revision
//brute force using nested loop to check duplicates in unordered map 
/*#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

bool hasDuplicateValues_brute(const unordered_map<string, int>& m) {
    for (auto it1 = m.begin(); it1 != m.end(); ++it1) {
        for (auto it2 = next(it1); it2 != m.end(); ++it2) {  // start from next
            if (it1->second == it2->second) {
                cout << "Duplicate value found: " << it1->second << endl;
                return true;
            }
        }
    }
    return false;
}*/

//brute force using vector conversion sorting and checking the neighbours
/*bool hasDuplicateValues_sort(vector<int> values) {
    sort(values.begin(), values.end());
    for (size_t i = 1; i < values.size(); ++i) {
        if (values[i] == values[i-1]) {
            return true;
        }
    }
    return false;
}

// Usage:
bool hasDuplicateValues(const unordered_map<string, int>& m) {
    vector<int> vals;
    vals.reserve(m.size());
    for (const auto& p : m) {
        vals.push_back(p.second);
    }
    return hasDuplicateValues_sort(move(vals));
}*/

//array has 1 to n-1 elements, and +1 which is duplicate, find the duplicates
//can use hashmap to count the number of times and the one repeat with count=2 is duplicate

//will use Xor, since it is more optimised
/*int duplicateVal(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans = ans^arr[i];
    }
    for(int i=1;i<=n-1;i++){
        ans = ans^i;
    }
    return ans;
    //the elements in the array are from 1 to n-1, like all the natural numbers, and one of them is duplicate
}
int main(){
    int n;
    cin>>n;

    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<duplicateVal(arr,n);

}*/

//two arrays are given we have to return the common elements in them
//eg- 1 2 2 3 4 and 2 2 6 , we have 2,2 as the common element
//implementation:
#include <vector>
#include <climits>
/*vector<int> checkCommon(int arr1[], int arr2[], int m, int n){
    vector<int> ans;
    for(int i=0;i<m;i++){
        int digit = arr1[i];

        //int temp = 0;
        //here we can declare temp=0, and then update it inside the if condition so that j wont restart from 0 everytime
        //which is explained as using two pointer

        for(int j=0;j<n;j++){
            if(digit<arr2[j]){
                //since both arr are ascending order, if i becomes less then break since all j will be  bigger
                //temp = arr[j+1];
                break;
            }
            if(digit==arr2[j]){
                ans.push_back(arr2[j]);
                arr2[j]=INT_MIN;
                break;
                //temp = arr[j+1];
                //and in loop int j=temp;
            } 
        }
    }
    return ans;
}
int main(){
    int m;
    cin>>m;
    int arr1[m];
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    int n;
    cin>>n;
    int arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    vector<int> ansVector = checkCommon(arr1,arr2,m,n);
    for(int i=0;i<ansVector.size();i++){
        cout<<ansVector[i]<<" ";
    }
}*/

//same above question with two pointer apperoach
/*vector<int> checkCommon(int arr1[], int arr2[], int m, int n){
    vector<int> ans;

    int i = 0;
    int j = 0;

    while(i < m && j < n){

        if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }

        else if(arr1[i] < arr2[j]){
            i++;   // move smaller one
        }

        else{
            j++;
        }
    }
    return ans;
}
int main(){
    int m;
    cin>>m;
    int arr1[m];
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    int n;
    cin>>n;
    int arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    vector<int> ansVector = checkCommon(arr1,arr2,m,n);
    for(int i=0;i<ansVector.size();i++){
        cout<<ansVector[i]<<" ";
    }
}*/

//pair sum :- pair of elements whose sum is equal to given int k, pair part of the array
//the pair must be sorted
//the overall nested vector should be sorted as well

/*vector<vector<int>> compareSum(int arr[], int n,int k){
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
                vector<int> temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}
void printFun(vector<vector<int>> ans){
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int m;
    cin>>m;
    int arr1[m];
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    int k;
    cin>>k;
    printFun(compareSum(arr1,m,k));
}*/

//another question:- sort 0 1
//array with given 0s and 1a in it, sort it and print the sorted array
//three appoach:-
//1. count no of zeroes and 1s, then use it to traverse and store the values in the array
//2. nested loop, or just plain sorting method 
//3. two pointer, best approach with O(n) complexity

//will use counter in array 
/*int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int count[2]={0};
    //counting 0s and 1s
    for(int i=0;i<n;i++){
        count[arr[i]]++;
        //count[arr[i]] += 1;
        //both are same
    }
    //inserting 0s
    for(int i=0;i<count[0];i++){
        arr[i]=0;
    }
    //inserting 1s
    for(int i=count[0];i<n;i++){
        arr[i]=1;
    }
    //printing result
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}*/

//using inbuilt sorting 
//include <algorithm>
/*int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //using sorting 
    sort(arr,arr+n);
    //printing
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}*/

//using two pointers the same above question

/*int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int left=0;
    int right=n-1;
    while(left < right){
        if(arr[left]==0){
            left++;
        }
        if(arr[right]==1) right--;
        if(arr[left]==1 && arr[right]==0){
             swap(arr[left],arr[right]);
            //  left++;
            //  right--;

            //note: this will result in a wrong ans, since we are using only if statement,
            //all the statement will be executed, and since we not doing ++ in 3rd if, loop will run extra time
            //resulting in it making an extra swapping
        }
    }
    //printing
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}*/

//coorect approach
/*int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int left=0;
    int right=n-1;
    while(left < right){
        if(arr[left]==0){
            left++;
        }
        else if(arr[right]==1) right--;
        else{
             swap(arr[left],arr[right]);
             left++;
             right--;
        }
        //can use while as well, instead of if condtional;
    }
    //printing
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}*/

