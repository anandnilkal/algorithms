//
//  sort.cpp
//  algorithms
//
//  Created by Anand N Ilkal on 18/01/17.
//  Copyright © 2017 Anand N Ilkal. All rights reserved.
//

#include "sort.hpp"

namespace imo_sort{

	sort_algo::sort_algo() {}
	
	sort_algo::~sort_algo() {}
	
	void sort_algo::set_sort_algo(sort_algo_t t) {
		_algo = t;
	}
	
	sort_algo_t sort_algo::get_sort_algo() {
		return _algo;
	}
	
	sort_algo* sort_algo::getAlgoObject() {
		return getObject(_algo);
	}
	
	sort_algo* sort_algo::getAlgoObject(sort_algo_t t){
		_algo = t;
		return getObject(_algo);
	}
	
	sort_algo* sort_algo::getObject(sort_algo_t t) {
		switch(t) {
			case SELECTION:
			case BUBBLE:
			case QUICK:
			case INSERTION:
			case MERGE:
			case HEAP:
			case COUNTING:
			case BUCKET:
			case COMB:
			case PIGEONHOLE:
				return nullptr;
				break;
		}
		
		return nullptr;
	}
}
