#include<bits/stdc++.h>
using namespace std;


bool isValid(int r,int c,int n,vector<vector<int>>& maze,vector<vector<int>>& vis){
    if(r>=0 && r<n && c>=0 && c<n && vis[r][c]==0 && maze[r][c]==1){
        return true;
    }

    return false;

}

//O(2^(n^2))
void findPath(int i,int j,vector<vector<int>>& maze,vector<string>& ans ,string move ,vector<vector<int>>& vis){
int n=maze.size();
if(i==n-1 && j==n-1){
    ans.push_back(move);
    return;
}
// d, l , r, u

//downward
if(isValid(i+1,j,n,maze,vis)){
    vis[i][j]=1;
    findPath(i+1,j,maze,ans,move+'D',vis);
    vis[i][j]=0; //backtracking step 
}

//left 
if(j-1>=0 && j-1<n && vis[i][j-1]==0 && maze[i][j-1]==1){
    vis[i][j]=1;
    findPath(i,j-1,maze,ans,move+'L',vis);
    vis[i][j]=0;
}

//right
if(j+1>=0 && j+1<n && vis[i][j+1]==0 && maze[i][j+1]==1){
    vis[i][j]=1;
    findPath(i,j+1,maze,ans,move+'R',vis);
    vis[i][j]=0;
}

//up
if(i-1>=0 && i-1<n && vis[i-1][j]==0 && maze[i-1][j]==1){
    vis[i][j]=1;
    findPath(i-1,j,maze,ans,move+'U',vis);
    vis[i][j]=0; //backtracking step 
}

}

int main(){
    vector<vector<int>> maze={{1, 0, 0, 0},{1, 1, 0, 1}, {1, 1, 0, 0},{0, 1, 1, 1}};
    vector<vector<int>> maze2={{1, 0},{1,0}};

    vector<vector<int>> vis(4,vector<int>(4,0));

    string move="";
    vector<string> ans;

    findPath(0,0,maze2,ans,move,vis);

    for(auto it:ans){
        cout<<it<<endl;
    }




    return 0;
}