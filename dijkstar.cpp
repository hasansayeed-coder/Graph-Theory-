#include<bits/stdc++.h>

#define INF 1000000007
#define ff first
#define ss second


using namespace std ;

vector<pair<int , int > > adj[1001] ;

int main() {

    int n ,m ,a,b  , w;

    cin >> n >> m ;

    while(m--) {
        cin >> a >> b >> w ;

        adj[a].push_back({b , w}) ;
        adj[b].push_back({a , w}) ; // for directed graph you have to comment out this line
    }

    //priority_queue<int> Q  ;

    priority_queue<pair<int , int>, vector<pair<int , int> > , greater<pair<int , int> > > pq ;

    vector<int> dis(n+1 , INF) ;
    pq.push({0 , 1}) ;
    dis[1] = 0 ;

    while(!pq.empty()){
        int curr = pq.top().second ;
        int curr_d = pq.top().first ;

        pq.pop() ;

        for(pair<int, int> edge : adj[curr]){

            if(curr_d + edge.second < dis[edge.first]){
                dis[edge.first] = curr_d + edge.second ;
                pq.push({dis[edge.first] , edge.first}) ;
            }
        }
    }

    for(int i = 1 ; i<= n ; i++) {
        cout << dis[i] << " " ;
    }
}

/*

6 9
1 2 4
1 6 2
2 3 5
2 6 1
6 3 8
6 5 10
3 4 6
3 5 3
5 4 5

0 3 8 14 11 2

*/

