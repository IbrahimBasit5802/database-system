#pragma once
#include <iostream>
#include <fstream>
#include "LinkedList.h"
using namespace std;

template <typename T>
class RNode {

public:

    bool colour; // 0 = black, 1 = red
    T data;

    LinkedList list;
    string fileName;
 
    RNode<T>* left;
    RNode<T>* right;
    RNode<T>* parent;

    // constructor
    RNode() {

        colour = 0;	// black
        left = NULL;
        right = NULL;
        parent = NULL;

    }

};

template <typename T>
class RedBlackTree {
    RNode<T>* root;
    RNode<T>* nullRNode;
public:



    void initializeNullRNode(RNode<T>* n, RNode<T>* parent) {

        n->data = NULL;
        n->parent = parent;
        n->left = NULL;
        n->right = NULL;
        n->colour = 0;   // black, initially

    }

    // Preorder
    void preOrderHelper(RNode<T>* n) {

        if (n != nullRNode) {

            cout << n->data << " ";
            preOrderHelper(n->left);
            preOrderHelper(n->right);

        }

    }

    // Inorder
    void inOrderHelper(RNode<T>* n) {

        if (n != nullRNode) {

            inOrderHelper(n->left);
            cout << n->data << " ";
            inOrderHelper(n->right);

        }
    }

    string getRightChildPath(RNode<T>* n) {
        return n->right->fileName;
    }

    string getLeftChildPath(RNode<T>* n) {
        return n->left->fileName;
    }

    bool fileExists(string fileName)
    {
        ifstream infile(fileName);
        return infile.good();
    }

    void insertDataToFiles(RNode<T>* n) {
        if (n != nullRNode) {

            string path1 = getLeftChildPath(n);
            string path2 = getRightChildPath(n);
            string parentPath1 = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedIDS\\";
            string parentPath2 = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedIDS\\";
            parentPath1 += path1;
            parentPath2 += path2;
            string orig_path = n->fileName;
            string filePath = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedIDS\\";
            filePath += orig_path;
            LNode* tempNode = new LNode();
            tempNode = n->list.head;
            ofstream ok;
            ok.open(filePath, ios::out);
            ok << parentPath1 << endl << parentPath2 << endl;

            while (tempNode != NULL) {
                ok << tempNode->data << endl;
                tempNode = tempNode->next;
            }

            ok.close();
            


            insertDataToFiles(n->left);
            insertDataToFiles(n->right);

        }
    }

    void insertDataToFilesYear(RNode<T>* n) {

            if (n != nullRNode) {

                string path1 = getLeftChildPath(n);
                string path2 = getRightChildPath(n);
                string parentPath1 = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedYears\\";
                string parentPath2 = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedYears\\";
                parentPath1 += path1;
                parentPath2 += path2;
                string orig_path = n->fileName;
                string filePath = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedYears\\";
                filePath += orig_path;
                LNode* tempNode = new LNode();
                tempNode = n->list.head;
                ofstream ok;
                ok.open(filePath, ios::out);
                ok << parentPath1 << endl << parentPath2 << endl;

                while (tempNode != NULL) {
                    ok << tempNode->data << endl;
                    tempNode = tempNode->next;
                }

                ok.close();



                insertDataToFilesYear(n->left);
                insertDataToFilesYear(n->right);

            }
    }

    void insertDataToFilesState(RNode<T>* n) {

        if (n != nullRNode) {

            string path1 = getLeftChildPath(n);
            string path2 = getRightChildPath(n);
            string parentPath1 = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedStates\\";
            string parentPath2 = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedStates\\";
            parentPath1 += path1;
            parentPath2 += path2;
            string orig_path = n->fileName;
            string filePath = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedStates\\";
            filePath += orig_path;
            LNode* tempNode = new LNode();
            tempNode = n->list.head;
            ofstream ok;
            ok.open(filePath, ios::out);
            ok << parentPath1 << endl << parentPath2 << endl;

            while (tempNode != NULL) {
                ok << tempNode->data << endl;
                tempNode = tempNode->next;
            }

            ok.close();



            insertDataToFilesState(n->left);
            insertDataToFilesState(n->right);

        }
    }

