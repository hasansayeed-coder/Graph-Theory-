#include<bits/stdc++.h>

using namespace std ;

#define mx 100

int par[mx] ;

void makeSet(int u) {

    par[u] = u ;
}

bool flag = false;

int Find(int u) {

     // cout << u << endl;


    if(u==par[u]) return u ;

    return  par[u] =  Find(par[u]) ;

}

int Union(int u , int v) {

    int p = Find(u)  ;
    int q = Find(v) ;

    if(p!=q){
        par[q] = p ;
    }
}

bool isFriend(int u , int v){

    int p = Find(u) ;
    int q = Find(v) ;

    if(p==q) return true ;

    else return false;
}


void init() {
    for(int i =1 ; i<= 8 ;i++) {
        makeSet(i) ;
    }
}

int main(){

    init() ;
/*
    for(int i = 1 ; i<= 8 ;i++) {
        cout << "parent of " << i << " is " << par[i] << endl;
    }

*/

    //cout << Find(1) << " " << Find(2) ;

    /*
    Union(1,2) ;
    Union(2,3) ;
    Union(3,4) ;
    Union(4,5) ;
    Union(5,6) ;
    Union(6,7) ;
    Union(7,8) ;

    */







    Union(7,8) ;
    Union(6,7) ;
    Union(5,6) ;
    Union(4,5) ;
    Union(3,4) ;
    Union(2,3) ;
    Union(1,2) ;

    cout << endl;

    //cout << Find(1) << " " << Find(3) ;


    /*

    if(isFriend(4,7)==true)cout << "Same set" << endl;

    else cout << "belongs to different set" << endl;


    */

    flag = true ;

    Find(8) ;

    cout << "------" << endl;


    Find(4) ;
    cout << "------" << endl;


    Find(6) ;
    cout << "------" << endl;


    Find(1) ;








    return 0 ;


}
