#include<iostream>
#include<queue>

using namespace std;

int main(){

    queue<int>q;

    q.push(2); 
    cout<<"Front of q is :"<<q.front()<<endl;
    q.push(12);
    cout<<"Front of q is :"<<q.front()<<endl;
    q.push(22);
    cout<<"Front of q is :"<<q.front()<<endl;

    cout<<"Size of queue is :"<<q.size()<<endl;

    q.pop();
    cout<<"Front of q is :"<<q.front()<<endl;
    cout<<"Size of queue is !:"<<q.size()<<endl;

    if(q.empty()){
        cout<<"queue is empty"<<endl;
    }else{
        cout<<"queue is not empty"<<endl;
    }




    queue<int> q1;
    queue<int> q2;

    q1.push(1);
    q1.push(2);
    q2.push(10);
    q2.push(20);
    q2.push(30);

    cout << "Before swap:\n";
    cout << "q1 front: " << q1.front() << ", q2 front: " << q2.front() << "\n";

    q1.swap(q2); // or std::swap(q1, q2);

    cout << "After swap:\n";
    cout << "q1 front: " << q1.front() << ", q2 front: " << q2.front() << "\n";

    return 0;
}