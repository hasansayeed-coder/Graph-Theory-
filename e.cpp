
#include<bits/stdc++.h>
using namespace std;

#define pb push_back

int vis[10001] ;

vector<int> ar[10001];

void dfs(int node) {

    vis[node] = 1;

    for(int child : ar[node]) {
        if(vis[child] == 0){
            if(dfs(child) == true) return true;
        }

        else
        if(vis[child]==1) return true;
    }


        vis[node] = 2 ;

        return false;


}


int main() {


    int n , m , a , b;

    cin >> n >>  m ;

    while(m--) {
        cin >> a >> b ;
        ar[a].pb(b);
    }

    cout << "Cycle status : " << dfs(1);


}
