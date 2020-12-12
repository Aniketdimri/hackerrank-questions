#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {

long a,c,i;

c=(long)count(s.begin(),s.end(),'a');

a=c*(n/(long)s.length());

i=n%(long)s.length();

n=count(s.begin(),s.begin()+i,'a');

n+=a;

return n;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
