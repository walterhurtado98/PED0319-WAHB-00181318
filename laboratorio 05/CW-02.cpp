#include<iostream>
#include<string>
using namespace std;

struct node{
    string content,  address;
    float weight;
    node* next;

};
typedef node* st;

int main(void){
    st pSt = NULL;

}

void push(st* pSt, string content, string address, float weight){
    node* newNode = new node;
    newNode->address = address;
    newNode->content = content;
    newNode->weight = weight;

    newNode->next = *pSt;
    *pSt = newNode;

}

node top(st* pSt){
    if(!(*pSt)){
        node aux;
        aux.address = "";
        aux.content = "";
        aux.weight = 0;
        aux.next = NULL;

        return aux;
    }
    else{
        aux.address = (*pSt)->address;
        aux.content = (*pSt)->content;
        aux.weight = (*pSt)->weight;
        aux.next = NULL;

        (*pSt) = (*pSt)->next;

    }
    return aux;
}
