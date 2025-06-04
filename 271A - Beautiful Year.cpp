#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int  i, j, a, g, k, t, b, cnt=1, sum=0, f=0, gr=0;
  string s;
  cin >> t;
  t += 1;
  s = to_string(t);
  for(i=0; i<s.size()-1; i++)
  {
    for(j=1+i; j<s.size(); j++){
      if(s[i] == s[j])
     {
       t += 1;
       s = to_string(t);
       i = -1;
       break;
     }
    }  
  }
  cout << s << endl;  
}  
