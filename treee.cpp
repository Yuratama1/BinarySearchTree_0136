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
            currentnode = root;
            parent = nullptr;
            while((currentnode != nullptr) && (currentnode->info != element)){
                parent = currentnode;
                if(element < currentnode->info)
                    currentnode = currentnode->leftchild;
                else
                    currentnode = currentnode->rightchild;
            }
        }

        void insert(){
            int x;
            cout << "Masukkan Nilai: ";
            cin >> x;

            //step1 alokasi memeory untuk newnode
            node *newnode = new node();

            //step2 tandain nilai pada data = newnode
            newnode->info = x;

            //step 3 buat left dan right child jadi newnode = null
            newnode->leftchild = nullptr;
            newnode->rightchild = nullptr;

            //step4 lokasi node parent = null
            node *parent = nullptr;
            node *currentnode = nullptr;
            search(x, parent, currentnode);

            
};
