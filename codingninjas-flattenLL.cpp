/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *child;
 *		Node() : data(0), next(nullptr), child(nullptr){};
 *		Node(int x) : data(x), next(nullptr), child(nullptr) {}
 *		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
 * };
 */
Node*mergesort(Node*lista,Node*listb){
	if(lista==NULL){
		return listb;
	}

	if(listb==NULL){
		return lista;
	}

	Node*result=NULL;

	while(lista!=NULL && listb!=NULL){
		if(lista->data < listb->data){
			result=lista;
			result->child=mergesort(lista->child,listb);
		}else{
			result=listb;
			result->child=mergesort(lista,listb->child);
		}

		result->next=NULL;
		return result;
	}
}
Node* flattenLinkedList(Node* head) 
{
	// Write your code here
	if(head==NULL || head->next==NULL){
		return head;

	}

	head->next=flattenLinkedList(head->next);

	head=mergesort(head,head->next);

	return head;
}
