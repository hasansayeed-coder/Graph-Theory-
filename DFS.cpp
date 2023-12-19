#include<bits/stdc++.h>
#define REP(i,n) for (int i=1;i<=n;i++)
#define mod 1000000007
#define pb push_back
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

void dfs(int v)
{
    vis[v] = 1;
    cout << v << " - > " ;
    for(int i=0;i<ar[v].size();i++)
    {
        int child = ar[v][i];
        if(vis[child] == 0)
        dfs(child);
    }
}
