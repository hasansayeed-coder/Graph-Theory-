#include<bits/stdc++.h>

using namespace std ;

vector<int> ar[100001] ;
int vis[100001] ;
int cedge1 , cedge2 ;

bool dfs(int node , int par) {

    vis[node] = 1 ;

    for(int child : ar[node]) {
        if(vis[child]==0){
            bool i = dfs(child , node) ;
            if(i==true) {
                //cedge1 = child ;
                //cedge2 = node;
                return true ;
        }
        }

        else {
            if(child != par) {
               // cedge1 = child ;
                //cedge2 = par;
                return true ;
            }
        }
    }

    return false;


}

int main() {


    int n , m , a, b ;

    cin >> n >> m ;

    while(m--) {
            cin >>a  >> b ;
        ar[a].push_back(b) , ar[b].push_back(a) ;
    }

    bool res = dfs(1 , 0) ;


    if(res==true)cout << "Cycle detected "<< endl;

    else cout << "Cycle not detected" << endl;


}

/*
5 5
1 2
2 3
2 4
3 4
4 5

Cycle detected .
*/
