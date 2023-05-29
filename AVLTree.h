#pragma once
#include <iostream>
#include <fstream>
#include "LinkedList.h"
using namespace std;

template <typename T>
class ANode {

public:

    
    T data;

    LinkedList list;
    string fileName;
    ANode<T>* left;
    ANode<T>* right;
    ANode<T>* ancestor;
    bool helper;
    ANode() {

        helper = 0;	
        left = NULL;
        right = NULL;
        ancestor = NULL;

    }

};

template <typename T>
class AVLTree {
    ANode<T>* root;
    ANode<T>* nullANode;
public:



    void initializeNullANode(ANode<T>* n, ANode<T>* ancestor) {

        n->data = NULL;
        n->ancestor = ancestor;
        n->left = NULL;
        n->right = NULL;
        n->helper = 0;   // black, initially

    }

    // Preorder
    void preOrderHelper(ANode<T>* n) {

        if (n != nullANode) {

            cout << n->data << " ";
            preOrderHelper(n->left);
            preOrderHelper(n->right);

        }

    }

    // Inorder
    void inOrderHelper(ANode<T>* n) {

        if (n != nullANode) {

            inOrderHelper(n->left);
            cout << n->data << " ";
            inOrderHelper(n->right);

        }
    }

    string getRightChildPath(ANode<T>* n) {
        return n->right->fileName;
    }

    string getLeftChildPath(ANode<T>* n) {
        return n->left->fileName;
    }

    bool fileExists(string fileName)
    {
        ifstream infile(fileName);
        return infile.good();
    }

    void insertDataToFiles(ANode<T>* n) {
        if (n != nullANode) {

            string path1 = getLeftChildPath(n);
            string path2 = getRightChildPath(n);
            string ancestorPath1 = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedIDS\\";
            string ancestorPath2 = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedIDS\\";
            ancestorPath1 += path1;
            ancestorPath2 += path2;
            string orig_path = n->fileName;
            string filePath = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedIDS\\";
            filePath += orig_path;
            LNode* tempNode = new LNode();
            tempNode = n->list.head;
            ofstream ok;
            ok.open(filePath, ios::out);
            ok << ancestorPath1 << endl << ancestorPath2 << endl;

            while (tempNode != NULL) {
                ok << tempNode->data << endl;
                tempNode = tempNode->next;
            }

            ok.close();



            insertDataToFiles(n->left);
            insertDataToFiles(n->right);

        }
    }

    void insertDataToFilesYear(ANode<T>* n) {

        if (n != nullANode) {

            string path1 = getLeftChildPath(n);
            string path2 = getRightChildPath(n);
            string ancestorPath1 = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedYears\\";
            string ancestorPath2 = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedYears\\";
            ancestorPath1 += path1;
            ancestorPath2 += path2;
            string orig_path = n->fileName;
            string filePath = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedYears\\";
            filePath += orig_path;
            LNode* tempNode = new LNode();
            tempNode = n->list.head;
            ofstream ok;
            ok.open(filePath, ios::out);
            ok << ancestorPath1 << endl << ancestorPath2 << endl;

            while (tempNode != NULL) {
                ok << tempNode->data << endl;
                tempNode = tempNode->next;
            }

            ok.close();



            insertDataToFilesYear(n->left);
            insertDataToFilesYear(n->right);

        }
    }

    void insertDataToFilesState(ANode<T>* n) {

        if (n != nullANode) {

            string path1 = getLeftChildPath(n);
            string path2 = getRightChildPath(n);
            string ancestorPath1 = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedStates\\";
            string ancestorPath2 = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedStates\\";
            ancestorPath1 += path1;
            ancestorPath2 += path2;
            string orig_path = n->fileName;
            string filePath = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedStates\\";
            filePath += orig_path;
            LNode* tempNode = new LNode();
            tempNode = n->list.head;
            ofstream ok;
            ok.open(filePath, ios::out);
            ok << ancestorPath1 << endl << ancestorPath2 << endl;

            while (tempNode != NULL) {
                ok << tempNode->data << endl;
                tempNode = tempNode->next;
            }

            ok.close();



            insertDataToFilesState(n->left);
            insertDataToFilesState(n->right);

        }
    }

