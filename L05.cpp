#include<bits/stdc++.h>
#define REP(i,n) for (int i=1;i<=n;i++)
#define mod 1000000007
#define pb push_back
#define vi vector<int>
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define N 101
#define endl '\n'
using namespace std;

bool dfs(int node, int color)
{
    vis[node] = 1;
    col[node] = color;

    for(int child : ar[node])
    {
        if(vis[node] == 0)

        if(dfs(child , color^1)==false)
          return false;

        else
         if(col[node] == col[child])
            return false;

    }

    return true;
}

int main()
{

}
