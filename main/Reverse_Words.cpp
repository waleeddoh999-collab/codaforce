#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    for (int i = 0; i < s.size(); i++) {

        if (isalpha(s[i])) {
                int j = i ;
                while (j < s.size() && isalpha(s[j]))
                    j++;
                for (int k = j-1 ; k >=i ; k--)
                    cout<<s[k];
               if (j < s.size())
                    cout << " ";
                i = j ;
            }
       
    }

}