#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//ques : sum of two arrays similar to mathematical style

//reversing the ans vector
vector<int> numReverse(vector<int> sumAns){
    //three ways to reverese , M-I
    //reverse(sumAns.begin(),sumAns.end());

    //M-II
    // sumAns = vector<int>(sumAns.rbegin(),sumAns.rend());

    //M-III
    int s=0;
    int e = sumAns.size()-1;
    while (s<=e)
    {
        swap(sumAns[s],sumAns[e]);
        s++;
        e--;
    }
    
    return sumAns;
}

vector<int> sumVector(vector<int> nums1,vector<int> nums2){
    vector<int> sumAns;

    int i = nums1.size()-1;
    int j = nums2.size()-1;

    int carry = 0;

    //adding from last element of both the array

    // for(;i>0;i--){
    //     for(;j>0;j--){
    //         int val1 = nums1[i];
    //         int val2 = nums2[j];

    //         int sum = val1+val2;
    //         carry = sum/10;
    //         sum = sum%10;
    //         sumAns.push_back(sum);
    //     }
    // }

    //wrong using for loop, instead use while loop
    while(i>=0 && j>=0){
            int val1 = nums1[i];
            int val2 = nums2[j];

            int sum = val1+val2+carry;
            carry = sum/10;
            sum = sum%10;
            sumAns.push_back(sum);
            i--;
            j--;
    }

    //case 1: if the nums1 is still left on the left
    while(i>=0){
        int sum = nums1[i]+carry;

        carry = sum/10;
        sum = sum%10;
        sumAns.push_back(sum);
        i--;
    }
    //case 2: if the num2 is still left on the left
    while(j>=0){
        int sum = nums2[j]+carry;
        carry = sum/10;
        sum = sum%10;
        sumAns.push_back(sum);
        j--;
    }
    //at last if carry is left
    while(carry!=0){
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        sumAns.push_back(sum);
    }

    //reversing the vector to get the proper ans
    return numReverse(sumAns);
}
int main(){
    
    vector<int> nums1 = {9,9,8};
    vector<int> nums2 = {11,4,7,9,2};

    vector<int> sumAns = sumVector(nums1, nums2);

    for(int i=0;i<sumAns.size();i++){
        cout<<sumAns[i]<<" ";
    }
    
}