    void insertDataToFilesCauses(ANode<T>* n) {

        if (n != nullANode) {

            string path1 = getLeftChildPath(n);
            string path2 = getRightChildPath(n);
            string ancestorPath1 = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedCauses\\";
            string ancestorPath2 = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedCauses\\";
            ancestorPath1 += path1;
            ancestorPath2 += path2;
            string orig_path = n->fileName;
            string filePath = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedCauses\\";
            filePath += orig_path;
            LNode* tempNode = new LNode();
            tempNode = n->list.head;
            ofstream ok;
            ok.open(filePath, ios::out);
            ok << ancestorPath1 << endl << ancestorPath2 << endl;

            while (tempNode != NULL) {
                ok << tempNode->data << endl;
                tempNode = tempNode->next;
            }

            ok.close();



            insertDataToFilesCauses(n->left);
            insertDataToFilesCauses(n->right);

        }
    }

    void insertDataToFilesCauses113(ANode<T>* n) {

        if (n != nullANode) {

            string path1 = getLeftChildPath(n);
            string path2 = getRightChildPath(n);
            string ancestorPath1 = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedCauses113\\";
            string ancestorPath2 = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedCauses113\\";
            ancestorPath1 += path1;
            ancestorPath2 += path2;
            string orig_path = n->fileName;
            string filePath = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedCauses113\\";
            filePath += orig_path;
            LNode* tempNode = new LNode();
            tempNode = n->list.head;
            ofstream ok;
            ok.open(filePath, ios::out);
            ok << ancestorPath1 << endl << ancestorPath2 << endl;

            while (tempNode != NULL) {
                ok << tempNode->data << endl;
                tempNode = tempNode->next;
            }

            ok.close();



            insertDataToFilesCauses113(n->left);
            insertDataToFilesCauses113(n->right);

        }
    }

    void insertDataToFilesDeaths(ANode<T>* n) {

        if (n != nullANode) {

            string path1 = getLeftChildPath(n);
            string path2 = getRightChildPath(n);
            string ancestorPath1 = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedDeaths\\";
            string ancestorPath2 = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedDeaths\\";
            ancestorPath1 += path1;
            ancestorPath2 += path2;
            string orig_path = n->fileName;
            string filePath = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedDeaths\\";
            filePath += orig_path;
            LNode* tempNode = new LNode();
            tempNode = n->list.head;
            ofstream ok;
            ok.open(filePath, ios::out);
            ok << ancestorPath1 << endl << ancestorPath2 << endl;

            while (tempNode != NULL) {
                ok << tempNode->data << endl;
                tempNode = tempNode->next;
            }

            ok.close();



            insertDataToFilesDeaths(n->left);
            insertDataToFilesDeaths(n->right);

        }
    }

    void insertDataToFilesDeathRate(ANode<T>* n) {

        if (n != nullANode) {

            string path1 = getLeftChildPath(n);
            string path2 = getRightChildPath(n);
            string ancestorPath1 = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedDeathRate\\";
            string ancestorPath2 = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedDeathRate\\";
            ancestorPath1 += path1;
            ancestorPath2 += path2;
            string orig_path = n->fileName;
            string filePath = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedDeathRate\\";
            filePath += orig_path;
            LNode* tempNode = new LNode();
            tempNode = n->list.head;
            ofstream ok;
            ok.open(filePath, ios::out);
            ok << ancestorPath1 << endl << ancestorPath2 << endl;

            while (tempNode != NULL) {
                ok << tempNode->data << endl;
                tempNode = tempNode->next;
            }

            ok.close();



            insertDataToFilesDeathRate(n->left);
            insertDataToFilesDeathRate(n->right);

        }
    }

    void plsYear() {
        insertDataToFilesYear(this->root);
    }

    void plsState() {
        insertDataToFilesState(this->root);
    }

    void plsCause() {
        insertDataToFilesCauses(this->root);
    }

    void plsCause113() {
        insertDataToFilesCauses113(this->root);
    }

    void plsDeath() {
        insertDataToFilesDeaths(this->root);
    }

    void plsDeathRate() {
        insertDataToFilesDeathRate(this->root);
    }

    void plsID() {
        insertDataToFiles(this->root);
    }

    // Post order
    void postOrderHelper(ANode<T>* n) {

        if (n != nullANode) {

            postOrderHelper(n->left);
            postOrderHelper(n->right);
            cout << n->data << " ";

        }

    }

    ANode<T>* searchTreeHelper(ANode<T>* n, T val) {

        if (n == nullANode || val == n->data) {

            return n;

        }

        if (val < n->data) {

            return searchTreeHelper(n->left, val);

        }

        return searchTreeHelper(n->right, val);

    }

