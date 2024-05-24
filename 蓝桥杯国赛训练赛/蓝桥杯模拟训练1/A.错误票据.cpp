#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{   
    int t; cin>>t;
    
    int x;
    vector<int>a;
    while(cin>>x){a.push_back(x);}
    sort(a.begin(),a.end());

    int m,n;
    for(int i=1;i<a.size();i++)
    {
        if(a[i]==a[i-1]+2)m=a[i]-1;
        if(a[i]==a[i-1])n=a[i];
    }
        
    cout<<m<<" "<<n<<endl;    

    return 0;
}