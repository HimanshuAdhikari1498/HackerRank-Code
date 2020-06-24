#include <bits/stdc++.h>

using namespace std;

// Complete the matchingStrings function below.
vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    map<string,int> h;
    vector<int> r;
    h.insert(pair<string,int>(strings[0],1));
    for(int i=1;i<strings.size();i++)
    {
        if(h.find(strings[i])==h.end())
        {
            h.insert(pair<string,int>(strings[i],1));
            //cout<<"\nINSIDE IF "<<strings[i]<<h[strings[i]]<<"\n";
        }
        else
        {
            h[strings[i]]++;
            //int a=h[strings[i]];
            //a=a+1;
            //h.insert(pair<string,int>(strings[i],a));
            //cout<<"\nINSIDE ELSE "<<strings[i]<<h[strings[i]]<<"\n";
        }
    }
    for(int i=0;i<queries.size();i++)
    {
        if(h.find(queries[i])==h.end())
        {
            r.push_back(0);
        }
        else
        {
            r.push_back((h.find(queries[i]))->second);
        }
    }
    return r;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int strings_count;
    cin >> strings_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> strings(strings_count);

    for (int i = 0; i < strings_count; i++) {
        string strings_item;
        getline(cin, strings_item);

        strings[i] = strings_item;
    }

    int queries_count;
    cin >> queries_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> queries(queries_count);

    for (int i = 0; i < queries_count; i++) {
        string queries_item;
        getline(cin, queries_item);

        queries[i] = queries_item;
    }

    vector<int> res = matchingStrings(strings, queries);

    for (int i = 0; i < res.size(); i++) {
        fout << res[i];

        if (i != res.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
