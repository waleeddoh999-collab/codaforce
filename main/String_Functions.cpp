#include<iostream>
#include <algorithm>
#include<string>
#include<cstring>
using namespace std;

int main(){
int n , nofq ; 
cin>>n>>nofq;
string a , q ;
cin>>a ;
for (int i = 0 ; i < nofq ; i++){
    cin>>q ;
    int l ,r ;
    char c ;

    if (size(a) != 0){
    if (q == "substr"){
        cin>>l>>r;
        cout<<a.substr(min(l ,r)-1 , max(l,r)-min(l ,r)+1)<<endl;
    }
    else if (q == "sort"){
        cin>>l>>r;
        sort(a.begin()+ min(l,r)-1, a.begin()+max(l,r));
    }

    else if (q == "pop_back")
        a.pop_back() ;
    else if (q == "back")
        cout<<a.back()<<endl;
    else if (q == "reverse"){
        cin>>l>>r; 
        reverse(a.begin()+ min(l,r)-1, a.begin()+max(l,r));
    }
    else if (q == "front")
        cout<<a.front()<<endl;
    
    else if (q == "print"){
        cin>>l ;
        cout<<a[l-1]<<endl; 
    }
    else if (q == "push_back"){
        cin>>c ;
        a.push_back(c);
    }}
    else
    {
    if (q == "push_back"){
        cin>>c ;
        a.push_back(c);
    }
    }

}


return 0 ;
}


