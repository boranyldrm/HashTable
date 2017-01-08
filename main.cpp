//
// Created by Boran Yildirim on 3.01.2017.
//

#include "PeopleDatabase.h"
#include <ctime>
#include <iostream>

using namespace std;

int main () {
    PeopleDatabase pd("/Users/boranyildirim/Desktop/CS202/Hash/people");
    clock_t begin, end;
    double time;
    int id;
    do {
        cout << "Enter id: ";
        cin >> id;
        begin = clock();
        pd.getPerson(id);
        end = clock();
        time = double(end - begin) / (double)CLOCKS_PER_SEC;
        cout << "Time: " << time << endl << endl;
    } while (id != -1);
    
    return 0;
}
