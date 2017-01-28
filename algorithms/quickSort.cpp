//
//  quickSort.cpp
//  algorithms
//
//  Created by Anand N Ilkal on 28/01/17.
//  Copyright © 2017 Anand N Ilkal. All rights reserved.
//

#include "quickSort.hpp"

namespace imo_sort {

	quickSort::quickSort() {
		
	}
	
	quickSort::~quickSort() {
		
	}
	
	uint32_t quickSort::findPivot(uint32_t start, uint32_t end) {
		return start + (end - start)/2;
	}
	
	bool quickSort::runSort(uint32_t *dlist, uint32_t len) {
		quick_sort(dlist, 0, len-1);
		for(int i = 0; i < len; i++){
			printf("%7u\t", dlist[i]);
		}
		printf("\n");
		return true;
	}
	
	void quickSort::quick_sort(uint32_t *dlist, int32_t s, int32_t e) {
		if(s >= e) {
			return;
		}
		uint32_t pvt = order_data(dlist, s, e);
		if(pvt-1 >= s) {
			quick_sort(dlist, s, pvt-1);
		}
		if(e >= pvt+1) {
			quick_sort(dlist, pvt+1, e);
		}
	}
	
	bool quickSort::runSort(std::vector<uint32_t> *dlist) {
		return true;
	}
	
	uint32_t quickSort::order_data(uint32_t *dlist, int32_t s, int32_t e) {
		uint32_t cnt = s-1;
		uint32_t pvt = dlist[e];
		for(int i = s; i <= e-1; i++) {
			if(dlist[i] <= pvt) {
				cnt++;
				swap(&dlist[cnt], &dlist[i]);
			}
		}
		swap(&dlist[cnt+1], &dlist[e]);
		return cnt+1;
	}
}
