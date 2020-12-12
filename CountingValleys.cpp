#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
int upd=0,ans=0,prev=0;
for(int i=0;i<s.size();i++)
{
    prev=upd;
    if(s[i]=='D')
    --upd;
    else
    {
        ++upd;
    }
    if(upd==0&&prev<0)
    ans++;
    
}
return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
