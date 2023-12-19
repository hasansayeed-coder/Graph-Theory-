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

vector<int> vis[10001]  ;


int main()
{
    //.
    //.
    //.

    int cc_count  = 0;

    for(int i=1;i<=n;i++)
    if(vis[i] == 0)
        dfs(i), cc_count++;

    cout << " # of cc = " << cc_count;
}
