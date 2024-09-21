#include<bits/stdc++.h>
using namespace std;

int fun(int x){
    //base condition 
    if(x<0) return 0;
    //recursive call
    return 1+fun(x-1);
    //updation condition of the parameters 
}

int sumOfArray(vector<int> v,int i){  //O(n)
    if(i>= v.size()) return 0;

    return v[i]+sumOfArray(v,i+1);
}

int factorial(int n){ //O(n)
    if(n<=1) return 1;
    // n!=n*(n-1)!
    return n*factorial(n-1);
}

int fib(int n){    // O(2^n)
if(n<=1) return n;
return fib(n-1)+fib(n-2);
}

void PrintSubsequences(vector<int> v, int ind,vector<int> a){
    if(ind>=v.size()){
        for(auto it:a){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }

    a.push_back(v[ind]); //Take 
    PrintSubsequences(v,ind+1,a);
    a.pop_back(); // not - take
    PrintSubsequences(v,ind+1,a);
}

int main(){
// vector<int> v={9,80,78};

// int sum1=0;
// for(int i=0;i<v.size();i++) sum1+=v[i];
// cout<<sum1<<endl;

// int sum=sumOfArray(v,0);
// cout<<sum<<endl;

//cout<<factorial(25);

//0->0 , 1->1, 2->0+1, 3->1+1, fib(n)=fib(n-1)+fib(n-2)
//cout<<fib(3)<<endl;


vector<int> v={3,1};
vector<int> a;
PrintSubsequences(v,0,a);
    return 0;
}