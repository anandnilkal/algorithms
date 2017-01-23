//
//  heapSort.cpp
//  algorithms
//
//  Created by Anand N Ilkal on 23/01/17.
//  Copyright © 2017 Anand N Ilkal. All rights reserved.
//

#include "heapSort.hpp"

namespace imo_sort {
	heapSort::heapSort() {
		
	}
	
	heapSort::~heapSort() {
		
	}
	
	bool heapSort::runSort(uint32_t *dlist, uint32_t len) {
		heap_sort(dlist, len);
		for(int i = 0; i < len; i++){
			printf("%7u\t", dlist[i]);
		}
		printf("\n");
		return true;
	}
	
	bool heapSort::runSort(std::vector<uint32_t> *dlist) {
		return true;
	}
	
	void heapSort::heapify(uint32_t *dlist, uint32_t len, uint32_t index) {
		uint32_t lchild = 2 * index + 1;
		uint32_t rchild = 2 * index + 2;
		uint32_t clargest = index;
		
		if(lchild < len && (dlist[lchild] > dlist[index])) {
			index = lchild;
		}
		if(rchild < len && (dlist[rchild] > dlist[index])) {
			index = rchild;
		}
		
		if(index != clargest) {
			swap(&dlist[clargest], &dlist[index]);
			heapify(dlist, len, index);
		}
	}
	
	void heapSort::heap_sort(uint32_t *dlist, uint32_t len){
		for(int i = len/2 - 1; i >= 0; i--){
			heapify(dlist, len, i);
		}
		
		for(int i = len-1; i >= 0; i--){
			swap(&dlist[0], &dlist[i]);
			heapify(dlist, i, 0);
		}
	}
}
