#include<iostream>
#include<string>
using namespace std;

struct node{
    string word;
    node* left,* right; 

};

int main (void){
    node* pTree = NULL;
    insertInTree(&pTree, "Hola");
    insertInTree(&pTree, "Pupusas");
    insertInTree(&pTree, "Codigo");
    insertInTree(&pTree, "Adios");
    insertInTree(&pTree, "F");

    return 0;
}

node* createLeaf(string word){
    node* leaf = new node;
    leaf->word = word;
    leaf->left = NULL;
    leaf->right = NULL;
    
    return leaf;
}

void insertInTree(node** pTree, string word){
    if(!*pTree)
    *pTree = createLeaf(word);
    else{
        
    }
} 