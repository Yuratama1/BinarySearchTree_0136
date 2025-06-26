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
            rightchild = nullptr;
        }
};
