#include <bits/stdc++.h>


using namespace std;

// Complete the extraLongFactorials function below.
void extraLongFactorials(int n) {

int q=2;
int fact[10000]={0};
fact[0]=1;
int len=1;

int x=0;
int num=0;

while(q<=n)
{
    x=0;
    num=0;
    while(x<len)
{
    fact[x]=fact[x]*q;
    fact[x]=fact[x]+num;

    num = fact[x]/10;
    fact[x]=fact[x]%10;
    x++;
}

while(num!=0)
{
    fact[len]=num%10;
    num=num/10;
    len++;
}
 q++;
}
len--;

while(len>=0)
{
    cout<<fact[len];
    len--;
}
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    extraLongFactorials(n);

    return 0;
}
