#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++) 
    {
        string s; cin >> s;
        if (s == "Inf")cout << "0" << endl;
        else if (s == "nan")cout << "NaN" << endl;
        else if (s == "+0")cout << "inf" << endl;
        else 
        {
            double v = stod(s); //将string转换成double
            printf("%.6lf\n",1.0/v);
        }
    }
    
    return 0;
}
