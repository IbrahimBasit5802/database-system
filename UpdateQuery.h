#pragma once
#include <iostream>
#include <fstream>
#include "LinkedList.h"
#include <stdio.h>
#include <direct.h>
#include <string>
#include <cstdio>

using namespace std;

void update(int id, string field, string oldVal, string newVal) {
    string id_ = "";
    string year = "";
    string Cause113 = "";
    string cause = "";
    string state = "";
    string deaths = "";
    string deathRate = "";
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
    string record;
    ifstream fileOut;
    fileOut.open(pls, ios::in);
    for (int i = 0; i < stoi(lineN); i++) {
        getline(fileOut, record);
    }

    fileOut.close();

    int x = 0;
    if (field == "year") {
        while (record[x] != ',') {
            id_ += record[x];
            x++;
        }
        x++;
        year = newVal;
        //skip year
        while (record[x] != ',') {
            x++;
        }
        x++;
        while (record[x] != ',') {
            if (record[x] == '\"')
            {
                Cause113 += '\"';
                x++;
                while (record[x] != '\"')
                {
                    Cause113 += record[x];
                    x++;
                }

            }
            Cause113 += record[x];
            x++;
        }
        x++;
        while (record[x] != ',') {
            cause += record[x];
            x++;
        }
        x++;
        while (record[x] != ',') {
            state += record[x];
            x++;
        }
        x++;
        while (record[x] != ',') {
            deaths += record[x];
            x++;
        }
        x++;

        while (x < record.length()) {
            deathRate += record[x];
            x++;
        }
 
    }

    else if (field == "cause113") {
        while (record[x] != ',') {
            id_ += record[x];
            x++;
        }
        x++;
        year = newVal;
        
        while (record[x] != ',') {
            year += record[x];
            x++;
        }
        x++;
        //skip cause 113
        while (record[x] != ',') {
            x++;
        }
        Cause113 = newVal;
        x++;
        while (record[x] != ',') {
            cause += record[x];
            x++;
        }
        x++;
        while (record[x] != ',') {
            state += record[x];
            x++;
        }
        x++;
        while (record[x] != ',') {
            deaths += record[x];
            x++;
        }
        x++;

        while (x < record.length()) {
            deathRate += record[x];
            x++;
        }

    }

    else if (field == "cause") {
        while (record[x] != ',') {
            id_ += record[x];
            x++;
        }
        x++;
        year = newVal;

        while (record[x] != ',') {
            year += record[x];
            x++;
        }
        x++;
        
        while (record[x] != ',') {
            if (record[x] == '\"')
            {
                Cause113 += '\"';
                x++;
                while (record[x] != '\"')
                {
                    Cause113 += record[x];
                    x++;
                }

            }
            Cause113 += record[x];
            x++;
        }
        
        x++;
        //skip cause
        while (record[x] != ',') {
            x++;
        }
        cause = newVal;
        x++;
        while (record[x] != ',') {
            state += record[x];
            x++;
        }
        x++;
        while (record[x] != ',') {
            deaths += record[x];
            x++;
        }
        x++;

        while (x < record.length()) {
            deathRate += record[x];
            x++;
        }

    }

    else if (field == "state") {
        while (record[x] != ',') {
            id_ += record[x];
            x++;
        }
        x++;
        year = newVal;

        while (record[x] != ',') {
            year += record[x];
            x++;
        }
        x++;

        while (record[x] != ',') {
            if (record[x] == '\"')
            {
                Cause113 += '\"';
                x++;
                while (record[x] != '\"')
                {
                    Cause113 += record[x];
                    x++;
                }

            }
            Cause113 += record[x];
            x++;
        }
        x++;
        
        while (record[x] != ',') {
            cause += record[x];
            x++;
        }
        
        x++;
        //skip state
        while (record[x] != ',') {
            x++;
        }
        state = newVal;
        x++;
        while (record[x] != ',') {
            deaths += record[x];
            x++;
        }
        x++;

        while (x < record.length()) {
            deathRate += record[x];
            x++;
        }

    }

    else if (field == "deaths") {
        while (record[x] != ',') {
            id_ += record[x];
            x++;
        }
        x++;
        year = newVal;

        while (record[x] != ',') {
            year += record[x];
            x++;
        }
        x++;

        while (record[x] != ',') {
            if (record[x] == '\"')
            {
                Cause113 += '\"';
                x++;
                while (record[x] != '\"')
                {
                    Cause113 += record[x];
                    x++;
                }

            }
            Cause113 += record[x];
            x++;
        }

        x++;

        while (record[x] != ',') {
            cause += record[x];
            x++;
        }

        x++;
        while (record[x] != ',') {
            state += record[x];
            x++;
        }
        x++;
        // skip deaths
        while (record[x] != ',') {
            x++;
        }
        deaths = newVal;
        x++;

        while (x < record.length()) {
            deathRate += record[x];
            x++;
        }

    }

    else if (field == "deathrate") {
        while (record[x] != ',') {
            id_ += record[x];
            x++;
        }
        x++;
        year = newVal;

        while (record[x] != ',') {
            year += record[x];
            x++;
        }
        x++;

        while (record[x] != ',') {
            if (record[x] == '\"')
            {
                Cause113 += '\"';
                x++;
                while (record[x] != '\"')
                {
                    Cause113 += record[x];
                    x++;
                }

            }
            Cause113 += record[x];
            x++;
        }

        x++;

        while (record[x] != ',') {
            cause += record[x];
            x++;
        }

        x++;
        while (record[x] != ',') {
            state += record[x];
            x++;
        }
        x++;
        while (record[x] != ',') {
            deaths += record[x];
            x++;
        }
        
        x++;
        // skip death rate

        deathRate = newVal;

    }

    string finalRecord = id_ + "," + year + "," + Cause113 + "," + cause + "," + state + "," + deaths + "," + deathRate;
  

    string temp;
    
    ifstream timeToDisco;
    LinkedList list;
    string r;

    timeToDisco.open(pls, ios::in);
    int l = 1;
    while (!timeToDisco.eof()) {
        if (l == stoi(lineN)) {
            list.insertAtEnd(finalRecord);
            getline(timeToDisco, r);
        }
        else {
            getline(timeToDisco, temp);
            list.insertAtEnd(temp);
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