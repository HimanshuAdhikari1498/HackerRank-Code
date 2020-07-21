#include <bits/stdc++.h>

using namespace std;

// Complete the encryption function below.
string encryption(string s) {
    int c=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]!=' ')
            c++;
    }
    float l=sqrt(c);
    int row=floor(l);
    int col=ceil(l);
    if(row*col<c)
        row=row+1;
    string r="";
    int k=0;
    for(int i=0;i<col;i++)
    {
        for(int j=i;j<c;j+=col)
        {
            r=r+s[j];
        }

        r=r+" ";
    }
    return r;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