    // For balancing the tree after deletion
    void postDeleteRotations(ANode<T>* n) {

        ANode<T>* n2;

        while (n != root && n->helper == 0) {

            if (n == n->ancestor->left) {

                n2 = n->ancestor->right;

                if (n2->helper == 1) {

                    n2->helper = 0;
                    n->ancestor->helper = 1;
                    leftRotate(n->ancestor);
                    n2 = n->ancestor->right;

                }

                if (n2->left->helper == 0 && n2->right->helper == 0) {

                    n2->helper = 1;
                    n = n->ancestor;

                }

                else {

                    if (n2->right->helper == 0) {

                        n2->left->helper = 0;
                        n2->helper = 1;
                        rightRotate(n2);
                        n2 = n->ancestor->right;

                    }

                    n2->helper = n->ancestor->helper;
                    n->ancestor->helper = 0;
                    n2->right->helper = 0;
                    leftRotate(n->ancestor);
                    n = root;

                }

            }

            else {

                n2 = n->ancestor->left;

                if (n2->helper == 1) {

                    n2->helper = 0;
                    n->ancestor->helper = 1;
                    rightRotate(n->ancestor);
                    n2 = n->ancestor->left;

                }

                if (n2->right->helper == 0 && n2->right->helper == 0) {

                    n2->helper = 1;
                    n = n->ancestor;

                }
                else {

                    if (n2->left->helper == 0) {

                        n2->right->helper = 0;
                        n2->helper = 1;
                        leftRotate(n2);
                        n2 = n->ancestor->left;

                    }

                    n2->helper = n->ancestor->helper;
                    n->ancestor->helper = 0;
                    n2->left->helper = 0;
                    rightRotate(n->ancestor);
                    n = root;

                }

            }

        }

        n->helper = 0;

    }

    void rbTransplant(ANode<T>* n1, ANode<T>* n2) {

        if (n1->ancestor == NULL) {

            root = n2;

        }

        else if (n1 == n1->ancestor->left) {

            n1->ancestor->left = n2;

        }

        else {

            n1->ancestor->right = n2;

        }

        n2->ancestor = n1->ancestor;

    }

    void deleteANodeHelper(ANode<T>* n, T value) {

        ANode<T>* z = nullANode;
        ANode<T>* x;
        ANode<T>* y;

        while (n != nullANode) {

            if (n->data == value) {

                z = n;

            }

            if (n->data <= value) {

                n = n->right;

            }

            else {

                n = n->left;

            }

        }

        if (z == nullANode) {

            cout << "Key not found in the tree" << endl;
            return;

        }

        y = z;

        int YOriginalhelper = y->helper;

        if (z->left == nullANode) {

            x = z->right;

            rbTransplant(z, z->right);

        }

        else if (z->right == nullANode) {

            x = z->left;

            rbTransplant(z, z->left);

        }

        else {

            y = minimum(z->right);

            YOriginalhelper = y->helper;

            x = y->right;

            if (y->ancestor == z) {

                x->ancestor = y;

            }

            else {

                rbTransplant(y, y->right);

                y->right = z->right;
                y->right->ancestor = y;

            }

            rbTransplant(z, y);

            y->left = z->left;
            y->left->ancestor = y;
            y->helper = z->helper;

        }

        delete z;

        if (YOriginalhelper == 0) {

            postDeleteRotations(x);

        }

    }

    // For balancing the tree after insertion
    void performRotations(ANode<T>* n) {

        ANode<T>* temp;

        while (n->ancestor->helper == 1) {

            if (n->ancestor == n->ancestor->ancestor->right) {

                temp = n->ancestor->ancestor->left;

                if (temp->helper == 1) {

                    temp->helper = 0;
                    n->ancestor->helper = 0;
                    n->ancestor->ancestor->helper = 1;
                    n = n->ancestor->ancestor;

                }

                else {

                    if (n == n->ancestor->left) {

                        n = n->ancestor;
                        rightRotate(n);

                    }

                    n->ancestor->helper = 0;
                    n->ancestor->ancestor->helper = 1;
                    leftRotate(n->ancestor->ancestor);

                }

            }

            else {

                temp = n->ancestor->ancestor->right;

                if (temp->helper == 1) {

                    temp->helper = 0;
                    n->ancestor->helper = 0;
                    n->ancestor->ancestor->helper = 1;
                    n = n->ancestor->ancestor;

                }

                else {

                    if (n == n->ancestor->right) {

                        n = n->ancestor;
                        leftRotate(n);

                    }

                    n->ancestor->helper = 0;
                    n->ancestor->ancestor->helper = 1;
                    rightRotate(n->ancestor->ancestor);

                }

            }

            if (n == root) {

                break;

            }

        }

        root->helper = 0;

    }

