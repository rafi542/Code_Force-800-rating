#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int g, i, j, h, cn, n, k, t, f, a, m;
  long long int mid, left, right, s, sum, stop, sum1, start;
  long long s1;
  vector<int>v;
  vector<int>v1;
  cin >> t;
  while(t--)
  {
    cin >> n >> m;
    s = 0;
    s1 = 0;
    if(n%2 == 0)
      s++;
    if(m%2 == 0)
      s1++;  
    if(s != s1)  
      cout << "Alice" << endl;
    if(s == s1) 
      cout << "Bob" << endl;
  }  
}  
