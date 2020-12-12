#include<bits/stdc++.h>

using namespace std;

class lapindrome
{
    char* word, *first, *second;
    int size=0;
    public:
    void getdata()
    {
        cout<<"Enter the word : "<<endl;
       cin>>word; 
       while(word+size!='\0')
       {
           size++;
       }
       cout<<size;
    }

    void putdata()
    {
        while(word[size]!='\0')
        {
            size++;
        }
        cout<<size;
    }
    
    
};

int main()
{
    lapindrome l;
    l.getdata();
   l.putdata();
    
    return 0;
}