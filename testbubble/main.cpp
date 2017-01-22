//
//  main.cpp
//  testbubble
//
//  Created by Anand N Ilkal on 22/01/17.
//  Copyright © 2017 Anand N Ilkal. All rights reserved.
//

#include <iostream>
#include "sort.hpp"

using namespace imo_sort;
int main(int argc, const char * argv[]) {
	// insert code here...
	sort_algo algo;
	sort_algo *bubble_sort = algo.getAlgoObject(imo_sort::BUBBLE);
	
	uint32_t mylist[] = {8,29,7,11,3, 5774,85, 934, 84765, 3, 97};
	bubble_sort->runSort(mylist, sizeof(mylist)/sizeof(mylist[0]));
    return 0;
}
