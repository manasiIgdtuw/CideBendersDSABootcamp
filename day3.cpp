#include <bits/stdc++.h>
using namespace std;

// int maximum=*max_element(nums.begin(),nums.end()); // O(n)
// int minimum=*min_element(nums.begin(),nums.end());

void selectionSort(vector<int> &nums)
{   
    int n = nums.size();
    for (int i = 0; i < n - 1; i++) //-->O(n-1) =O(n)
    { // no. of iterations
        // finding minimum element
        int minimum = i; 
        for (int j = i; j < n; j++) //O(n)
        {
            if (nums[j] < nums[minimum])
            {
                minimum = j;
            }
        }
        swap(nums[minimum],nums[i]);
    }
    return;
}

void InsertionSort(vector<int>& nums){
    int n=nums.size();

    for(int i=0;i<n;i++){ // count the interations  O(n)
        int j=i;
        while(j>0 && nums[j-1]>nums[j]){ // check if element is in correct position //O(1)
            swap(nums[j-1],nums[j]);
            j--;
        }
    }
}

void quickSort(vector<int>& nums,int low,int high){  // O(nlogn)
    if(low<high){
        int pivot=partition(nums,low,high);
        quickSort(nums,low,pivot-1); //O(logn) base 2
        quickSort(nums,pivot,high);
    }

}

int partition(vector<int>&nums,int low,int high){
    int pivot=nums[low];
    int i=low,j=high;
    while(i<j){  // O(n)
        // to check if any elements less tha pivot are present on right
        while(nums[i]<=nums[pivot] && i<high){
            i++;
        }
        //to check if any element greater than pivot are present on the left
        while(nums[j]>nums[pivot] && j>low){ 
            j--;
        }
        if(i<j) swap(nums[i],nums[j]);

    }
    swap(nums[low],nums[j]);
    return j;
}

int fun1(int i){
    //base condition

    //updation 

    //call recursion 

}


int main()
{vector<int> v;
quickSort(v,0,v.size()-1);
//vector<vector<int>> v(rows,vector<int>(cols));
    return 0;
}