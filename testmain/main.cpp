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
	std::cout << "Hello, World!\n";
	sort_algo *algorithm = new sort_algo();
	sort_algo *sort = algorithm->getObject(imo_sort::SELECTION);
	
	uint32_t mylist[] = {8,29,7,11,3};
	sort->runSort(mylist, sizeof(mylist)/sizeof(mylist[0]));
	return 0;
}
