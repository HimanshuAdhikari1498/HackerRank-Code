#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    int size=s.length(),c=0;
    long r=0;
    for(int i=0;i<size;i++)
    {
        if(s[i]=='a')
        {
            c++;
        }       
    }
    r=c*(n/size);
    int l=n%size;
    for(int i=0;i<l;i++)
    {
        if(s[i]=='a')
            r++;
    }
    return r;
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
