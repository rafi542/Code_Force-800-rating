#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t, a, j=1, k, n, g, cnt=0, h, i, m;
  int x=1, y=1;
  int x1, y1;
  string ch, s=" ";
  cin >> t;
  while(t--)
  {
    cin >> n;
    cin >> ch;
    string s(n, ' '); // Initialize string `s` with size n and fill it with spaces.
    //Without initialize it will give runtime error because it doesn't ensure that it has enough capacity to hold values of ch.
    cnt = 0;
    for(i=0; i<n; i++)
    {
      if(i==0){
      s[i] = ch[i];
      cnt += 2;
      }
      else
      {
        if(ch[i] == '1')
          continue;
        else
        {
          s[i] = ch[i];
          cnt += 2;
        } 
      }
      m = n;
      k = i;
      while(k<m-1)
      {
        if(s[i] == ch[k+1]){
          cnt += 1;
          ch[k+1] = '1';
        } 
        k++; 
      }
    }
    cout << cnt << endl;
  }
}
