#include <iostream>
using namespace std;
int main()
{
int n , q , l , r ;
cin>>n>>q;

long long array[n];
long long prefix[n] ;
for(int i = 0 ; i < n ; i++ )
    cin>>array[i];
prefix[0] = array[0]; 
for(int i = 1 ; i < n ; i++ )
    prefix[i]= array[i]+prefix[i-1];


    
for(int i = 0 ; i < q ; i++){
    cin>>l>>r ;
    l -- , r -- ;
    if (l == 0 )
        cout<<prefix[r]<<endl ;
    else
        cout<<prefix[r] - prefix[l-1]<<endl;
}

return 0 ; 
}

