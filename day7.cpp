#include <bits/stdc++.h>
using namespace std;

void PrintSubsequences(vector<int> v, int ind, vector<int> a)
{
    if (ind >= v.size())
    {
        for (auto it : a)
        {
            cout << it << " ";
        }
        cout << endl;

        return;
    }
    a.push_back(v[ind]); // Take
    PrintSubsequences(v, ind + 1, a);
    a.pop_back(); // not - take
    PrintSubsequences(v, ind + 1, a);
}

int CountSub(vector<int> v, int ind, vector<int> a)
{
    if (ind >= v.size())
    {
        if (a.size() == 0)
            return 0;
        return 1;
    }
    a.push_back(v[ind]); // Take
    int sub1 = CountSub(v, ind + 1, a);
    a.pop_back(); // not - take
    int sub2 = CountSub(v, ind + 1, a);

    return sub1 + sub2;
}
int CountSubSumK(vector<int> v, int ind, vector<int> a, int k)
{
    if (ind >= v.size())
    {
        int sum = 0;
        for (auto it : a)
            sum += it;
        if (sum != k)
            return 0;
        return 1;
    }
    a.push_back(v[ind]); // Take
    int sub1 = CountSubSumK(v, ind + 1, a, k);
    a.pop_back(); // not - take
    int sub2 = CountSubSumK(v, ind + 1, a, k);

    return sub1 + sub2;
}

int CountSubSumK2(vector<int> v, int ind, vector<int> a, int k, int sum)
{
    if (ind >= v.size())
    {
        if (sum != k)
            return 0;
        return 1;
    }
    a.push_back(v[ind]); // Take
    sum += v[ind];
    int sub1 = CountSubSumK2(v, ind + 1, a, k, sum);
    sum -= v[ind];
    a.pop_back(); // not - take
    int sub2 = CountSubSumK2(v, ind + 1, a, k, sum);

    return sub1 + sub2;
}

vector<int> merge(vector<int> &v1, vector<int> &v2)
{
    int n1 = v1.size();
    int n2 = v2.size();
    vector<int> ans(n1 + n2);
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (v1[i] < v2[j])
        {
            ans[k] = v1[i];
            i++;
        }
        else
        {
            ans[k] = v2[j];
            j++;
        }
        k++;
    }

    while (j < n2)
    {
        ans[k] = v2[j];
        k++;
        j++;
    }
    while (i < n1)
    {
        ans[k] = v1[i];
        i++;
        k++;
    }

    return ans;
}
void merge2(vector<int> &arr, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid; // right-(mid+1)+1
    vector<int> sub1, sub2;
    for (int i = left; i <= mid; i++)
        sub1.push_back(arr[i]);
    for (int i = mid + 1; i <= right; i++)
        sub2.push_back(arr[i]);
    vector<int> temp(n1 + n2);
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) //O(n)
    {
        if (sub1[i] < sub2[j])
        {
            temp[k] = sub1[i];
            i++;
        }
        else
        {
            temp[k] = sub2[j];
            j++;
        }
        k++;
    }

    while (j < n2) //O(n)
    {
        temp[k] = sub2[j];
        k++;
        j++;
    }
    while (i < n1) //O(n)
    {
        temp[k] = sub1[i];
        i++;
        k++;
    }
    int p1 = 0;
    for (int i = left; i <= right; i++) //O(n)
    {
        arr[i] = temp[p1];
        p1++;
    }
}

void mergeSort(vector<int> &arr, int left, int right) //O(nlogn)
{
    if (left >= right)
    {
        return;
    }
    int mid = (left + right) / 2;
    mergeSort(arr, left, mid); //O(nlogn)
    mergeSort(arr, mid + 1, right); //O(nlogn)

    // merge the 2 sorted halves
    merge2(arr, left, mid, right); //O(n)
}

int main()
{
    vector<int> v = {9,8,1,2,6,4,7,11};
    // 9,1 ; 8,2 ; 5,4,1 ; 6,4
    // 9,2 ; 8,1,2 ...

    vector<int> a;
    // PrintSubsequences(v, 0, a);
    // cout << CountSub(v, 0, a) << endl;
    // cout << CountSubSumK(v, 0, a, 10)<<endl;
    // cout << CountSubSumK2(v, 0, a, 11,0);

    // vector<int> v1={1,99,3} , v2={2,4,7};
    // vector<int> ans=merge(v1,v2);
    // for(auto it: ans) cout<<it<<" ";
    // cout<<endl;

    // mergeSort(v, 0, v.size() - 1);
    // for(auto it:v) cout<<it<<",";

    return 0;
}