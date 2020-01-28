#include<iostream>
using namespace std;

struct node{
    int number;
    node* next;
};

int main(void){
    node* pStart = NULL;
    pStart = addStack(pStart, 8);
     pStart = addStack(pStart, 5);
}

node* addStack(node* list, int n){

}

node* addQueue(node* list, int n){

}

void printElements(node* list){
    if(!list)
    return;
    else{
        cout << list->number << endl;
        printElements(list->next);
    }
}

node* addStack(node* list, int n){
    node* newNode = new node;
    newNode->number = n;

    newNode->next = list;
    list = newNode;

    return list;
}

node* addQueue(node* list, int n){
    node* newNode = new node;
    newNode->number = n;

    if(!list)
        list = newNode;
    else{
        node* aux = list;

        while(!aux->next)
          aux = aux->next;

          aux->next = newNode;
    }
    
    return list;
}