//
//  selectionSort.cpp
//  algorithms
//
//  Created by Anand N Ilkal on 19/01/17.
//  Copyright © 2017 Anand N Ilkal. All rights reserved.
//

#include "selectionSort.hpp"

namespace imo_sort {
	
selectionSort::selectionSort() {
}

selectionSort::~selectionSort() {
}

bool selectionSort::runSort(uint32_t *dlist, uint32_t len) {
	uint32_t min = 0;
	/*
	 *	algorithm needs 2 for loops running over entire n elements.
	 *	hence complexity of the algorithm is O(n*n)
	 */
	for(int i = 0; i < len; i++) {
		min = i;
		for(int j = i+1; j < len; j++) {
			if (dlist[j] < dlist[min]) {
				min = j;
			}
		}
		/*
		 *	space complexity is O(1) as no extra space is needed except for 
		 *	temporary storage during swap operation.
		 */
		swap(&dlist[i], &dlist[min]);

		for (int i = 0 ; i < len ; i++) {
			printf("%2u\t", dlist[i]);
		}
		printf("\n");
	}

	return true;
}

bool selectionSort::runSort(std::vector<uint32_t> *dlist) {
	return true;
}
}
