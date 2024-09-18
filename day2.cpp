#include <bits/stdc++.h>
#include <vector>
using namespace std;

// sum of array
int sum(vector<int> &v)
{
    int ans = 0; // stores the sum
    for (auto it : v)
    {
        ans += it;
    }
    return ans;
}

// reverse an array
void reverseArray(vector<int> &a)
{
    int start = 0;
    int end = a.size() - 1;
    int temp;
    while (start < end)
    {
        // temp=a[start];
        // a[start]=a[end];
        // a[end]=temp;
        swap(a[start], a[end]);
        start++;
        end--;
    }
}

// linear search
int linearSearch(vector<int> &a, int key)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == key)
        {
            return i;
        }
    }
    return -1; // key not found
}

// binary search -> array should be sorted for binary search 
int binarySearch(vector<int> &a, int key) // log n (base 2)
{
    int low = 0;
    int high = a.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (key == a[mid])
        {
            return mid;
        }
        else if (a[mid] < key) // key in right half of the array
        {
            low = mid + 1;
        }
        else if (a[mid] > key) // key in left half of the array
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{ // Arrays
    // int a[4]={1,2,3,4}; // declaration+initialisation
    // for(int i=0;i<4;i++){ //printing the array
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    // int b[9]={10,11};
    // for(int i=0;i<9;i++){
    //     cout<<b[i]<<" ";
    // }
    // int c[]={1,2,3};

    // int* ptr=new int[4]; //allocation
    //  delete[] ptr;//de-allocation

    // Vectors
    //  vector<int> v;
    //  vector<int> v1(7); //vector of size 7
    //  vector<int> v3(6,455); //vector of size 6 with all value 455

    // //cout<<v3.size();
    // v3.push_back(4);// -1,-1,-1,-1,-1,-1,4
    // v3.pop_back();//removeing last element

    // v3.insert(v.begin()+1,78);// -1,78,78,-1,-1,-1,-1,-1
    // for(auto it: v3) cout<<it<<" ";
    // //2d vector
    // vector<vector<int>> vec(4,vector<int>(5));

    // vector<int> v = {23, 45, 67};
    // cout << linearSearch(v, -89) << endl;
    
    // stl to reverse an array
    // reverse(arr.begin(),arr.end())

    return 0;
}
