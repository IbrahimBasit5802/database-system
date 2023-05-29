#pragma once
#include <fstream>
#include <string>
#include "BTree.h"
#include "AVLTree.h"
#include "RedBlackTree.h"
using namespace std;

void deathRateIndex() {
    RedBlackTree<double> rbt;
    string initialPath;
    string outputName = "RBTDR";
    int y;
    string line;
    string deathRate;
    ifstream fin;
    int count;
    for (int i = 1; i <= 10; i++) {
        initialPath = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\datafiles\\NCHS_-_Leading_Causes_of_Death__United_States_";
        initialPath += to_string(i);
        initialPath += ".csv";
        fin.open(initialPath, ios::in);
        line = "";
        deathRate = "";
       
        int x = 0;
        while (!fin.eof()) {
            deathRate = "";
            y = 0;
            line = "";
            getline(fin, line);
            if (line != "") {
                // get the col val that is death rate
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
                    y++;
                }
                y++;

                
                while (y < line.length()) {
                    if (line[y] != ',') {
                        deathRate += line[y];

                    }
                    y++;
                }

               


                if (x != 0) {

                    RNode<double>* tempNode;
                    tempNode = rbt.searchTree(stod(deathRate));
                    if (tempNode == rbt.getNull()) {
                        tempNode = rbt.insert(stod(deathRate));
                        count = x + 1;
                        tempNode->list.insertAtEnd(initialPath + ", " + to_string(count));
                        tempNode->fileName = outputName + deathRate;
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


    rbt.plsDeathRate();


    rbt.preorder();
}

void deathRateIndexAVL() {
    AVLTree<double> avl;
    string initialPath;
    string outputName = "RBTDR";
    int y;
    string line;
    string deathRate;
    ifstream fin;
    int count;
    for (int i = 1; i <= 10; i++) {
        initialPath = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\datafiles\\NCHS_-_Leading_Causes_of_Death__United_States_";
        initialPath += to_string(i);
        initialPath += ".csv";
        fin.open(initialPath, ios::in);
        line = "";
        deathRate = "";

        int x = 0;
        while (!fin.eof()) {
            deathRate = "";
            y = 0;
            line = "";
            getline(fin, line);
            if (line != "") {
                // get the col val that is death rate
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
                    y++;
                }
                y++;


                while (y < line.length()) {
                    if (line[y] != ',') {
                        deathRate += line[y];

                    }
                    y++;
                }


                if (x != 0) {

                    ANode<double>* tempNode;
                    tempNode = avl.searchTree(stod(deathRate));
                    if (tempNode == avl.getNull()) {
                        tempNode = avl.insert(stod(deathRate));
                        count = x + 1;
                        tempNode->list.insertAtEnd(initialPath + ", " + to_string(count));
                        tempNode->fileName = outputName + deathRate;
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


    avl.plsDeathRate();


    avl.preorder();
}

string helpDeathRate(string line) {
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

string searchByDeathRate(double y1) {
    ifstream fin;
    string val = std::to_string(y1);
    val.erase(val.find_last_not_of('0') + 1, std::string::npos);
    val.erase(val.find_last_not_of('.') + 1, std::string::npos);
    string Path = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedDeathRate\\RBTDR";
    Path += val;
    string line;
    fin.open(Path, ios::in);
    int line_num = 1;
    while (line_num != 4) {
        getline(fin, line);
        line_num++;
    }
    int x = 0;
    string final = "";
    final += helpDeathRate(line);
    final += '\n';

    while (!fin.eof()) {
        getline(fin, line);
        if (line == "") {
            break;
        }
        final += helpDeathRate(line);
        final += '\n';


    }
    fin.close();

    return final;

}


string searchByDeathRateRange(double id1, double id2) {
    string output;
    string final = "";
    for (int i = id1; i <= id2; i++) {
        ifstream fin;
        string Path = "C:\\Users\\ibasi\\source\\repos\\DS_Project\\IndexedDeathRate\\RBTDR";
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