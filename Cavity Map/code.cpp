#include <bits/stdc++.h>

using namespace std;

// Complete the cavityMap function below.
vector<string> cavityMap(vector<string> grid) {
    vector<string> r;
    string m;
    int row=grid.size();
    
    int left=stoi(grid[0].at(2));
    cout<<"left :: "<<left;
    /*for(int i=1;i<row-1;i++)
    {
        int col=grid[i].length();
        for(int j=1;j<col-1;j++)
        {
            m="";
            int left=stoi(grid[i].at(j-1));
            int right=stoi(grid[i].at(j+1));
            int top=stoi(grid[i-1].at(j));
            int down=stoi(grid[i+1].at(j));
            int val=stoi(grid[i].at(j));
            if(val>top && val>down && val>left && val>right)
            {
                m=m+grid[i];
                m.replace(j,j,"X");
                r.push_back(m);

            }
        }
    }*/
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
