#include <bits/stdc++.h>

using namespace std;


class DataStructure{
  public:
    stack<int> s;
    queue<int> q;
    priority_queue<int> pq;
    vector<int> v;
    pair<int,int> p = make_pair(0,10);

    // dynamic memory allocation
    int *p = new int(25);

    

// pushing the data
    void StackPush(int a){
      s.push(a);
    }

    void QueuePush(int b){
      q.push(b);
    }

    void PriorityQueue(int c){
      pq.push(c);
    }

    void PrintStack(){
      while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
      }

    }

    void PrintQueue(){
      while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
      }
    }

    void PrintPriorityQueue(){
      while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
      }
    }



};

int main()
{
  
  DataStructure ds;
  ds.StackPush(10);
  ds.StackPush(20);
  ds.StackPush(30);

  ds.PriorityQueue(5);
  ds.PriorityQueue(10);
  ds.PriorityQueue(8);

  ds.QueuePush(10);
  ds.QueuePush(20);
  ds.QueuePush(30);

  ds.PrintStack();
  ds.PrintPriorityQueue();
  ds.PrintQueue();

  ds.v.push_back(1);
  ds.v.push_back(2);
  ds.v.push_back(3);
  ds.v.push_back(4);

  ds.v[1] = 200;

  cout<<ds.v[1]<<endl;
  cout<<ds.p.first<<endl;
  cout<<ds.p.second<<endl;

}