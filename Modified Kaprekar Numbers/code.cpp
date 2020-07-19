#include <bits/stdc++.h>

using namespace std;

// Complete the kaprekarNumbers function below.
void kaprekarNumbers(int p, int q) {
    int flag=0;
    int left,right;
    for(int i=p;i<=q;i++)
    {
        long n=(long)i*i;
        string str=to_string(n);
        string l=str.substr(0,str.length()/2);
        string r=str.substr(str.length()/2);
        if(l=="")
            left=0;
        else
            left = stoi(l);
        if(r=="")
            right=0;
        else
            right = stoi(r);
        if(left+right==i)
        {
            cout<<i<<" ";
            flag=1;
        }
    }
    if(flag==0)
        cout<<"INVALID RANGE";


}

int main()
{
    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    kaprekarNumbers(p, q);

    return 0;
}
