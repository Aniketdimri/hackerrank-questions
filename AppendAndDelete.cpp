#include <bits/stdc++.h>

using namespace std;

// Complete the appendAndDelete function below.
string appendAndDelete(string s, string t, int k) {

int c=0,l,i=0;
string r;
while(s[i]==t[i])
{
    i++;
    l=i;
}
if(s.size()==t.size())
{
    l=0;
}

c=(t.size()-i)+(s.size()-i);
while(c<k)
{
    if(i-->0)
    {
        c+=2;
    }
    else
    {
        c++;
    }
    
}

if(c==k)
r="Yes";

else
{
    r="No";
}


return r;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = appendAndDelete(s, t, k);

    cout << result << "\n";

    //fout.close();

    return 0;
}
