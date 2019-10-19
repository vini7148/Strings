#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct ss
{
    char st,en,ne;
};

bool operator<(const ss& a, const ss& b)
{
    if(a.st != b.st)
        return a.st < b.st;
    else
        return a.ne < b.ne;
}

void bwt(string s)
{
    vector<ss> x(s.size());
    for(int i=0;i<s.size();i++)
    {
        x[i].st = s[i];

        if(i == s.size() - 1)
            x[i].ne = s[0];
        else
            x[i].ne = s[i + 1];

        if(i == 0)
            x[i].en = s[s.size() - 1];
        else
            x[i].en = s[i - 1];
    }
    /*for(int i=0;i<x.size();i++)
        cout << x[i].st;
    cout << "\n";
    for(int i=0;i<x.size();i++)
        cout << x[i].en;
    cout << "\n";*/

    sort(x.begin(),x.end());

    /*for(int i=0;i<x.size();i++)
        cout << x[i].st;
    cout << "\n";*/
    for(int i=0;i<x.size();i++)
        cout << x[i].en;
}

int main()
{
    string s;
    cin >> s;
    bwt(s);
}
