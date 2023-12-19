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

int timer = 1;

void dfs(int node)
{
    vis[node] = 1;
    in[node] = timer++;

    for(int child : ar[node] )
        {
        if(vis[node] == 0)
        {
            dfs(child);
        }
    }
    out[node] = timer++;
}

int main()
{

}
