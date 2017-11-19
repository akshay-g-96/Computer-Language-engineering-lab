#include <iostream>
using namespace std;

int nodeId = 1;

class Node{
	public:
		Node *lptr,*rptr;
		int id;
		int visited;
		char data;
		int lvalue,rvalue;
		
		Node(){
			lvalue = -1;
			rvalue = -1;
			lptr = NULL;
			rptr = NULL;
			id = nodeId++;
			visited = 0;
		}
};

class List{
	public:
		Node *head;

		List(){
			head = NULL;
		}

		void createNode(char info){
			Node *temp = new Node();
			temp->data = info;

			head = temp;

			Node *temp2 = new Node();
			temp2->data = '$';

			temp->rptr = temp2;
			temp->rvalue = temp2->id;
		}

		
		void star(){
			Node *temp1 = new Node();
			temp1->data = '#';
			Node *temp2 = new Node();
			temp2->data = '$';

			Node *cur = head;

			temp1->lptr = cur;
			temp1->lvalue = cur->id;

			temp1->rptr = temp2;
			temp1->rvalue = temp2->id;

			while(cur->rptr!=NULL){
				cur = cur->rptr;
			}

			cur->data = '#';
			cur->rptr = temp2;
			cur->rvalue = temp2->id;

			cur->lptr = head;
			cur->lvalue = head->id;

			head = temp1;
		}

		void display(){
			BFS(head);
			initVisited(head);
		}

		void BFS(Node *h){
			if(h==NULL){
				return;
			}

			if(h->visited!=1)
				cout<<h->data<<" "<<h->id<<" "<<h->lvalue<<" "<<h->rvalue<<endl;
			else
				return;

			h->visited = 1;

			BFS(h->lptr);
			BFS(h->rptr);		
		}

		void initVisited(Node *h){
			if(h == NULL)
				return;

			if(h->visited == 0)
				return;

			h->visited = 0;
			initVisited(h->lptr);
			initVisited(h->rptr);
		}
};


int main(){
	List l1;
	l1.createNode('a');
	l1.star();
	l1.display();
}
