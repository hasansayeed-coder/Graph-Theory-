
#include<bits/stdc++.h>

using namespace std;

#define REP(i,n)  for(int i=1; i<=n;i++)
#define mod 1000000000


int vis[10001] ;
vector<int> ar[10001] ;
int cc_size;
int dfs(int node) {

    vis[node] = 1;
    cc_size++ ;

    for(int child : ar[node]){
        if(vis[child]==0){
            dfs(child);
        }
    }
}


int main(){

    int t , n , m , a  ,b ;

    cin  >> t;

    while(t--) {

            cin >> n >> m ;

        REP(i ,n) {
            vis[i] = 0 , ar[i].clear() ;
        }

        REP( i ,m ){
        cin >> a >> b , ar[a].push_back(b) , ar[b].push_back(b);
        }

        int cnt = 0 ;

        long long res = 1 ;

        REP(i , n) {
        if(vis[i]==0){
            cc_size = 0;
            dfs(i) , cnt++;

            res = (res * cc_size)%mod;
        }
    }
        cout << cnt << " " << res << endl;
    }



}
