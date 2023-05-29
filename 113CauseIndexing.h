#pragma once
#include <fstream>
#include <string>
#include "BTree.h"
#include "AVLTree.h"
#include "RedBlackTree.h"
using namespace std;

void cause113Index() {
    RedBlackTree<string> rbt;
    string initialPath;
    string outputName = "RBTC";
    int y;
    string line;
    string cause113;
    ifstream fin;
    int count;
    for (int i = 1; i <= 10; i++) {
        initialPath = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\datafiles\\NCHS_-_Leading_Causes_of_Death__United_States_";
        initialPath += to_string(i);
        initialPath += ".csv";
        fin.open(initialPath, ios::in);
        line = "";
        cause113 = "";
        int x = 0;
        while (!fin.eof()) {
            cause113 = "";
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
                        cause113 += '\"';
                        y++;
                        while (line[y] != '\"')
                        {
                            cause113 += line[y];
                            y++;
                        }

                    }
                    cause113 += line[y];
                    y++;
                }
                if (x != 0) {

                    RNode<string>* tempNode;
                    tempNode = rbt.searchTree(cause113);
                    if (tempNode == rbt.getNull()) {
                        tempNode = rbt.insert(cause113);
                        count = x + 1;
                        tempNode->list.insertAtEnd(initialPath + ", " + to_string(count));
                        tempNode->fileName = outputName + cause113;
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


    rbt.plsCause113();


    rbt.preorder();
}


void cause113IndexAVL() {
    AVLTree<string> avl;
    string initialPath;
    string outputName = "RBTC";
    int y;
    string line;
    string cause113;
    ifstream fin;
    int count;
    for (int i = 1; i <= 10; i++) {
        initialPath = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\datafiles\\NCHS_-_Leading_Causes_of_Death__United_States_";
        initialPath += to_string(i);
        initialPath += ".csv";
        fin.open(initialPath, ios::in);
        line = "";
        cause113 = "";
        int x = 0;
        while (!fin.eof()) {
            cause113 = "";
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
                while (line[y] != ',' && line != "") {
                    if (line[y] == '\"')
                    {
                        cause113 += '\"';
                        y++;
                        while (line[y] != '\"')
                        {
                            cause113 += line[y];
                            y++;
                        }

                    }
                    cause113 += line[y];
                    y++;
                }
                if (x != 0) {

                    ANode<string>* tempNode;
                    tempNode = avl.searchTree(cause113);
                    if (tempNode == avl.getNull()) {
                        tempNode = avl.insert(cause113);
                        count = x + 1;
                        tempNode->list.insertAtEnd(initialPath + ", " + to_string(count));
                        tempNode->fileName = outputName + cause113;
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


    avl.plsCause113();


    avl.preorder();
}


string helpCause113(string line) {
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

string searchByCause113(string cause) {
    ifstream fin;
    string Path = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedCauses113\\RBTC";
    Path += cause;
    string line;
    fin.open(Path, ios::in);
    int line_num = 1;
    while (line_num != 4) {
        getline(fin, line);
        line_num++;
    }
    string final = "";
    final += helpCause113(line);
    final += '\n';
    while (!fin.eof()) {
        getline(fin, line);
        if (line == "") {
            break;
        }
        final += helpCause113(line);
        final += '\n';


    }
    fin.close();

    return final;

}