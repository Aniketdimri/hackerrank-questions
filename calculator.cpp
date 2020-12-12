#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    char o;
    cout<<"CALCULATOR\nNote: This calculator will do the opeartions as per the given operators so it will not follow the the  rules of BODMAS so the\n\t Enter the value according to that only\n";
    cin>>a>>o>>b;

    if(0)
    {
        here:
        cin>>b;
    }
    
    switch(o)
    {
        case '+':
        {
            a=a+b;
            cin>>o;
            if(o=='=')
            {
                break;
            }
            else
            {
                goto here;
            }
        }
        case '-':
        {
            a=a-b;
            cin>>o;
            if(o=='=')
            {
                break;
            }
            else
            {
                goto here;
            }
        }
        case '*':
        {
            a=a*b;
            cin>>o;
            if(o=='=')
            {
                break;
            }
            else
            {
                goto here;
            }
        }
        case '/':
        {
            a=a/b;
            cin>>o;
            if(o=='=')
            {
                break;
            }
            else
            {
                goto here;
            }
        }

    }
    cout<<" = "<<a;

    return 0;
}