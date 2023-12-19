#include<bits/stdc++.h>

using namespace std ;

vector<int> ar[10001] ;

int vis[100001] ;

int maxD  , maxNode ;

void dfs(int node , int dis) {

    vis[node] = 1;

    if(dis > maxD) {
        maxNode = node , maxD = dis ;
    }

    for(int child : ar[node]) {
        if(vis[child]==0){
            dfs(child , dis+1) ;
        }
    }

}



int main() {


    int n , a , b ;

    cin >> n ;

    for(int i=1 ; i<=n-1 ; i++) {
        cin >> a >> b , ar[a].push_back(b) , ar[b].push_back(a) ;
    }


    maxD = -1 ;

    dfs(1 , 0) ; // there will be at least 2 nodes in our tree ;

    //after running this dfs maxNode will contain the furthest node


    for(int i = 1 ; i<= n ; i++) {
        vis[i] = 0 ;
    }



    maxD = -1 ;

    dfs(maxNode , 0) ;

    cout << maxD << endl;

}



/*

3

1 2
2 3

*/

/*

2

*/

