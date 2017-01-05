//
// Created by Boran Yildirim on 3.01.2017.
//

#include <fstream>
#include <iostream>
#include "PeopleDatabase.h"

PeopleDatabase::PeopleDatabase(const string &file) {
    for (int i = 0; i < SIZE; ++i) {
        database[i] = NULL;
    }

    readFile(file);
}

PeopleDatabase::~PeopleDatabase() {
    for (int i = 0; i < SIZE; ++i) {
        if (database[i] != NULL)
            delete database[i];
    }
}

void PeopleDatabase::addPerson(int id, string name, int phone) {
    int index = hash(id);
    if (database[index] == NULL) {
        database[index] = new PeopleAVLTree;
        Person *p = new Person;
        p->id = id;
        p->name = name;
        p->phoneNumber = phone;
        database[index]->insert(p);
    }
    else {
        Person *p = new Person;
        p->id = id;
        p->name = name;
        p->phoneNumber = phone;
        database[index]->insert(p);
    }
}

void PeopleDatabase::deletePerson(int id) {

}

void PeopleDatabase::getPerson(int id) {
    int index = hash(id);
    PeopleAVLTree *cur = database[index];
    if (cur != NULL)
        cur->search(id);
}

int PeopleDatabase::hash(int id) {
    return id % SIZE;   // simple hash function
}

void PeopleDatabase::readFile(const string &file) {

    ifstream myfile (file.c_str());
    if ( myfile.is_open() ) {

        int id = 0, phone = 0;
        string name;
        while ( myfile >> id >> name >> phone ) {
            addPerson(id, name, phone);
        }
    }
    else {  // the file is empty
        cout << "File is empty." << endl;
    }
}
