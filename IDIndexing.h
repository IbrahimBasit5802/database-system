#pragma once
#include <fstream>
#include <string>
#include<direct.h>
#include "BTree.h"
#include "AVLTree.h"
#include "RedBlackTree.h"
using namespace std;

void IDindex() {
    RedBlackTree<int> rbt;
    string initialPath;
    string IDDirectory = "IndexedIDS";
    string parentPath = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedIDS";
    string finalPath = "";
    string outputName = "RBTID";
    ifstream fin;
    string line;
    int x;
    int y = 1;
    int z = 0;
    int count;
    string id = "";
    for (int i = 1; i <= 10; i++) {
        initialPath = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\datafiles\\NCHS_-_Leading_Causes_of_Death__United_States_";
        initialPath += to_string(i);
        initialPath += ".csv";
        
        fin.open(initialPath, ios::in);
        line = "";
        x = 0;
        
        while (!fin.eof()) {
            z = 0;
            id = "";
            finalPath = "";
            line = "";
            getline(fin, line);
            while (line[z] != ',' && line != "") {
                id += line[z];
                z++;
            }
            if (line != "") {
                if (x != 0) {
                    finalPath += parentPath;
                    finalPath += "\\" + outputName + to_string(y);
                    RNode<int>* tempNode;
                    tempNode = rbt.insert(stoi(id));
                    count = x + 1;
                    tempNode->list.insertAtEnd(initialPath + ", " + to_string(count));
                    tempNode->fileName = outputName + to_string(y);
                    y++;
                }
                x++;
            }
           
        }
        fin.close();
    }


    // insert data into these text files


    rbt.plsID();

    rbt.preorder();
}

void IDindexAVL() {
    AVLTree<int> avl;
    string initialPath;
    string IDDirectory = "IndexedIDS";
    string parentPath = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedIDS";
    string finalPath = "";
    string outputName = "RBTID";
    ifstream fin;
    string line;
    int x;
    int y = 1;
    int z = 0;
    int count;
    string id = "";
    for (int i = 1; i <= 10; i++) {
        initialPath = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\datafiles\\NCHS_-_Leading_Causes_of_Death__United_States_";
        initialPath += to_string(i);
        initialPath += ".csv";

        fin.open(initialPath, ios::in);
        line = "";
        x = 0;

        while (!fin.eof()) {
            z = 0;
            id = "";
            finalPath = "";
            line = "";
            getline(fin, line);
            while (line[z] != ',' && line != "") {
                id += line[z];
                z++;
            }
            if (line != "") {
                if (x != 0) {
                    finalPath += parentPath;
                    finalPath += "\\" + outputName + to_string(y);
                    ANode<int>* tempNode;
                    tempNode = avl.insert(stoi(id));
                    count = x + 1;
                    tempNode->list.insertAtEnd(initialPath + ", " + to_string(count));
                    tempNode->fileName = outputName + to_string(y);
                    y++;
                }
                x++;
            }

        }
        fin.close();
        cout << "File Done" << endl;
    }


    // insert data into these text files


    avl.plsID();

}









string searchBYID(string id) {
    ifstream fin;
    string Path = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedIDS\\RBTID";
    Path += id;
    string line;
    fin.open(Path, ios::in);
    int line_num = 1;
    while (line_num != 4) {
        getline(fin, line);
        line_num++;
    }
    fin.close();
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
    string output;
    ifstream targetFile;
    targetFile.open(pls, ios::in);
    for (int i = 0; i < stoi(lineN); i++) {
        output = "";
        getline(targetFile, output);
     }
    targetFile.close();
    return output;
    
}


string searchByIDRange(int id1, int id2) {
    string output;
    string final = "";
    for (int i = id1; i <= id2; i++) {
        ifstream fin;
        string Path = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedIDS\\RBTID";
        Path += to_string(i);
        string line;
        fin.open(Path, ios::in);
        int line_num = 1;
        while (line_num != 4) {
            getline(fin, line);
            line_num++;
        }
        fin.close();
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
        final += output;
        final += '\n';
    }
    return final;
}