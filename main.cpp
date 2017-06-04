/*
Program: HW 4. Compares nodes of two linked lists and compares the values
Developer: Samantha Felzien
Class: CIS 269
Date: 2/19/2017
*/

#include <iostream>
#include "IntSLList.h"
#include "intSLList.h"
using namespace std;

int main()
{

//create 2 lists to be compared
    IntSLList list1;
    IntSLList list2;

//use member function of IntSLList addToHead() to add values to the nodes of the lists
    list1.addToHead(1);
    list1.addToHead(2);
    list1.addToHead(3);
    list1.addToHead(4);

    list2.addToHead(4);
    list2.addToHead(5);
    list2.addToHead(3);
    list2.addToHead(4);

//call sameCont() to compare contents of the nodes
   list1.sameCont(list1.head, list2.head);
}

