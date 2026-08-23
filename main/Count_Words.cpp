#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int sizes = s.size();
    int words = 0;
    int k = 0;

    if (sizes == 0) {
        cout << 0;
        return 0;
    }

    while ((k != sizes) && (s[k] == ' '))
        k++;

    for (int i = k; i < sizes; i++) {
        if (s[i] == ' ') {

            while ((i != sizes) && (s[i] != ' ')) {
                if (isalpha(s[i])) {
                    words++;
                    break;
                }
            }
        }

        else if (isalpha(s[i])) {
            words++;
            while ((i != sizes) && (s[i] != ' '))
                i++;
        }
    }

    cout << words;
    return 0;
}


/*
#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int words = 0;
    bool inWord = false;

    for (int i = 0; i < s.size(); i++) {

        if (isalpha(s[i])) {
            if (!inWord) {
                words++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }

    cout << words;
}
*/