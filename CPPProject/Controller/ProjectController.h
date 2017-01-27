//
//  ProjectController.h
//  CPPProject
//
//  Created by Robson, Dylan on 1/27/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#ifndef ProjectController_h
#define ProjectController_h

class ProjectController
{
public:
    void start();
private:
    void tryNumbers(int sent);
    int changeNumber();
    void changeWithPointer(int * numberPointer);
    void pointerMethod();
};

#endif /* ProjectController_h */
