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

void insertAtTail(Node*&tail , int data){
    Node*it = new Node(data);
    tail->next = it;
    tail = it;
}

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


int main(){

    Node*temp;

    int size;
    cin>>size;
    int ele1;
    cin>>ele1;

    temp = new Node(ele1);
    Node*head = temp;
    Node*tail = temp;
    
    for(int i =1;i<size;i++){
        int d;
        cin>>d;
        insertAtTail(tail, d);

    }

    print(head);

    return 0;
}
