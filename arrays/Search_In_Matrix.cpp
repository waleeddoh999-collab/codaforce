#include <iostream>
using namespace std;
int main()
{
int n , m ,x ;
cin>>n>>m;
int array[n][m];
for(int i = 0 ; i < n ; i++ ){
    for(int j = 0 ; j < m ; j++ ){
        cin>>array[i][j] ;
    }
}
cin>>x ;

bool found = false ;
for(int i = 0 ; i < n ; i++ ){
    for(int j = 0 ; j < m ; j++ ){
        if (array[i][j] == x)
            found = true ;   
                        
    }
}

if (found )
    cout<<"will not take number";
else
    cout<<"will take number";

return 0 ; 

}

