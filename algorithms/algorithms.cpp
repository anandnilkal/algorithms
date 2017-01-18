/*
 *  algorithms.cpp
 *  algorithms
 *
 *  Created by Anand N Ilkal on 18/01/17.
 *  Copyright © 2017 Anand N Ilkal. All rights reserved.
 *
 */

#include <iostream>
#include "algorithms.hpp"
#include "algorithmsPriv.hpp"

void algorithms::HelloWorld(const char * s)
{
    algorithmsPriv *theObj = new algorithmsPriv;
    theObj->HelloWorldPriv(s);
    delete theObj;
};

void algorithmsPriv::HelloWorldPriv(const char * s) 
{
    std::cout << s << std::endl;
};

