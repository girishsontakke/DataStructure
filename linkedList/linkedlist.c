#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *next;
} Node;

Node* insert(Node*, int);
void Print(Node* );
Node* reverse(Node*);
Node* reverseUtil(Node*, Node*);

int main() {
  Node* list;
  list = insert(list, 1);
  list = insert(list, 2);
  list = insert(list, 3);
  list = insert(list, 4);
  list = insert(list, 5);
  list = insert(list, 9);
  Print(list);
  list = reverse(list);
  Print(list);
}

Node* insert(Node* head, int data){
  Node* temp = (Node*)malloc(sizeof(Node));
  temp->next = NULL;
  temp->data = data;
  if(head==NULL){
    head = temp;
    return head;
  }else{
    Node* temp1 = head;
    while(temp1->next != NULL) temp1=temp1->next;
    temp1->next = temp;
    return head;   
  }
}

void Print(Node* head){
  Node* temp = head;
  while(temp != NULL){
    printf("%d ", temp->data);
    temp = temp->next;
  }
  printf("\n");
}

Node* reverse(Node* head){
  return reverseUtil(head, NULL);
}

Node* reverseUtil(Node* head, Node* prev){
  if(head==NULL) return prev;
  Node* next = head->next;
  head->next=prev;
  prev = head;
  head = next;
  return reverseUtil(head, prev);
}