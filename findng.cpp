#include<bits/stdc++.h>

using namespace std ;
#define ll long long
vector<int> ar[100001] ;
int vis[100001] ;
int in[100001] ;

int timer ;

int low[100001] ;

void dfs(int node , int par) {

    vis[node]  = 1 ;
    in[node] = low[node] = timer ;

    timer++ ;

    for(int child : ar[node]){

     if(child == par) continue ;

     if(vis[child]==1) {
        low[node] = min(low[node] , in[child]) ;
     }

     else {
        dfs(child , node) ;


        if(low[child] > in[child]) {
            cout << node << " -> " << child << " is a bridge" << endl;


            low[node] = min(low[node] , low[child]) ;
        }
     }

    }
}






int main() {


    ll n  , m ;

    cin  >> n >> m ;

    for(ll i = 0 ; i< m ; i++) {
         ll  a , b ;

         cin >> a >> b ;

         ar[a].push_back(b)  ,ar[b].push_back(a) ;
    }

    dfs(1 , -1) ;


}
