#pragma once
#include <iostream>
#include <fstream>
#include "LinkedList.h"
#include <stdio.h>
#include <direct.h>
#include <string>
#include <cstdio>

using namespace std;

void deleteQuery(int id) {

    ifstream fin;
    string Path = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedIDS\\RBTID";
    Path += to_string(id);
    string line;
    fin.open(Path, ios::in);
    int line_num = 1;
    while (line_num != 4) {
        getline(fin, line);
        line_num++;
    }
    fin.close();
    string filePath = "";
    int y = 0;
    while (line[y] != ',') {
        filePath += line[y];
        y++;
    }
    y++;
    string lineN = "";
    while (y < line.length()) {
        lineN += line[y];
        y++;
    }
    string pls = "";
    for (int i = 0; i < filePath.length(); i++) {
        if (filePath[i] != ' ') {
            pls += filePath[i];
        }
    }

    string temp;

    ifstream timeToDisco;
    LinkedList list;
    string r;

    timeToDisco.open(pls, ios::in);
    int l = 1;
    while (!timeToDisco.eof()) {
        if (l != stoi(lineN)) {
            getline(timeToDisco, r);
            list.insertAtEnd(r);
        }

        else {
            cout << "Should Work" << endl;
        }

        l++;
    }
    timeToDisco.close();
    string oldPath = pls;
    ofstream plsWork;
    pls += "temp";
    pls += ".csv";
    plsWork.open(pls, ios::app);
    LNode* ptr = new LNode();
    ptr = list.head;
    while (ptr != NULL) {
        plsWork << ptr->data << endl;
        ptr = ptr->next;
    }

    plsWork.close();

    const char* a = pls.c_str();
    const char* b = oldPath.c_str();

    remove(b);
    rename(a, b);


}