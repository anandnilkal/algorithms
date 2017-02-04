//
//  main.cpp
//  longIncrSeq
//
//  Created by Anand N Ilkal on 04/02/17.
//  Copyright © 2017 Anand N Ilkal. All rights reserved.
//

#include <iostream>
#include "longIncrSeq.hpp"

using namespace imo_sort;
int main(int argc, const char * argv[]) {

	longIncrSeq	LIS;
	uint32_t arr[] = { 10, 22, 9, 33, 21, 50, 41, 40 };
	printf("length of LIS = %u\n",LIS.getLISlength(arr, 8));
    return 0;
}
