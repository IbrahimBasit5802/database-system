#pragma once
#include <fstream>
#include <string>
#include<direct.h>
#include "BTree.h"
#include "AVLTree.h"
#include "RedBlackTree.h"
using namespace std;

void stateIndex() {
    RedBlackTree<string> rbt;
    string initialPath;
    string outputName = "RBTS";
    int y;
    string line;
    string state;
    ifstream fin;
    int count;
    for (int i = 1; i <= 10; i++) {
        initialPath = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\datafiles\\NCHS_-_Leading_Causes_of_Death__United_States_";
        initialPath += to_string(i);
        initialPath += ".csv";
        fin.open(initialPath, ios::in);
        line = "";
        state = "";
        int x = 0;
        while (!fin.eof()) {
            state = "";
            y = 0;
            line = "";
            getline(fin, line);
            if (line != "") {
                // get the col val that is state
                while (line[y] != ',' && line != "") {
                    y++;
                }
                y++;
                while (line[y] != ',' && line != "") {
                    y++;
                }
                y++;
                while (line[y] != ',') {
                    if (line[y] == '\"')
                    {
                        y++;
                        while (line[y] != '\"')
                        {
                            y++;
                        }

                    }
                    y++;
                }
                y++;
                while (line[y] != ',' && line != "") {
                    y++;
                }
                y++;
                while (line[y] != ',' && line != "") {

                    state += line[y];
                    y++;
                }
                if (x != 0) {

                    RNode<string>* tempNode;
                    tempNode = rbt.searchTree(state);
                    if (tempNode == rbt.getNull()) {
                        tempNode = rbt.insert(state);
                        count = x + 1;
                        tempNode->list.insertAtEnd(initialPath + ", " + to_string(count));
                        tempNode->fileName = outputName + state;
                        cout << tempNode->fileName << endl;
                    }

                    else {
                        count = x + 1;
                        tempNode->list.insertAtEnd(initialPath + ", " + to_string(count));
                    }
                }
                x++;
            }
        }

        fin.close();
    }




    // insert data into these text files


    rbt.plsState();


    rbt.preorder();
}

void stateIndexAVL() {
    AVLTree<string> avl;
    string initialPath;
    string outputName = "RBTS";
    int y;
    string line;
    string state;
    ifstream fin;
    int count;
    for (int i = 1; i <= 10; i++) {
        initialPath = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\datafiles\\NCHS_-_Leading_Causes_of_Death__United_States_";
        initialPath += to_string(i);
        initialPath += ".csv";
        fin.open(initialPath, ios::in);
        line = "";
        state = "";
        int x = 0;
        while (!fin.eof()) {
            state = "";
            y = 0;
            line = "";
            getline(fin, line);
            if (line != "") {
                // get the col val that is state
                while (line[y] != ',' && line != "") {
                    y++;
                }
                y++;
                while (line[y] != ',' && line != "") {
                    y++;
                }
                y++;
                while (line[y] != ',') {
                    if (line[y] == '\"')
                    {
                        y++;
                        while (line[y] != '\"')
                        {
                            y++;
                        }

                    }
                    y++;
                }
                y++;
                while (line[y] != ',' && line != "") {
                    y++;
                }
                y++;
                while (line[y] != ',' && line != "") {

                    state += line[y];
                    y++;
                }
                if (x != 0) {

                    ANode<string>* tempNode;
                    tempNode = avl.searchTree(state);
                    if (tempNode == avl.getNull()) {
                        tempNode = avl.insert(state);
                        count = x + 1;
                        tempNode->list.insertAtEnd(initialPath + ", " + to_string(count));
                        tempNode->fileName = outputName + state;
                        cout << tempNode->fileName << endl;
                    }

                    else {
                        count = x + 1;
                        tempNode->list.insertAtEnd(initialPath + ", " + to_string(count));
                    }
                }
                x++;
            }
        }

        fin.close();
    }




    // insert data into these text files


    avl.plsState();


    avl.preorder();
}


string helpState(string line) {
    string output;
    if (line != "") {
        string filePath = "";
        int x = 0;
        while (line[x] != ',') {
            filePath += line[x];
            x++;
        }
        x++;
        string lineN = "";
        while (x < line.length()) {
            lineN += line[x];
            x++;
        }
        string pls = "";
        for (int i = 0; i < filePath.length(); i++) {
            if (filePath[i] != ' ') {
                pls += filePath[i];
            }
        }

        ifstream targetFile;
        targetFile.open(pls, ios::in);
        for (int i = 0; i < stoi(lineN); i++) {
            output = "";
            getline(targetFile, output);
        }
        targetFile.close();

    }

    return output;
}

string searchByState(string state) {
    ifstream fin;
    string Path = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedStates\\RBTS";
    Path += state;
    string line;
    fin.open(Path, ios::in);
    int line_num = 1;
    while (line_num != 4) {
        getline(fin, line);
        line_num++;
    }
    string final = "";
    final += helpState(line);
    final += '\n';
    while (!fin.eof()) {
        getline(fin, line);
        if (line == "") {
            break;
        }
        final += helpState(line);
        final += '\n';


    }
    fin.close();

    return final;

}