    void insertDataToFilesCauses(RNode<T>* n) {

        if (n != nullRNode) {

            string path1 = getLeftChildPath(n);
            string path2 = getRightChildPath(n);
            string parentPath1 = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedCauses\\";
            string parentPath2 = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedCauses\\";
            parentPath1 += path1;
            parentPath2 += path2;
            string orig_path = n->fileName;
            string filePath = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedCauses\\";
            filePath += orig_path;
            LNode* tempNode = new LNode();
            tempNode = n->list.head;
            ofstream ok;
            ok.open(filePath, ios::out);
            ok << parentPath1 << endl << parentPath2 << endl;

            while (tempNode != NULL) {
                ok << tempNode->data << endl;
                tempNode = tempNode->next;
            }

            ok.close();



            insertDataToFilesCauses(n->left);
            insertDataToFilesCauses(n->right);

        }
    }

    void insertDataToFilesCauses113(RNode<T>* n) {

        if (n != nullRNode) {

            string path1 = getLeftChildPath(n);
            string path2 = getRightChildPath(n);
            string parentPath1 = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedCauses113\\";
            string parentPath2 = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedCauses113\\";
            parentPath1 += path1;
            parentPath2 += path2;
            string orig_path = n->fileName;
            string filePath = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedCauses113\\";
            filePath += orig_path;
            LNode* tempNode = new LNode();
            tempNode = n->list.head;
            ofstream ok;
            ok.open(filePath, ios::out);
            ok << parentPath1 << endl << parentPath2 << endl;

            while (tempNode != NULL) {
                ok << tempNode->data << endl;
                tempNode = tempNode->next;
            }

            ok.close();



            insertDataToFilesCauses113(n->left);
            insertDataToFilesCauses113(n->right);

        }
    }

    void insertDataToFilesDeaths(RNode<T>* n) {

        if (n != nullRNode) {

            string path1 = getLeftChildPath(n);
            string path2 = getRightChildPath(n);
            string parentPath1 = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedDeaths\\";
            string parentPath2 = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedDeaths\\";
            parentPath1 += path1;
            parentPath2 += path2;
            string orig_path = n->fileName;
            string filePath = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedDeaths\\";
            filePath += orig_path;
            LNode* tempNode = new LNode();
            tempNode = n->list.head;
            ofstream ok;
            ok.open(filePath, ios::out);
            ok << parentPath1 << endl << parentPath2 << endl;

            while (tempNode != NULL) {
                ok << tempNode->data << endl;
                tempNode = tempNode->next;
            }

            ok.close();



            insertDataToFilesDeaths(n->left);
            insertDataToFilesDeaths(n->right);

        }
    }

