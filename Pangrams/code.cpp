#include <bits/stdc++.h>

using namespace std;

// Complete the pangrams function below.
string pangrams(string s) {
    transform(s.begin(),s.end(),s.begin(), ::tolower);
    map<char,int> m;
    m.insert(pair<char,int>(s[0],1));
    for(int i=1;i<s.length();i++)
    {
        if(m.find(s[i])==m.end())
            m.insert(pair<char,int>(s[i],1));
        else
            m[s[i]]=m[s[i]]+1;

    }
    if(m.size()==27)
        return "pangram";
    return "not pangram";


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
