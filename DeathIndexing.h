#pragma once
#include <fstream>
#include <string>
#include<direct.h>
#include "BTree.h"
#include "AVLTree.h"
#include "RedBlackTree.h"
using namespace std;

void deathIndex() {
    RedBlackTree<int> rbt;
    string initialPath;
    string outputName = "RBTD";
    int y;
    string line;
    string death;
    ifstream fin;
    int count;
    for (int i = 1; i <= 10; i++) {
        initialPath = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\datafiles\\NCHS_-_Leading_Causes_of_Death__United_States_";
        initialPath += to_string(i);
        initialPath += ".csv";
        fin.open(initialPath, ios::in);
        line = "";
        death = "";
        int x = 0;
        while (!fin.eof()) {
            death = "";
            y = 0;
            line = "";
            getline(fin, line);
            if (line != "") {
                // get the col val that is death
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
                    y++;
                }
                y++;
                while (line[y] != ',' && line != "") {

                    death += line[y];
                    y++;
                }
                if (x != 0) {

                    RNode<int>* tempNode;
                    tempNode = rbt.searchTree(stoi(death));
                    if (tempNode == rbt.getNull()) {
                        tempNode = rbt.insert(stoi(death));
                        count = x + 1;
                        tempNode->list.insertAtEnd(initialPath + ", " + to_string(count));
                        tempNode->fileName = outputName + death;
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


    rbt.plsDeath();


    rbt.preorder();
}


void deathIndexAVL() {
    AVLTree<int> avl;
    string initialPath;
    string outputName = "RBTD";
    int y;
    string line;
    string death;
    ifstream fin;
    int count;
    for (int i = 1; i <= 10; i++) {
        initialPath = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\datafiles\\NCHS_-_Leading_Causes_of_Death__United_States_";
        initialPath += to_string(i);
        initialPath += ".csv";
        fin.open(initialPath, ios::in);
        line = "";
        death = "";
        int x = 0;
        while (!fin.eof()) {
            death = "";
            y = 0;
            line = "";
            getline(fin, line);
            if (line != "") {
                // get the col val that is death
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
                    y++;
                }
                y++;
                while (line[y] != ',' && line != "") {

                    death += line[y];
                    y++;
                }
                if (x != 0) {

                    ANode<int>* tempNode;
                    tempNode = avl.searchTree(stoi(death));
                    if (tempNode == avl.getNull()) {
                        tempNode = avl.insert(stoi(death));
                        count = x + 1;
                        tempNode->list.insertAtEnd(initialPath + ", " + to_string(count));
                        tempNode->fileName = outputName + death;
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


    avl.plsDeath();


    avl.preorder();
}

string helpDeath(string line) {
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

string searchByDeath(int y1) {
    ifstream fin;
    string Path = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedDeaths\\RBTD";
    Path += to_string(y1);
    string line;
    fin.open(Path, ios::in);
    int line_num = 1;
    while (line_num != 4) {
        getline(fin, line);
        line_num++;
    }
    int x = 0;
    string final = "";
    final += helpDeath(line);
    final += '\n';

    while (!fin.eof()) {
        getline(fin, line);
        if (line == "") {
            break;
        }
        final += helpDeath(line);
        final += '\n';


    }
    fin.close();

    return final;

}



string searchByDeathRange(int y1, int y2) {
  
    string final = "";
    for (int i = y1; i <= y2; i++) {


        ifstream fin;
        string Path = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedDeaths\\RBTD";
        Path += to_string(i);
        string line;
        fin.open(Path, ios::in);
        int line_num = 1;
        while (line_num != 4) {
            getline(fin, line);
            line_num++;
        }
        int x = 0;

        final += helpDeath(line);
        final += '\n';

        while (!fin.eof()) {
            getline(fin, line);
            if (line == "") {
                break;
            }
            final += helpDeath(line);
            final += '\n';


        }
        fin.close();
    }

    return final;
}