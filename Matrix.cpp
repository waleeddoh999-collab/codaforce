#include <iostream>
using namespace std;
int main()
{
int n ,x ;
cin>>n;
int array[n][n];
for(int i = 0 ; i < n ; i++ ){
    for(int j = 0 ; j < n ; j++ ){
        cin>>array[i][j] ;
    }
}
int sumpri = 0  ;
for(int i = 0 ; i < n ; i++ ){
    for(int j = 0 ; j < n ; j++ ){
        if (i == j )
        sumpri += array[i][j] ;  
    }   
}
int sumsec = 0 ;
for (int i = 0 , j = n-1 ; i < n ; i ++ , j--)
    sumsec += array[i][j] ;

cout<<abs(sumpri - sumsec );


return 0 ; 

}

