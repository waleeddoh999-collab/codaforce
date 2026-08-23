#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
int n , q , x ,mid ;
cin>>n>>q;

long long array[n];
for(int i = 0 ; i < n ; i++ )
    cin>>array[i];
    
sort(array , array + n);
int Left  , Right  ;
bool found  ;
for(int i = 0 ; i < q ; i++){
    cin>>x ;
    Left = 0 , Right = n -1 ;
    found = false ;
    
    while (Left <= Right)
    {
        mid = (Left+Right)/2;
        if (x == array[mid]){
            found = true ;
            break;
        } 
        else if (x > array[mid] ){
            Left = mid + 1 ;
        }            
        else if (x < array[mid] ){
            Right = mid - 1 ;
        }  

    }
    if (found)
    
        cout<<"found"<<endl; 
    else       
        cout<<"not found"<<endl;
    
}


return 0 ; 
}

