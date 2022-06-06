#include<iostream>
#include<queue>
using namespace std;
int main()
{
	priority_queue<int, vector<int>, greater<int>> q;//优先队列
    	for(int t;cin>>t;q.push(t));//输入
    /*
    可以写成
    int t;
    while(cin>>t)
        q.push(t);
    */
	for (;!q.empty();cout << q.top() << endl,q.pop());//输出
    /*
    可以写成
    while(!q.empty())
    {
        cout<<q.top();
        q.pop();
    }
    */
}
