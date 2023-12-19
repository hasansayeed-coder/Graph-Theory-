
#include<bits/stdc++.h>

using namespace std ;

vector<int> ar[1000001] ;

int vis[1000001]  , cc[1000001];

int curr_cc ;

void dfs(int node) {

        vis[node] = 1 ;

        cc[node] = curr_cc ;

        for(int child : ar[node]) {
            if(vis[child]==0){
                dfs(child) ;
            }
        }
}



int main() {

    int t , n , k , a ,b ;
    string op;
    cin >> t ;

    while(t--) {
        cin >> n >> k ;

        curr_cc = 0 ;
        //pair<int,int> p ;

       // p.first
       // p.second

        vector<pair<int,int> > edgeList ;

        for(int i = 1 ; i<= n ; i++) ar[i].clear() , vis[i] = 0 ;

        for(int i =1 ; i<= k ; i++) {
            cin >> a >> op >>  b ;

            if(op == "="){
                ar[a].push_back(b) , ar[b].push_back(a) ;
            }

            else
            edgeList.push_back({a,b}) ;

        }

        for(int i =1 ; i<= n ; i++ ){
            if(vis[i] == 0) {
                curr_cc++  ;
                dfs(i) ;
            }
        }

        bool flag = true ;

        for(int i = 0 ; i< edgeList.size() ; i++) {
            a = edgeList[i].first ;
            b = edgeList[i].second ;

            if(cc[a]==cc[b]){
                flag = false ;
                break ;
            }
        }

        if(flag)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}


/*

2

2 2

1 = 2
1 != 2

3 2

1 = 2
2 != 3

*/


/*

NO

YES


*/

