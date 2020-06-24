#include <bits/stdc++.h>

using namespace std;

// Complete the extraLongFactorials function below.
void extraLongFactorials(int n) {
    int size,s=1,carry=0;
    double d=0;
    for(int i=2; i<=n; i++)
    {
        d+=log10(i);
    }
    size=(int)d+1;
    int *a=new int[size];
    a[0]=1;
    for(int i=2;i<=n;i++)
    {
        for(int j=0;j<s;j++)
        {
            int prod=a[j]*i+carry;
            a[j]=prod%10;
            carry=prod/10;
        }
        while(carry>0)
        {
            a[s]=carry%10;
            carry=carry/10;
            s=s+1;
        }
    }
    for(int i=size-1;i>=0;i--)
    {
        cout<<a[i];
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
