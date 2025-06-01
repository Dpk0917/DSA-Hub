#include <iostream>
#include <stack>

using namespace std;

class Stack{
    //properties
    public:
        int *arr;
        int top;
        int size;

    //behaviour
    Stack(int size){
        this->size=size; //size ko initialize kr diya hai yaha pe
        arr=new int[size]; //dynamically memory allocation
        top=-1;
    }

    void push(int element){
        if(size-top > 1){
           top++;
           arr[top]=element; 
        }else{
            cout<<"Stack is overflow"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }else{
            cout<<"Stack is underflow"<<endl;
        }
    }

    int peek(){
        if(top>=0 && top<size){
            return arr[top];
        }else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }else{
            return false;
        }
    }
};


int main(){

    /*                      //using stl

    //creating a stack
    stack<int>s;

    //push operation
    s.push(2);
    s.push(4);

    //pop operation
    s.pop();

    cout<<"printing top element "<<s.top()<<endl;

    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }else{
        cout<<"Stack is not empty"<<endl;
    }

    cout<<"Size of stack is "<<s.size()<<endl;

    */

    Stack st(5);

    st.push(8);
    st.push(10);
    st.push(11);
    st.push(9);
    st.push(22);
    st.push(13);

    cout<<"Top element "<<st.peek()<<endl;

    st.pop();

    cout<<"Top element "<<st.peek()<<endl;

    st.pop();

    cout<<"Top element "<<st.peek()<<endl;

    st.pop();

    cout<<"Top element "<<st.peek()<<endl;

    if(st.isEmpty()){
        cout<<"Stack is empty"<<endl;
    }else{
        cout<<"Stack is not empty"<<endl;
    }

    return 0;
}
