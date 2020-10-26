#include<bits/stdc++.h>

using namespace std;

const string p = "aeiouy";

bool vowel(char ch)
{
    return p.find(ch) != -1;
}

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    cout << s[0];
    for(int i = 1; i < n; i++)
        if (!vowel(s[i - 1]) || !vowel(s[i]))
            cout << s[i];
    cout << endl;
}
