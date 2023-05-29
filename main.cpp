/*

                                                    Datebase System by:
                                                    Fareeah Naseem 21i-0500
                                                    Malaika 21i-2559
                                                    Muhammad Ibrahim Basit 21i-0669


*/




#include <iostream>
#include "IDIndexing.h"
#include "YearlyIndexing.h"
#include "StateIndexing.h"
#include "CauseIndexing.h"
#include "113CauseIndexing.h"
#include "DeathIndexing.h"
#include "DeathRateIndexing.h"
#include "UpdateQuery.h"
#include "DeleteQuery.h"
using namespace std;


int main()
{
    int x;
    int y;

    string z = "";
    string z2 = "";

    double a = 0.0;
    double b = 0.0;

    char random = ' ';

    cout << "_______________________________ " << endl;
    cout << "WELCOME TO OUR DATABASE SYSTEM " << endl;
    cout << "_______________________________ " << endl;
    cout << endl;
    cout << endl;
    cout << "Which of the following tree would you like to continue with " << endl;
    cout << endl;
    cout << "1) Press 1 to continue with AVL Trees " << endl;
    cout << "2) Press 2 to continue with Red Black Trees " << endl;
    cout << "3) Press 3 to continue with B-Trees " << endl;
    cin >> x;

    if (x == 1) {

        system("cls");
        cout << "--------------------------- " << endl;
        cout << "AVL TREES " << endl;
        cout << "--------------------------- " << endl;
        cout << endl;

        cout << "On which of the following basis would you like to perform indexing " << endl;
        cout << endl;
        cout << endl;

        cout << "1) Press 1 for ID Indexing " << endl;
        cout << "2) Press 2 for Year Indexing " << endl;
        cout << "3) Press 3 for State Indexing " << endl;
        cout << "4) Press 4 for Cause Indexing " << endl;
        cout << "5) Press 5 for 113 Cause Indexing " << endl;
        cout << "6) Press 6 for Death Indexing " << endl;
        cout << "7) Press 7 for Death Rate Indexing " << endl;

        cin >> y;

        if (y == 1) {

            system("cls");
            IDindexAVL();
            cout << "ID Indexing on AVL Trees done." << endl;

        }

        if (y == 2) {

            system("cls");
            yearIndexAVL();
            cout << "Yearly Indexing on AVL Trees done." << endl;

        }

        if (y == 3) {

            system("cls");
            stateIndexAVL();
            cout << "State Indexing on AVL Trees done." << endl;

        }

        if (y == 4) {

            system("cls");
            causeIndexAVL();
            cout << "Cause Indexing on AVL Trees done." << endl;

        }

        if (y == 5) {

            system("cls");
            cause113IndexAVL();
            cout << "113 Cause Indexing on AVL Trees done." << endl;

        }

        if (y == 6) {

            system("cls");
            deathIndexAVL();
            cout << "Death Indexing on AVL Trees done." << endl;

        }

        if (y == 7) {

            system("cls");
            deathRateIndexAVL();
            cout << "Death Rate Indexing on AVL Trees done." << endl;

        }


    }


    if (x == 2) {

        system("cls");
        cout << "--------------------------- " << endl;
        cout << " RED BLACK TREES " << endl;
        cout << "--------------------------- " << endl;
        cout << endl;

        cout << "On which of the following basis would you like to perform indexing " << endl;
        cout << endl;
        cout << endl;

        int y;

        cout << "1) Press 1 for ID Indexing " << endl;
        cout << "2) Press 2 for Year Indexing " << endl;
        cout << "3) Press 3 for State Indexing " << endl;
        cout << "4) Press 4 for Cause Indexing " << endl;
        cout << "5) Press 5 for 113 Cause Indexing " << endl;
        cout << "6) Press 6 for Death Indexing " << endl;
        cout << "7) Press 7 for Death Rate Indexing " << endl;

        cin >> y;

        if (y == 1) {

            system("cls");
            IDindex();
            cout << "ID Indexing on Red Black Trees done." << endl;

        }

        if (y == 2) {

            system("cls");
            yearIndex();
            cout << "Year Indexing on Red Black Trees done." << endl;

        }

        if (y == 3) {

            system("cls");
            stateIndex();
            cout << "State Indexing on Red Black Trees done." << endl;

        }

        if (y == 4) {

            system("cls");
            causeIndex();
            cout << "Cause Indexing on Red Black Trees done." << endl;

        }

        if (y == 5) {

            system("cls");
            cause113Index();
            cout << "113 Cause Indexing on Red Black Trees done." << endl;

        }

        if (y == 6) {

            system("cls");
            deathIndex();
            cout << "Death Indexing on Red Black Trees done." << endl;

        }

        if (y == 7) {

            system("cls");
            deathRateIndex();
            cout << "Death Rate Indexing on Red Black Trees done." << endl;

        }

    }

    if (x == 3) {

        system("cls");
        cout << "--------------------------- " << endl;
        cout << " B-TREES " << endl;
        cout << "--------------------------- " << endl;
        cout << endl;

        cout << "On which of the following basis would you like to perform indexing " << endl;
        cout << endl;
        cout << endl;

        int y;

        cout << "1) Press 1 for ID Indexing " << endl;
        cout << "2) Press 2 for Year Indexing " << endl;
        cout << "3) Press 3 for State Indexing " << endl;
        cout << "4) Press 4 for Cause Indexing " << endl;
        cout << "5) Press 5 for 113 Cause Indexing " << endl;
        cout << "6) Press 6 for Death Indexing " << endl;
        cout << "7) Press 7 for Death Rate Indexing " << endl;

        cin >> y;

        if (y == 1) {

            system("cls");
            //BTreeIndexing();

        }

        if (y == 2) {

            system("cls");


        }

        if (y == 3) {

            system("cls");

        }

        if (y == 4) {

            system("cls");

        }

        if (y == 5) {

            system("cls");

        }

        if (y == 6) {

            system("cls");

        }

        if (y == 7) {

            system("cls");

        }

    }

    cin >> random;

    system("cls");

    cout << "Which of the following operations do you want to perform: " << endl;

    cout << endl;

    cout << "Enter 1 to Search by ID" << endl;
    cout << "Enter 2 to Search by Year" << endl;
    cout << "Enter 3 to Search by Cause" << endl;
    cout << "Enter 4 to Search by 113 Cause" << endl;
    cout << "Enter 5 to Search by State" << endl;
    cout << "Enter 6 to Search by Deaths" << endl;
    cout << "Enter 7 to Search by Death Rate" << endl;

    cout << endl;

    cout << "Enter 8 to Range Search by ID" << endl;
    cout << "Enter 9 to Range Search by Year" << endl;
    cout << "Enter 10 to Range Search by Deaths" << endl;
    cout << "Enter 11 to Range Search by Death Rate" << endl;

    cout << endl;

    cout << "Enter 12 to Update Year" << endl;
    cout << "Enter 13 to Update Cause" << endl;
    cout << "Enter 14 to Update 113 Cause" << endl;
    cout << "Enter 15 to Update State" << endl;
    cout << "Enter 16 to Update Deaths" << endl;
    cout << "Enter 17 to Update Death Rate" << endl;

    cout << endl;

    cout << "Enter 18 to Delete by ID" << endl;

    cout << endl;

    cin >> y;

    if (y == 1) {

        system("cls");
        cout << "Enter ID to Search: ";
        cin >> z;
        cout << searchBYID(z);
        cout << endl;

    }

    if (y == 2) {

        system("cls");
        cout << "Enter Year to Search: ";
        cin >> z;
        cout << searchByYear(z);
        cout << endl;

    }

    if (y == 3) {

        system("cls");
        cout << "Enter Cause to Search: ";
        cin >> z;
        cout << searchByCause(z);
        cout << endl;

    }

    if (y == 4) {

        system("cls");
        cout << "Enter 113 Cause to Search: ";
        cin >> z;
        cout << searchByCause113(z);
        cout << endl;

    }

    if (y == 5) {

        system("cls");
        cout << "Enter State to Search: ";
        cin >> z;
        cout << searchByState(z);
        cout << endl;

    }

    if (y == 6) {

        system("cls");
        cout << "Enter Deaths to Search: ";
        cin >> z;
        cout << searchByDeath(stoi(z));
        cout << endl;

    }

    if (y == 7) {

        system("cls");
        cout << "Enter Death Rate to Search: ";
        cin >> a;
        cout << searchByDeathRate(a);
        cout << endl;

    }

    if (y == 8) {

        system("cls");
        cout << "Enter ID 1 for Range Search: ";
        cin >> z;
        cout << "Enter ID 2 for Range Search: ";
        cin >> z2;
        cout << searchByIDRange(stoi(z), stoi(z2));
        cout << endl;

    }

    if (y == 9) {

        system("cls");
        cout << "Enter Year 1 for Range Search: ";
        cin >> z;
        cout << "Enter Year 2 for Range Search: ";
        cin >> z2;
        cout << searchByYearRange(z, z2);
        cout << endl;

    }

    if (y == 10) {

        system("cls");
        cout << "Enter Death 1 for Range Search: ";
        cin >> z;
        cout << "Enter Death 2 for Range Search: ";
        cin >> z2;
        cout << searchByDeathRange(stoi(z), stoi(z2));
        cout << endl;

    }

    if (y == 11) {

        system("cls");
        cout << "Enter Death Rate 1 for Range Search: ";
        cin >> a;
        cout << "Enter Death Rate 2 for Range Search: ";
        cin >> b;
        cout << searchByDeathRateRange(a, b);
        cout << endl;

    }

    if (y == 12) {

        system("cls");
        cout << "Enter ID for Range Search: ";
        cin >> z;
        cout << searchBYID(z);
        cout << endl;

    }

    if (y == 13) {

        system("cls");
        cout << "Enter ID for Range Search: ";
        cin >> z;
        cout << searchBYID(z);
        cout << endl;

    }

    if (y == 14) {

        system("cls");
        cout << "Enter ID for Range Search: ";
        cin >> z;
        cout << searchBYID(z);
        cout << endl;

    }

    if (y == 12) {
        system("cls");
        string f;
        int d;
        cout << "Enter the id of the record to update: ";
        cin >> d;
        string oldVal;
        string newVal;
        cout << "Enter the old value of year: ";
        cin >> oldVal;
        cout << "Enter the new value of year: ";
        cin >> newVal;

        update(d, "year", oldVal, newVal);
        cout << "Value updated Successfully!" << endl;
        int dummyinput;
        cin >> dummyinput;



    }

    if (y == 13) {

        system("cls");
        string f;
        int d;
        cout << "Enter the id of the record to update: ";
        cin >> d;
        string oldVal;
        string newVal;
        cout << "Enter the old value of cause: ";
        cin >> oldVal;
        cout << "Enter the new value of cause: ";
        cin >> newVal;

        update(d, "cause", oldVal, newVal);
        cout << "Value updated Successfully!" << endl;
        int dummyinput;
        cin >> dummyinput;
    }

    if (y == 14) {
        system("cls");
        string f;
        int d;
        cout << "Enter the id of the record to update: ";
        cin >> d;
        string oldVal;
        string newVal;
        cout << "Enter the old value of 113cause: ";
        cin >> oldVal;
        cout << "Enter the new value of 113cause: ";
        cin >> newVal;

        update(d, "cause113", oldVal, newVal);
        cout << "Value updated Successfully!" << endl;
        int dummyinput;
        cin >> dummyinput;

    }

    if (y == 15) {
        system("cls");
        string f;
        int d;
        cout << "Enter the id of the record to update: ";
        cin >> d;
        string oldVal;
        string newVal;
        cout << "Enter the old value of state: ";
        cin >> oldVal;
        cout << "Enter the new value of state: ";
        cin >> newVal;

        update(d, "state", oldVal, newVal);
        cout << "Value updated Successfully!" << endl;
        int dummyinput;
        cin >> dummyinput;

    }

    if (y == 16) {

        system("cls");
        string f;
        int d;
        cout << "Enter the id of the record to update: ";
        cin >> d;
        string oldVal;
        string newVal;
        cout << "Enter the old value of deaths: ";
        cin >> oldVal;
        cout << "Enter the new value of deaths: ";
        cin >> newVal;

        update(d, "deaths", oldVal, newVal);
        cout << "Value updated Successfully!" << endl;
        int dummyinput;
        cin >> dummyinput;
    }

    if (y == 17) {

        system("cls");
        string f;
        int d;
        cout << "Enter the id of the record to update: ";
        cin >> d;
        string oldVal;
        string newVal;
        cout << "Enter the old value of death rate: ";
        cin >> oldVal;
        cout << "Enter the new value of death rate: ";
        cin >> newVal;

        update(d, "deathrate", oldVal, newVal);
        cout << "Value updated Successfully!" << endl;
        int dummyinput;
        cin >> dummyinput;
    }

    if (y == 18) {
        int d;
        cout << "Enter the id of the record to delete: ";
        cin >> d;
        deleteQuery(d);
        cout << "Record deleted successfully";
        cout << endl;
        int dummyinput;
        cin >> dummyinput;

    }



    return 0;
    //IDindex();
    //IDindexAVL();
    //stateIndex();
    //cout << searchBYID("5988") << endl;
    //yearIndex();
    //causeIndex();
    //cout << searchByYear("2016") << endl;
    //cout << searchByState("Indiana");
    //cout << searchByCause("Unintentional injuries");
   //cout << searchByCause113("All Causes") << endl;
    //cout << searchByYearRange("1999", "2000") << endl;
    //cout << searchByIDRange(10, 20);
     // cause113Index();
   //deathIndex();
    //deathRateIndexAVL();
   // cout << searchByDeathRate(5) << endl;
    //cout << searchByDeathRate(2.6) << endl;
    //update(3, "year", "2016", "2018");
   // deleteQuery(3);
    //cout << searchByDeath(21);
    return 0;
}