//
//  ProjectController.cpp
//  CPPProject
//
//  Created by Robson, Dylan on 1/27/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#include <iostream>
#include "ProjectController.h"

using namespace std;

void ProjectController :: start()
{
    tryNumbers(5);
    cout << endl;
    
    int myNumber = 23465;
    
    int * numberPointer = &myNumber;
    
    myNumber = changeNumber();
    cout << "Changed? " << myNumber << endl;
    
    changeWithPointer(numberPointer);
    cout << "Changed??" << myNumber << endl;
    
    pointerMethod();
}

void ProjectController :: tryNumbers(int sent)
{
    cout << "Your number is: " << sent << endl;
    sent = (8 + 42 + 8272) / sent;
    cout << "Your number is now: " << sent << endl;
}

int ProjectController :: changeNumber()
{
    return 42;
}

void ProjectController :: changeWithPointer(int * numberPointedTo)
{
    *numberPointedTo += 9000;
}

void ProjectController :: pointerMethod()
{
    int num = 5;
    int * ptr = &num;
    
    cout << "num : " << num << endl;
    *ptr = 3;
    cout << "ptr : " << ptr << endl;
}
