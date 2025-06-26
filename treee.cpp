#include <iostream>
using namespace std;

class node{
    public:
        int info;
        node *leftchild;
        node *rightchild;

        //constructor untuk class node
        node(){
            leftchild = nullptr; // inisiasi left child ke null
            rightchild = nullptr;// insisisi right child ke null
        }
};

class binarytree{
    public:
        node *root;
        binarytree(){
            root = nullptr; // inisiasi root ke null
        }

        void search(int element, node *&parent, node *&currentnode){
            //ini fungsi search untuk currentnode spesifik
            
};
