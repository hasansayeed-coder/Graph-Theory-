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


vi ar[100001];
vi primes;
int dis[100001];
int vis[100001];

bool isPrime(int n)
{
    for(int i=2;i*i<=n;i++)
        if(n%i==0) return false;

        return true;
}


bool isValid(int a , int b)
{
    int cnt = 0;

    while(a)
    {
        if((a%10)!=(b%10)) cnt++;

        a/=10 , b/=10;
    }

    if(cnt==1) return true;

    else return false;
}


void buildgraph()
{
    for(int i=1000;i<=9999;i++)
    {
        if(isPrime(i))
            primes.pb(i);
    }

    for(int i=0;i<primes.size();i++)
    {
        for(int j=i+1;j<primes.size();j++)
        {
            int a = primes[i];
            int b = primes[j];

            if(isValid(a,b)){
                ar[a].pb(b) , ar[b].pb(a);
            }
        }
    }
}


void bfs(int src)
{
    queue<int > q;

    q.push(src);
    vis[src] = 1;
    dis[src] = 0;


    while(!q.empty())
    {
        int curr  = q.front();
        q.pop();

        for(int child : ar[curr])
        {
            if(vis[child] == 0)
            {
                vis[child] = 1;
                dis[child] = dis[curr]+1;
                q.push(child);
            }
        }
    }
}

int main()
{
    int  t,a,b;
    cin >> t ;

    buildgraph();

    while(t--){

    cin >> a >> b;

    for(int i=1000;i<=9999;i++)
        vis[i] = 0, dis[i] = -1;

    bfs(a);

    if(dis[b]==-1)
        cout << "impossible" << endl;

    else
        cout << dis[b]<<endl;
    }
}