    void insertDataToFilesDeathRate(RNode<T>* n) {

        if (n != nullRNode) {

            string path1 = getLeftChildPath(n);
            string path2 = getRightChildPath(n);
            string parentPath1 = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedDeathRate\\";
            string parentPath2 = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedDeathRate\\";
            parentPath1 += path1;
            parentPath2 += path2;
            string orig_path = n->fileName;
            string filePath = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedDeathRate\\";
            filePath += orig_path;
            LNode* tempNode = new LNode();
            tempNode = n->list.head;
            ofstream ok;
            ok.open(filePath, ios::out);
            ok << parentPath1 << endl << parentPath2 << endl;

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
    void postOrderHelper(RNode<T>* n) {

        if (n != nullRNode) {

            postOrderHelper(n->left);
            postOrderHelper(n->right);
            cout << n->data << " ";

        }

    }

    RNode<T>* searchTreeHelper(RNode<T>* n, T val) {

        if (n == nullRNode || val == n->data) {

            return n;

        }

        if (val < n->data) {

            return searchTreeHelper(n->left, val);

        }

        return searchTreeHelper(n->right, val);

    }

    // For balancing the tree after deletion
    void deleteFix(RNode<T>* n) {

        RNode<T>* n2;

        while (n != root && n->colour == 0) {

            if (n == n->parent->left) {

                n2 = n->parent->right;

                if (n2->colour == 1) {

                    n2->colour = 0;
                    n->parent->colour = 1;
                    leftRotate(n->parent);
                    n2 = n->parent->right;

                }

                if (n2->left->colour == 0 && n2->right->colour == 0) {

                    n2->colour = 1;
                    n = n->parent;

                }

                else {

                    if (n2->right->colour == 0) {

                        n2->left->colour = 0;
                        n2->colour = 1;
                        rightRotate(n2);
                        n2 = n->parent->right;

                    }

                    n2->colour = n->parent->colour;
                    n->parent->colour = 0;
                    n2->right->colour = 0;
                    leftRotate(n->parent);
                    n = root;

                }

            }

            else {

                n2 = n->parent->left;

                if (n2->colour == 1) {

                    n2->colour = 0;
                    n->parent->colour = 1;
                    rightRotate(n->parent);
                    n2 = n->parent->left;

                }

                if (n2->right->colour == 0 && n2->right->colour == 0) {

                    n2->colour = 1;
                    n = n->parent;

                }
                else {

                    if (n2->left->colour == 0) {

                        n2->right->colour = 0;
                        n2->colour = 1;
                        leftRotate(n2);
                        n2 = n->parent->left;

                    }

                    n2->colour = n->parent->colour;
                    n->parent->colour = 0;
                    n2->left->colour = 0;
                    rightRotate(n->parent);
                    n = root;

                }

            }

        }

        n->colour = 0;

    }

    void rbTransplant(RNode<T>* n1, RNode<T>* n2) {

        if (n1->parent == NULL) {

            root = n2;

        }

        else if (n1 == n1->parent->left) {

            n1->parent->left = n2;

        }

        else {

            n1->parent->right = n2;

        }

        n2->parent = n1->parent;

    }

    void deleteRNodeHelper(RNode<T>* n, T value) {

        RNode<T>* z = nullRNode;
        RNode<T>* x;
        RNode<T>* y;

        while (n != nullRNode) {

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

        if (z == nullRNode) {

            cout << "Key not found in the tree" << endl;
            return;

        }

        y = z;

        int YOriginalColour = y->colour;

        if (z->left == nullRNode) {

            x = z->right;

            rbTransplant(z, z->right);

        }

        else if (z->right == nullRNode) {

            x = z->left;

            rbTransplant(z, z->left);

        }

        else {

            y = minimum(z->right);

            YOriginalColour = y->colour;

            x = y->right;

            if (y->parent == z) {

                x->parent = y;

            }

            else {

                rbTransplant(y, y->right);

                y->right = z->right;
                y->right->parent = y;

            }

            rbTransplant(z, y);

            y->left = z->left;
            y->left->parent = y;
            y->colour = z->colour;

        }

        delete z;

        if (YOriginalColour == 0) {

            deleteFix(x);

        }

    }

    // For balancing the tree after insertion
    void insertFix(RNode<T>* n) {

        RNode<T>* temp;

        while (n->parent->colour == 1) {

            if (n->parent == n->parent->parent->right) {

                temp = n->parent->parent->left;

                if (temp->colour == 1) {

                    temp->colour = 0;
                    n->parent->colour = 0;
                    n->parent->parent->colour = 1;
                    n = n->parent->parent;

                }

                else {

                    if (n == n->parent->left) {

                        n = n->parent;
                        rightRotate(n);

                    }

                    n->parent->colour = 0;
                    n->parent->parent->colour = 1;
                    leftRotate(n->parent->parent);

                }

            }

            else {

                temp = n->parent->parent->right;

                if (temp->colour == 1) {

                    temp->colour = 0;
                    n->parent->colour = 0;
                    n->parent->parent->colour = 1;
                    n = n->parent->parent;

                }

                else {

                    if (n == n->parent->right) {

                        n = n->parent;
                        leftRotate(n);

                    }

                    n->parent->colour = 0;
                    n->parent->parent->colour = 1;
                    rightRotate(n->parent->parent);

                }

            }

            if (n == root) {

                break;

            }

        }

        root->colour = 0;

    }

    void printHelper(RNode<T>* root, string str, bool last) {

        if (root != nullRNode) {

            cout << str;

            if (last) {

                cout << "R----";
                str += "   ";

            }
            else {

                cout << "L----";
                str += "|  ";

            }

            string scolour = root->colour ? "RED" : "BLACK";
            cout << root->data << "(" << scolour << ")" << endl;

            printHelper(root->left, str, false);

            printHelper(root->right, str, true);

        }

    }


    // constructor
    RedBlackTree() {

        nullRNode = new RNode<T>;
        nullRNode->colour = 0;
        nullRNode->left = NULL;
        nullRNode->right = NULL;
        root = nullRNode;

    }

    RNode<T>* getNull() {
        return nullRNode;
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

    RNode<T>* searchTree(T k) {

        return searchTreeHelper(this->root, k);

    }

    RNode<T>* minimum(RNode<T>* n) {

        while (n->left != nullRNode) {

            n = n->left;

        }

        return n;

    }

    RNode<T>* maximum(RNode<T>* n) {

        while (n->right != nullRNode) {

            n = n->right;

        }

        return n;
    }

    RNode<T>* successor(RNode<T>* n) {

        if (n->right != nullRNode) {

            return minimum(n->right);

        }

        RNode<T>* n2 = n->parent;

        while (n2 != nullRNode && n == n2->right) {

            n = n2;
            n2 = n2->parent;

        }

        return n2;

    }

    RNode<T>* predecessor(RNode<T>* n) {

        if (n->left != nullRNode) {

            return maximum(n->left);

        }

        RNode<T>* n2 = n->parent;

        while (n2 != nullRNode && n == n2->left) {

            n = n2;
            n2 = n2->parent;

        }

        return n2;

    }

    void leftRotate(RNode<T>* x) {

        RNode<T>* y = x->right;
        x->right = y->left;

        if (y->left != nullRNode) {

            y->left->parent = x;

        }

        y->parent = x->parent;

        if (x->parent == NULL) {

            this->root = y;

        }

        else if (x == x->parent->left) {

            x->parent->left = y;

        }

        else {

            x->parent->right = y;

        }

        y->left = x;

        x->parent = y;

    }

    void rightRotate(RNode<T>* x) {

        RNode<T>* y = x->left;

        x->left = y->right;

        if (y->right != nullRNode) {

            y->right->parent = x;

        }

        y->parent = x->parent;

        if (x->parent == NULL) {

            this->root = y;

        }

        else if (x == x->parent->right) {

            x->parent->right = y;

        }

        else {

            x->parent->left = y;

        }

        y->right = x;

        x->parent = y;

    }

    // Inserting a RNode
    RNode<T>* insert(T val) {

        RNode<T>* n = new RNode<T>;
        n->parent = NULL;
        n->data = val;
        n->left = nullRNode;
        n->right = nullRNode;
        n->colour = 1;

        RNode<T>* y = NULL;
        RNode<T>* x = this->root;

        while (x != nullRNode) {

            y = x;

            if (n->data < x->data) {

                x = x->left;

            }

            else {

                x = x->right;

            }

        }

        n->parent = y;

        if (y == NULL) {

            root = n;

        }

        else if (n->data < y->data) {

            y->left = n;

        }

        else {

            y->right = n;

        }

        if (n->parent == NULL) {

            n->colour = 0;

            return n;

        }

        if (n->parent->parent == NULL) {

            return n;

        }

        insertFix(n);
        return n;

    }

    RNode<T>* getRoot() {

        return this->root;

    }

    void deleteRNode(T val) {

        deleteRNodeHelper(this->root, val);

    }

    void printTree() {

        if (root) {

            printHelper(this->root, "", true);

        }

    }

};













