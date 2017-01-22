//
//  mergeSort.cpp
//  algorithms
//
//  Created by Anand N Ilkal on 22/01/17.
//  Copyright © 2017 Anand N Ilkal. All rights reserved.
//

#include "mergeSort.hpp"
#include <stdlib.h>

using namespace std;
namespace imo_sort {
	mergeSort::mergeSort() {
		newlist = nullptr;
	}
	mergeSort::~mergeSort() {
		if(newlist) {
			free(newlist);
		}
		newlist = nullptr;
	}
	
	bool mergeSort::runSort(uint32_t *dlist, uint32_t len) {
		newlist = reinterpret_cast<uint32_t*>(malloc(len));
		sort(dlist, 0, len-1, len);
		for (int i = 0 ; i < len ; i++) {
			printf("%7u\t", dlist[i]);
		}
		printf("\n");
		return true;
	}
	
	void mergeSort::sort(uint32_t *dlist, uint32_t s, uint32_t e, uint32_t len) {
		if(s < e) {
			uint32_t median = s + ((e-s)/2);
			sort(dlist, s, median, len);
			sort(dlist, median+1, e, len);
			merge(dlist, s, e, median, len);
		}
	}
	
	void mergeSort::merge(uint32_t *dlist, uint32_t s, uint32_t e, uint32_t m,
						  uint32_t len) {
		uint32_t left_index = s;
		uint32_t right_index = m+1;
		uint32_t index = s;
		
		memset(newlist, 0, sizeof(newlist));
		while(left_index < m+1 && right_index < e+1) {
			if(dlist[left_index] <= dlist[right_index]) {
				newlist[index++] = dlist[left_index++];
			} else {
				newlist[index++] = dlist[right_index++];
			}
		}
		while(left_index < m+1) {
			newlist[index++] = dlist[left_index++];
		}
		while(right_index < e+1) {
			newlist[index++] = dlist[right_index++];
		}
		for (int i = s; i < index ; i++) {
			dlist[i] = newlist[i];
		}
	}
	
	bool mergeSort::runSort(std::vector<uint32_t> *dlist) {
		return true;
	}
}