    void printHelper(ANode<T>* root, string str, bool last) {

        if (root != nullANode) {

            cout << str;

            if (last) {

                cout << "R----";
                str += "   ";

            }
            else {

                cout << "L----";
                str += "|  ";

            }

            string shelper = root->helper ? "RED" : "BLACK";
            cout << root->data << "(" << shelper << ")" << endl;

            printHelper(root->left, str, false);

            printHelper(root->right, str, true);

        }

    }


    AVLTree() {

        nullANode = new ANode<T>;
        nullANode->helper = 0;
        nullANode->left = NULL;
        nullANode->right = NULL;
        root = nullANode;

    }

    ANode<T>* getNull() {
        return nullANode;
    }

    void preorder() {

        preOrderHelper(this->root);

    }

    void inorder() {

        inOrderHelper(this->root);

    }

    void postorder() {

        postOrderHelper(this->root);

    }

    ANode<T>* searchTree(T k) {

        return searchTreeHelper(this->root, k);

    }

    ANode<T>* minimum(ANode<T>* n) {

        while (n->left != nullANode) {

            n = n->left;

        }

        return n;

    }

    ANode<T>* maximum(ANode<T>* n) {

        while (n->right != nullANode) {

            n = n->right;

        }

        return n;
    }

    ANode<T>* successor(ANode<T>* n) {

        if (n->right != nullANode) {

            return minimum(n->right);

        }

        ANode<T>* n2 = n->ancestor;

        while (n2 != nullANode && n == n2->right) {

            n = n2;
            n2 = n2->ancestor;

        }

        return n2;

    }

    ANode<T>* predecessor(ANode<T>* n) {

        if (n->left != nullANode) {

            return maximum(n->left);

        }

        ANode<T>* n2 = n->ancestor;

        while (n2 != nullANode && n == n2->left) {

            n = n2;
            n2 = n2->ancestor;

        }

        return n2;

    }

    void leftRotate(ANode<T>* x) {

        ANode<T>* y = x->right;
        x->right = y->left;

        if (y->left != nullANode) {

            y->left->ancestor = x;

        }

        y->ancestor = x->ancestor;

        if (x->ancestor == NULL) {

            this->root = y;

        }

        else if (x == x->ancestor->left) {

            x->ancestor->left = y;

        }

        else {

            x->ancestor->right = y;

        }

        y->left = x;

        x->ancestor = y;

    }

    void rightRotate(ANode<T>* x) {

        ANode<T>* y = x->left;

        x->left = y->right;

        if (y->right != nullANode) {

            y->right->ancestor = x;

        }

        y->ancestor = x->ancestor;

        if (x->ancestor == NULL) {

            this->root = y;

        }

        else if (x == x->ancestor->right) {

            x->ancestor->right = y;

        }

        else {

            x->ancestor->left = y;

        }

        y->right = x;

        x->ancestor = y;

    }

    // Inserting a ANode
    ANode<T>* insert(T val) {

        ANode<T>* n = new ANode<T>;
        n->ancestor = NULL;
        n->data = val;
        n->left = nullANode;
        n->right = nullANode;
        n->helper = 1;

        ANode<T>* y = NULL;
        ANode<T>* x = this->root;

        while (x != nullANode) {

            y = x;

            if (n->data < x->data) {

                x = x->left;

            }

            else {

                x = x->right;

            }

        }

        n->ancestor = y;

        if (y == NULL) {

            root = n;

        }

        else if (n->data < y->data) {

            y->left = n;

        }

        else {

            y->right = n;

        }

        if (n->ancestor == NULL) {

            n->helper = 0;

            return n;

        }

        if (n->ancestor->ancestor == NULL) {

            return n;

        }

        performRotations(n);
        return n;

    }

    ANode<T>* getRoot() {

        return this->root;

    }

    void deleteANode(T val) {

        deleteANodeHelper(this->root, val);

    }

    void printTree() {

        if (root) {

            printHelper(this->root, "", true);

        }

    }

};













