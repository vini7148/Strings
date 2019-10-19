#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> ans;
    ans = suffix(s);
    for(int i=0;i<ans.size();i++)
        cout << ans[i] << " ";

}
