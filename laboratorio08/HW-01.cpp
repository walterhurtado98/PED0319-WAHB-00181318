#include <iostream>
#include <string>
using namespace std;

struct personalData{
    string 1stName,2ndName;
    string ID;
};typedef personalData;

struct node{
    Data information;
    node* left,* right;
};

void InsertInTree(node** pTree,string word);

int main(){
Data T;

node* pTree=NULL;
    cout<<"Ingrese su nombre:  "<<endl;
    getline(cin,T.Name);
    cout<<"Ingrese su apellido: "<<endl;
    getline(cin,T.2ndName);
    cout<<"ingrese su ID:   "<<endl;
    getline(cin,T ID);
    InsertInTree(&pTree,T.Name);
    InsertInTree(&pTree,T.2ndName);
    InsertInTree(&pTree,T ID);
return 0;
}


node* creatleaf(Data information){

    node* leaf = new node;
    leaf->information=information;
    leaf->left=NULL;
    leaf->right=NULL;
    
    return leaf;
}

void InsertInTree(node** pTree,Data information){
    if(!*pTree)
        *pTree=creatleaf(information);
    else{
        InsertInTree(&(*(*pTree)).left,information);

    }
}