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

            //step5 jika parent null(tree is empty)
            if(parent == nullptr){
                //5a buat mark newnode untuk root
                root = newnode;

                //5b exit
                return;
            }

            //step6 jika niali data = newnode is less that parent
            if(x < parent->info){
                //6a buat leftchild dari perent point ke newnode
                parent->leftchild = newnode;

                //6b exit
                return;
            }

            //step7 jika nilai data of newnode benar maka
            else if(x >parent->info){
                //7a buat tanda rigt dari parent point to newnode
                parent->rightchild = newnode;

                //7b exit
                return;
            }
        }

        bool isEmpty(){
        //check jika tree empty
        return root == nullptr;
        }

        void inorder(node *ptr){
            if(isEmpty()){
                cout << "Tree is empty" << endl;
                return;
            }
            if(ptr == nullptr)
                return;

            inorder(ptr->leftchild);
            cout << ptr->info << " "; //parent
            inorder(ptr->rightchild);
            }

        void preorder(node *ptr){
            if(isEmpty()){
                cout << "Tree is empty" << endl;
                return;
            }
            if(ptr == nullptr)
                return;

            cout << ptr->info << " "; //parent
            preorder(ptr->leftchild);
            preorder(ptr->rightchild);
        }

        
};