#pragma once
#include <iostream>
using namespace std;

struct LNode {
    string data;
 
    LNode* next;
    LNode operator=(LNode n) {
        data = n.data;
        next = n.next;
        return *this;
    }
};

class LinkedList {
public:
    LNode* head;
    LinkedList() {
        head = NULL;
    }

    void insertAtEnd(string data) {
        LNode* newLNode = new LNode;

        newLNode->data = data;
        newLNode->next = NULL;

        LNode* temp = head;

        if (head == NULL) {
            head = newLNode;
            return;
        }

        while (temp->next != NULL) {
            temp = temp->next;
        }


        temp->next = newLNode;

    }


    void print() {
        LNode* ptr;
        ptr = head;
        if (head == NULL) {
            cout << "List is empty" << endl;

        }
        else {
            while (ptr != NULL) {
                cout << ptr->data;
                ptr = ptr->next;
            }
        }
    }





    bool IsEmpty() {
        if (head == NULL) {
            return true;
        }
        return false;
    }

    void remove(string id) {
        LNode* ptr;
        LNode* temp;
        LNode* tmp2;
        ptr = head;
        if (head == NULL) {
            cout << "List is empty" << endl;

        }

        else {
            while (ptr != NULL) {
                if (ptr->data == id) {
                    tmp2 = ptr->next;
                    temp->next = tmp2;
                    delete ptr;
                    return;
                }
                ptr = ptr->next;

            }
        }

        return;


    }

};