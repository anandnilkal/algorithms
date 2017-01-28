//
//  main.cpp
//  testquick
//
//  Created by Anand N Ilkal on 28/01/17.
//  Copyright © 2017 Anand N Ilkal. All rights reserved.
//

#include <iostream>
#include "sort.hpp"

using namespace imo_sort;
int main(int argc, const char * argv[]) {
	sort_algo algorithm;
	sort_algo *quick_sort = algorithm.getAlgoObject(imo_sort::QUICK);
	
	uint32_t mylist[] = {8,29,7,11,3,5774,85,934,84765,1,97};
	quick_sort->runSort(mylist, sizeof(mylist)/sizeof(mylist[0]));
    return 0;
}
