#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int  a , b ;
    cin>>a >> b ;
    long array1[a];
    long array2[b];
    for (int i = 0 ;i < a ; i++ )
            cin>>array1[i];

    for (int i = 0 ;i < b ; i++ )
            cin>>array2[i];


    int count = 0 ;
    int index = 0 ;
    for(int i = 0 ; i < b ; i++){
        for (int j = 0 ; j < a ; j++ ){
            if ((array2[i] == array1[j])&&(j >= index )){
                array1[j] = 0 ;
                index = j ;
                count += 1 ;
                break;
            } 
        }
    }
if (count == b )
cout<<"YES";
else
cout<<"NO";
     

return 0 ; 
}












