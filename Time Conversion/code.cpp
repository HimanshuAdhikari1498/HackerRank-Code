#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    string r = s.substr(0, 8);
    string AP = s.substr(s.size() - 2);
    string h = s.substr(0, 2);
    if(AP=="AM" && h=="12")
    {
        r[0] = r[1] = '0';
    }
    else if(AP=="PM" && h!="12") 
    {
        int hr = stoi(h);
        hr = (hr + 12) % 24;
        stringstream ss;
        ss << hr;
        r[0] = ss.str()[0];
        r[1] = ss.str()[1];
    }
    return r;

    /*
     * Write your code here.
     */

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
