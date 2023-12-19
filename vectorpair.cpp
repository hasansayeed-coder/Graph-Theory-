
#include<bits/stdc++.h>\
#include<vector>

using namespace std ;

#define ff first
#define ss second

int main() {

    /*

    pair<int, int > p1 ;

    p1.first = 2 ;
    p1.second = 3 ;

    cout << p1.ff << " " << p1.ss ;


    pair<int,int> p2(5,3) ;

    cout << endl;


     cout << p2.ff << " " << p2.ss << endl;

     pair<int  , int > p3 ;

     p3 = make_pair(34,40) ;

     cout << p3.ff << " " << p3.ss << endl;


     pair<int  , int > p4 ;

     p4 = {87,43} ;

     cout << p4.ff << " " << p4.ss << endl;

    */

    vector<pair<string,int> > v ; // must put a space after first angular braces in the end point

    for(int i = 0 ; i< 3 ;i++) {
        string s ;

        cin >> s ;

        int age  ;

        cin >> age ;

        v.push_back({s , age});
    }

    for(auto it = v.begin() ; it!= v.end(); it++)  {

            cout << it->ff << " " << it->ss << endl;

    }

    for(auto it1 : v) {
        cout << it1.ff << " " << it1.ss << endl;
    }




}
