#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    if (n < 1 || n > 1000000) 
    {
        return 0;
    } 
    else 
    {
        int b[21] = {0}; 
        int i = 0;

        while (n > 0) 
        {
            if ((n & 1) == 1) 
            {
                b[i]++;
            } 
            else 
            {
                i++;
                b[i] = 0;
            }
            
            n = n >> 1;
        }

        int max = b[0];
        for (i = 0; i < 21; i++) 
        {
            if (b[i] > max) 
            {
                max = b[i];
            }
        }

        printf("%d", max);
        return 0;
    }
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
