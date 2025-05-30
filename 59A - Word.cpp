#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int  i, n, g, lar=0, sma=0, cnt=0, t, f, sum=0;
  string s;
  cin >> s;
  for(i=0; i<s.size(); i++)
  {
    g = s[i];
    if(g>=65 && g<=90)
      lar++;
    else
      sma++;  
  }
  if(lar > sma)
  {
    for(i=0; i<s.size(); i++)
    {
      g = s[i];
      if(g>=97 && g<=122)
        g -= 32;
      s[i] = g;
      cout << s[i];
    }
  }
  else
  {
    for(i=0; i<s.size(); i++)
    {
      g = s[i];
      if(g>=65 && g<=90)
        g += 32;
      s[i] = g;
      cout << s[i];
    }
  }
}  
