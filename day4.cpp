#include <bits/stdc++.h>
using namespace std;


bool fun(vector<int>& v,int k){  //O(n^2)

    int n=v.size();

    for(int i=0;i<n-1;i++){  //O(n)
        for(int j=i+1;j<n;j++){ //O(n)
            if(v[i]+v[j]==k) return true;
        }
    }

    return false;
}

//2 pointer 
bool fun2(vector<int>& v, int k){ //O(n + nlogn )=O(nlogn)
sort(v.begin(),v.end()); //O(nlogn)
    int n=v.size();
    int low=0;
    int high=n-1;
    while(low<high){ //O(n)
        int x=v[low]+v[high];
        if(x==k) return true;
        if(x<k) low++;
        else if(x>k) high--;
    }

    return false;
}

int main(){

vector<char> v1={'a','b','c'};
for(auto it: v1) cout<<it;
cout<<endl;

string s="abcdef";
// cin>>s;
// getline(cin,s);
//cout<<s.substr(3,1);
// s[0]==a;
// s[1]==b;



    return 0;
}