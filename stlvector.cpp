#include<bits/stdc++.h>
#include<vector>

using namespace std ;

int main() {

   // int temp;

//vector<int> v;

    //vector<int> v1(10) ;

    //v.push_back(2) ;
    //v.push_back(3) ;
    //v.push_back(43) ;

    /*

    for(int i = 0 ; i < 3 ; i++) {
        cin >> temp ;
        v.push_back(temp) ;
    }
    */

  //  for(int i  = 0 ;i<v.size() ; i++) cout << v[i] << " " ;

    //cout << v.size() << " " << v.capacity() << endl;
    //cout << v1.size() << " " << v1.capacity() ;

    //empty()

    /*

    vector<int> v1 ;

    v1.push_back(1) ;
    v1.push_back(2) ;
    v1.push_back(3) ;

    vector<int> v2(v1) ;

    for(int i = 0 ; i < v1.size() ; i++)cout << v1[i] << " " ;

    cout << endl;

    for(int i = 0 ; i < v2.size() ; i++)cout << v2[i] << " " ;

    v2.pop_back() ;

    cout << endl;

    for(int i = 0 ; i < v2.size() ; i++)cout << v2[i] << " " ;

    cout << endl;

    cout << v1.front() << " " << v1.back() ;

    */

    vector<int> v1 ;

    v1.push_back(1) ;
    v1.push_back(2) ;
    v1.push_back(3) ;

    //vector<int> :: iterator it = v1.begin() ;

    auto it =  v1.begin() ;

    while(it!=v1.end()) {
        cout << *it << " " ;
        it++ ;

        //unidirectional
}

    //vector<int> :: reverse_iterator it1 = v1.rbegin() ;

    auto it1 = v1.rbegin() ;

    cout << endl;

    while(it1 != v1.rend()) {
        cout << *it1 << " " ;
        it1++ ;
    }











}

/* Member Functions

size()
capacity()
empty()
push_back()
pop_back()
front()
back()
at(g)

*/

/* container function

Iterator begin()
Iterator end()
Iterator rbegin()
Itertor rend()
reverse(Iterator start , iterator end)

*/
