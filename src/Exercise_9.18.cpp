#include<deque>
#include<string>
#include<iostream>
using namespace std;

int main()
{
   string str;
   deque<string> dq;
   while(cin >> str)
      dq.push_back(str);

   for(auto iter = dq.begin(); iter != dq.end(); ++iter)
      cout << *iter << endl;
   return 0;
}
