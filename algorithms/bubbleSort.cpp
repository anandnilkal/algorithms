//
//  bubbleSort.cpp
//  algorithms
//
//  Created by Anand N Ilkal on 22/01/17.
//  Copyright © 2017 Anand N Ilkal. All rights reserved.
//

#include "bubbleSort.hpp"

namespace imo_sort{
	bubbleSort::bubbleSort() {
		_algo = imo_sort::BUBBLE;
	}
	
	bubbleSort::~bubbleSort() {
		
	}
	
	bool bubbleSort::runSort(uint32_t *dlist, uint32_t len){
		/*
		 *	complexity of problem is driven by 2 for loops O(n*n)
		 */
		for (int s = 0; s < len; s++){
			for (int t = 0; t < (len-s-1); t++){
				if(dlist[t] > dlist[t+1]) {
					swap(&dlist[t], &dlist[t+1]);
				}
			}
			for (int i = 0 ; i < len ; i++) {
				printf("%2u\t", dlist[i]);
			}
			printf("\n");
		}
		return true;
	}
	
	bool bubbleSort::runSort(std::vector<uint32_t> *dlist) {
		return true;
	}
}
