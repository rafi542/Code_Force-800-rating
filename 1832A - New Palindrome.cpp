#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t, f, len1;
  string ch;
  cin >> t;
  while(t--)
  {
    cin >> ch;
    f = 0;
    if(ch.size() == 2 || ch.size() == 3){
      cout << "NO" << endl;
      continue;
    }
    int len = ch.size();
    if(len%2 != 0)
      len1 = (len/2) - 1;
    else
      len1 = (len/2) + 1;  
    for(int i=0; i<len1; i++){
     if(ch[i] != ch[i+1] && ch[len-(i+1)] != ch[len-(i+2)]){
       f = 1;
       break;
      }  
    } 
    if(f==1)  
      cout << "YES" << endl;
    else
      cout << "NO" << endl;  
  }
}
