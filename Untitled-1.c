#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* head = NULL;
void append(int data){
    struct Node*new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;
    if (head==NULL) {
        head = new_node;
        new_node->next = head;
    }else{
        struct Node* temp=head;
        while (temp->next != head){
            temp = temp->next;
        }
        temp->next=new_node;
        new_node->next=head;

    }
}
void print_list(){
    if (head==NULL) {
        printf("List is empty\n");
        return;
    }
    struct Node*temp= head;
    do {
        printf("%d ", temp->data);
        temp=temp->next;

    }while (temp != head);
    printf("(back to head)\n");
}
int main(){
    append(10);
    append(20);
    append(30);
    print_list();
    return 0;
}
