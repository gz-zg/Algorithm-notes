// #include <bits/stdc++.h>
// using namespace std;
// typedef long long LL;
// const int INF = 0x3f3f3f3f;
// const int mod = 1e9 + 7; 
// const int N = 100010;

// #define x first
// #define y second

// int a[10010];
// int sign[10010];
// priority_queue<pair<pair<int,int>,int>,vector<pair<pair<int,int>,int>>,greater<pair<pair<int,int>,int>>>dui;

// int main()
// {
//     int n,k; cin>>n>>k;
//     for(int i=1;i<=n;i++)
//     {
//         scanf("%d",&a[i]);
//         dui.push({{a[i],i},sign[i]});
//     }

//     while(k)
//     {
//         auto t = dui.top();
//         dui.pop();
//         if(t.y==sign[t.x.y])
//         {
//             k--;

//             sign[t.x.y]=-1;

//             int l=0;
//             for(int i=t.x.y-1;i>=1;i--)
//                 if(sign[i]!=-1)
//                     {
//                         l=i;
//                         break;
//                     }
//             if(l>=1 && l<=n)
//             {
//                 sign[l]++; 
//                 a[l]+=t.x.x; 
//                 dui.push({{a[l],l},sign[l]});
//             }

//             int r=n+1;
//             for(int i=t.x.y+1;i<=n;i++)
//                 if(sign[i]!=-1)
//                 {
//                     r=i;
//                     break;
//                 }
//             if(r>=1 && r<=n)
//             {
//                 sign[r]++;
//                 a[r]+=t.x.x;
//                 dui.push({{a[r],r},sign[r]});
//             }
//         }
//     }

//     for(int i=1;i<=n;i++)
//         if(sign[i]!=-1)
//             cout<<a[i]<<" ";

//     return 0;
// }