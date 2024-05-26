// 
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    Node(int dat){
        data=dat;
        next=NULL;
    }
};

//Traversal of the given LinkedList
void print(Node*head){
    Node*temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }   
    if(temp==NULL){
        cout<<"-1";
    }
}

// Adds to the start of list
void insertAtHead(Node*&head, int data){
    Node*temp = new Node(data);
    temp->next=head;
    head = temp;
}

//Adds to the end of list
void insertAtTail(Node*&tail , int data){
    Node*it = new Node(data);
    tail->next = it;
    tail = it;
}

//Adds to a given posn in the list
void insertAtPosn(Node*&head, int data, int posn, Node*&tail){
    if(posn==1){
        insertAtHead(head, data);
        return ;
    }
    Node*temp = head;
    int cnt=1;
    while(cnt<posn-1 && temp != NULL){
        temp = temp->next;
        cnt++;
    }
    if(temp->next==tail){
        insertAtTail(tail, data);
        return;
    }

    Node*newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
}


//Delete an element at a given element in the list
void deleteAtPosn(Node*&head, int posn , Node*&tail){
    if(posn == 1){
        Node*temp = head;
        head=head->next;
        temp->next = NULL;
        delete temp;
        return ;
    }

    Node*curr=head,*prev=NULL;
    int cnt = 1;

    while(cnt<posn){
        prev = curr;
        curr=curr->next;
        cnt++;
    }

    if(curr==tail){
        Node*temp = tail;
        prev = NULL;
        tail = prev;
        delete temp;
        return ;
    }

    prev->next = curr->next;
    curr->next= NULL;
    delete curr;
    return ;
}

void print2 (int*a){
    cout<<a;
}
int main(){

    // Node*temp = new Node(10);       // Curr List = 10

    // Node*head = temp;
    // Node*tail = temp;
    
    // insertAtHead(head, 12);     // Curr List = 12->10
    // insertAtHead(head, 13);     // Curr List = 13->12->10
    // insertAtTail(tail, 15);     // Curr List = 13->12->10->15
    // insertAtTail(tail, 16);     // Curr List = 13->12->10->15->16
    // insertAtPosn(head, 20, 2, tail);// Curr List = 13->20->12->10->15->16
    // insertAtPosn(head, 21, 4, tail);// Curr List = 13->20->12->21->10->15->16
    // print(head);        //Output - > 13 20 12 21 10 15 16 -1
    // cout<<endl;
    // deleteAtPosn(head, 2, tail); // Curr List = 13->12->21->10->15->16
    // print(head);         //Output - > 13 12 21 10 15 16 -1
    // // 13 12 21 10 15 16


    return 0;
}

