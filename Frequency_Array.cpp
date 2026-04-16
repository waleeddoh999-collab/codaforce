#include <iostream>
using namespace std;
int main()
{
int n, m ;
cin>>n>>m;
int array[n];

int Frequency[m+1] = {0} ;

for(int i = 0 ; i < n ; i++)
    cin>>array[i];

for (int i = 0 ; i < n ; i ++ )
    Frequency[array[i]]++;     
    
for (int i = 1 ; i <= m ; i++ )
    cout<<Frequency[i]<<endl;


return 0 ; 
}

