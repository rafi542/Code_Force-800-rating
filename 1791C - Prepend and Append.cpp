#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t, a, j, k, n, g, cnt=0, h, i, m, len;
  string ch;
  cin >> t;
  while(t--)
  {
    cin >> n;
    cin >> ch;
    j=ch.size()-1;
    for(i=0; i<ch.size(),j>=0; j--)
    {
      if(ch[i] != ch[j])
      {
        if(ch.size() == 1)
          break;
        ch.pop_back();
        reverse(ch.begin(),ch.end());
        ch.pop_back();
        j=ch.size();
      }
      else
       break;
    }
     cout << ch.size() << endl;
  }
}
