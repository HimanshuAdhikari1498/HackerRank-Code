#include <bits/stdc++.h>

using namespace std;

// Complete the cavityMap function below.
vector<string> cavityMap(vector<string> grid) {
    vector<string> r;
    string m;
    for(int i=0;i<grid.size();i++)
    {
        if(i==0 || i==grid.size()-1)
        {
            r.push_back(grid[i]);
            continue;
        }
        else
        {
            m=grid[i];
            for(int j=1;j<grid[i].length()-1;j++)
            {
                int left=stoi(to_string(grid[i].at(j-1)-'0'));
                int right=stoi(to_string(grid[i].at(j+1)-'0'));
                int top=stoi(to_string(grid[i-1].at(j)-'0'));
                int down=stoi(to_string(grid[i+1].at(j)-'0'));
                int val=stoi(to_string(grid[i].at(j)-'0'));
                if(val>top && val>down && val>left && val>right)
                {
                    m.replace(j,1,"X");
                }
            }
        }
            r.push_back(m);
    }
    return r;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> grid(n);

    for (int i = 0; i < n; i++) {
        string grid_item;
        getline(cin, grid_item);

        grid[i] = grid_item;
    }

    vector<string> result = cavityMap(grid);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
