//
//  main.cpp
//  testmerge
//
//  Created by Anand N Ilkal on 22/01/17.
//  Copyright © 2017 Anand N Ilkal. All rights reserved.
//

#include <iostream>
#include "sort.hpp"

using namespace imo_sort;
int main(int argc, const char * argv[]) {
	// insert code here...
	sort_algo algorithm;
	
	sort_algo *merge_sort = algorithm.getAlgoObject(imo_sort::MERGE);
	uint32_t mylist[] = {8,29,7,11,3,5774,85,934,84765,1,977};
	merge_sort->runSort(mylist, sizeof(mylist)/sizeof(mylist[0]));
	return 0;
}
