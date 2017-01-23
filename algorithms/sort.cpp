//
//  sort.cpp
//  algorithms
//
//  Created by Anand N Ilkal on 18/01/17.
//  Copyright © 2017 Anand N Ilkal. All rights reserved.
//

#include "sort.hpp"
#include "selectionSort.hpp"
#include "bubbleSort.hpp"
#include "mergeSort.hpp"
#include "heapSort.hpp"

namespace imo_sort{

	sort_algo::sort_algo() {}
	
	sort_algo::~sort_algo() {}
	
	sort_algo* sort_algo::getAlgoObject() {
		return getObject(_algo);
	}
	
	sort_algo* sort_algo::getAlgoObject(sort_algo_t t){
		_algo = t;
		return getObject(_algo);
	}
	
	bool sort_algo::runSort(uint32_t *dlist, uint32_t len) {
		return true;
	}
	
	bool sort_algo::runSort(std::vector<uint32_t> *dlist) {
		return true;
	}
	
	void sort_algo::swap(uint32_t *l, uint32_t *r) {
		uint32_t temp = *l;
		*l = *r;
		*r = temp;
	}
	
	sort_algo* sort_algo::getObject(sort_algo_t t) {
		switch(t) {
			case SELECTION:
				return new selectionSort();
			case BUBBLE:
				return new bubbleSort();
			case QUICK:
			case INSERTION:
			case MERGE:
				return new mergeSort();
			case HEAP:
				return new heapSort();
			case COUNTING:
			case BUCKET:
			case COMB:
			case PIGEONHOLE:
				return nullptr;
				break;
			case MAX:
				break;
			default:
				break;
		}
		
		return nullptr;
	}
	
}
