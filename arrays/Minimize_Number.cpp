#include <iostream>
using namespace std;
int main()
{
int n , count = 0 ;
cin>> n ;
int array[n];
for (int i = 0 ; i < n ; i++){
    cin>>array[i];
}

int i = 0 , c = 0  ;

while (true)
{
    
    if ((array[i] % 2) == 0 ){
        c += 1;
        array[i] = array[i] /2 ;
      
    }
    else
        break;
          
    if (c == n){
        count += 1 ;
        c = 0 ;
        i = -1 ;
    }
    i++ ;
}


cout<<count ;

return 0 ; 

}

