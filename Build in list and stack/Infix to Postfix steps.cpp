#include <bits/stdc++.h>
using namespace std;

int prec(char ch)
{
  if(ch=='+' || ch=='-')
  {
    return 0;
  }
  // * or /
  return 1;
}

void printStack(stack<char> st)
{
  cout << "Stack: ";
  while (!st.empty())
  {
    cout << st.top() << " ";
    st.pop();
  }
  cout << endl;
}

int main()
{
  string s;
  cin>>s;
  stack<char>st;
  string ans="";

  cout << "Initial expression: " << s << endl;

  for(int i=0;i<s.size();i++)
  {
    char now = s[i];
    if(now >='a' && now <= 'z')
    {
      ans += now;
    }
    else{
      // Print the stack before popping
      printStack(st);

      while(st.size() && prec(st.top()) >= prec(now) )
      {
        ans += st.top();
        st.pop();
      }
      st.push(now);
    }
  }

  // Print the stack before popping
  printStack(st);

  while(st.size())
  {
    ans += st.top();
    st.pop();
  }

  cout<<ans<<"\n";

  return 0;
}
