//
//  main.cpp
//  testmain
//
//  Created by Anand N Ilkal on 19/01/17.
//  Copyright © 2017 Anand N Ilkal. All rights reserved.
//

#include <iostream>
#include "sort.hpp"


using namespace imo_sort;
int main(int argc, const char * argv[]) {
	// insert code here...
	sort_algo algorithm;
	sort_algo *select_sort = algorithm.getObject(imo_sort::SELECTION);
	
	uint32_t mylist[] = {8,29,7,11,3, 85, 934, 84765, 3, 5774, 97};
	select_sort->runSort(mylist, sizeof(mylist)/sizeof(mylist[0]));
	return 0;
}
