# 最大连续子序列和->闫式dp分析法
- 状态表示: $f[i]$ , 以 $i$ 结尾的所有子序列的和的最大值
- 状态计算: $dp[i] = max(dp[i - 1] + a[i], a[i])$

1.***`最大连续子序列和`*** 

```cpp
int res = -2e9;   
for(int i = 1; i <= n; i ++ )
{
    cin >> a[i];
    dp[i] = max(dp[i - 1] + a[i], a[i]);
    res = max(res, dp[i]);
}
```

2.***`最小连续子序列和`*** 思路：对数组全部取负，然后跑最大连续子段和，然后对res取负

```cpp
int res = -2e9; 
for(int i = 1; i <= n; i ++ )
{
    cin >> a[i];
    dp[i] = max(dp[i - 1] - a[i], -a[i]);
    res = max(res, dp[i]);
}
res = - res;
```