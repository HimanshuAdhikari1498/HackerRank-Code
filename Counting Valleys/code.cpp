#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int c=0,r=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='D')
            c=c-1;
        else
            c=c+1;
        if(c==0 && s[i]=='U')
            r=r+1;
    }
    return r;
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
