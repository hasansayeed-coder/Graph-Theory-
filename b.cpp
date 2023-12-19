#include<bits/stdc++.h>
using namespace std;


#define INF 1000000000;

vector<int> ar[100001];
int vis[100001] ;
int dist[100001];

void dfs(int node , int dis) {

    vis[node] = 1 ;
    dist[node] = dis ;


    for(int child : ar[node] ) {
        if(!vis[child]){
            dfs(child , dist[node] + 1)
        }
    }
}

int main() {


    int n ,q , a , b;

    cin >>  n ;



    for(int i=1; i < n ;i++ )  {

        cin  >> a >> b ;

        ar[a].push_back(b) , ar[b].push_back(a);
    }

    dfs(1 , 0);

    cin >> q ;

    int ans = -1 , min_dist = INF;

    while(q--) {
        int girl_city ;
        cin >> girl_city;

        if(dist[girl_city] < min_dist){
            min_dist = dist[girl_city]  , ans = girl_city ;
        }

        else {
            if(dist[girl_city] == min_dist && girl_city < ans) ans = girl_city;
        }
    }

    cout << ans << endl;






}
