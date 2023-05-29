#pragma once
#include <fstream>
#include <string>
#include<direct.h>
#include "BTree.h"
#include "AVLTree.h"
#include "RedBlackTree.h"
using namespace std;

void yearIndex() {
    RedBlackTree<int> rbt;
    string initialPath;
    string outputName = "RBTY";
    int y;
    string line;
    string year;
    ifstream fin;
    int count;
    for (int i = 1; i <= 10; i++) {
        initialPath = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\datafiles\\NCHS_-_Leading_Causes_of_Death__United_States_";
        initialPath += to_string(i);
        initialPath += ".csv";
        fin.open(initialPath, ios::in);
        line = "";
        year = "";
        int x = 0;
        while (!fin.eof()) {
            year = "";
            y = 0;
            line = "";
            getline(fin, line);
            if (line != "") {
                // get the second col val that is year
                while (line[y] != ',' && line != "") {
                    y++;
                }
                y++;
                while (line[y] != ',' && line != "") {

                    year += line[y];
                    y++;
                }
                if (x != 0) {

                    RNode<int>* tempNode;
                    tempNode = rbt.searchTree(stoi(year));
                    if (tempNode == rbt.getNull()) {
                        tempNode = rbt.insert(stoi(year));
                        count = x + 1;
                        tempNode->list.insertAtEnd(initialPath + ", " + to_string(count));
                        tempNode->fileName = outputName + year;
                        cout << tempNode->fileName << endl;;
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


    rbt.plsYear();


    rbt.preorder();
}


void yearIndexAVL() {
    AVLTree<int> avl;
    string initialPath;
    string outputName = "RBTY";
    int y;
    string line;
    string year;
    ifstream fin;
    int count;
    for (int i = 1; i <= 10; i++) {
        initialPath = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\datafiles\\NCHS_-_Leading_Causes_of_Death__United_States_";
        initialPath += to_string(i);
        initialPath += ".csv";
        fin.open(initialPath, ios::in);
        line = "";
        year = "";
        int x = 0;
        while (!fin.eof()) {
            year = "";
            y = 0;
            line = "";
            getline(fin, line);
            if (line != "") {
                // get the second col val that is year
                while (line[y] != ',' && line != "") {
                    y++;
                }
                y++;
                while (line[y] != ',' && line != "") {

                    year += line[y];
                    y++;
                }
                if (x != 0) {

                    ANode<int>* tempNode;
                    tempNode = avl.searchTree(stoi(year));
                    if (tempNode == avl.getNull()) {
                        tempNode = avl.insert(stoi(year));
                        count = x + 1;
                        tempNode->list.insertAtEnd(initialPath + ", " + to_string(count));
                        tempNode->fileName = outputName + year;
                        cout << tempNode->fileName << endl;;
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


    avl.plsYear();


    avl.preorder();
}






string help(string line) {
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

string searchByYear(string year) {
    ifstream fin;
    string Path = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedYears\\RBTY";
    Path += year;
    string line;
    fin.open(Path, ios::in);
    int line_num = 1;
    while (line_num != 4) {
        getline(fin, line);
        line_num++;
    }
    int x = 0;
    string final = "";
    final += help(line);
    final += '\n';
    while (!fin.eof()) {
        getline(fin, line);
        if (line == "") {
            break;
        }
        final += help(line);
        final += '\n';
        
        
    }
    fin.close();

    return final;

}

string searchByYearRange(string year1, string year2) {
    int y1 = stoi(year1);
    int y2 = stoi(year2);
    string final = "";
    for (int i = y1; i <= y2; i++) {


        ifstream fin;
        string Path = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedYears\\RBTY";
        Path += to_string(i);
        string line;
        fin.open(Path, ios::in);
        int line_num = 1;
        while (line_num != 4) {
            getline(fin, line);
            line_num++;
        }
        int x = 0;
        
        final += help(line);
        final += '\n';
        while (!fin.eof()) {
            getline(fin, line);
            if (line == "") {
                break;
            }
            final += help(line);
            final += '\n';


        }
        fin.close();
    }

    return final;
}
