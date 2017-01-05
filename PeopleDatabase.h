//
// Created by Boran Yildirim on 3.01.2017.
//

#ifndef HASH_HASHDATABASE_H
#define HASH_HASHDATABASE_H

#include <string>
#include "PeopleAVLTree.h"

using namespace std;

// prime number
#define SIZE 269

class PeopleDatabase {
public:
    // constructor
    PeopleDatabase (const string &file);

    // destructor
    ~PeopleDatabase ();

    // add person to the database
    void addPerson (int id, string name, int phone);

    // delete person from database
    void deletePerson (int id);

    // get person information
    void getPerson (int id);

private:
    // hash function mod(SIZE)
    int hash (int id);

    void readFile (const string &file);

    PeopleAVLTree *database[SIZE];

};


#endif //HASH_HASHDATABASE_H
