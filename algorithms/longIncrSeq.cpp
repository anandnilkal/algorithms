//
//  longIncrSeq.cpp
//  algorithms
//
//  Created by Anand N Ilkal on 04/02/17.
//  Copyright © 2017 Anand N Ilkal. All rights reserved.
//

#include "longIncrSeq.hpp"

namespace imo_sort {
	
	longIncrSeq::longIncrSeq() {
		_sequence.clear();
	}
	
	longIncrSeq::~longIncrSeq() {
		_sequence.clear();
	}
	
	uint32_t longIncrSeq::runLis() {
		
		uint32_t max = 1;
		
		for(int i = 0; i < length; i++) {
			_sequence[i] = 1;
		}
		
		for(int i = 1; i < length; i++) {
			for(int j = 0; j < i; j++ ) {
				if(dlist[j] < dlist[i] && _sequence[i] < _sequence[j] + 1) {
					_sequence[i] = _sequence[j] + 1;
				}
			}
		}
		
		for(int i = 0; i < length; i++ ) {
			if(_sequence[i] > max){
				max = _sequence[i];
			}
		}
		
		return max;
	}
	
	uint32_t longIncrSeq::getLISlength(uint32_t *inlist, uint32_t len) {
		dlist = inlist;
		length = len;
		_sequence.resize(length);
		return runLis();
	}
}
