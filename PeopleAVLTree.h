//
// Created by Boran Yildirim on 3.01.2017.
//

#ifndef HASH_CHAIN_H
#define HASH_CHAIN_H

#include <string>

using namespace std;

struct Person {
    // person properties
    int id;
    string name;
    int phoneNumber;

    int height; //depth of the node in the tree

    Person *left;
    Person *right;
};

class PeopleAVLTree {
public:
    PeopleAVLTree();

    ~PeopleAVLTree();

    bool isEmpty ();

    void search (int id);

    void insert (Person *&person);

    void remove (int id);

private:

    void search (Person *person, int id);

    Person *insert (Person *root, Person *person);

    int max (int a, int b);

    void setHeight(Person *person);

    Person *rotateLeft (Person *person);
    Person *rotateRight (Person *person);

    Person *balance (Person *person);

    void dealloc (Person *person);

    // root of the AVLTREE and NIL for the end of the tree
    Person *root, *NIL;

    friend class PeopleDatabase;
};

#endif //HASH_CHAIN_H
