#include <bits/stdc++.h> 
void sortedInsert(stack<int> &s, int x){

	if(s.empty() || x>s.top()){
		s.push(x);
		return;
	}

	int num=s.top();
	s.pop();

	sortedInsert(s,x);

	s.push(num);
}
void sortStack(stack<int> &stack)
{
	// Write your code here

	//base case
	if(stack.empty()){
		return;
	}
	int num=stack.top();
	stack.pop();

	//recursive call
	sortStack(stack);

	sortedInsert(stack,num);

}