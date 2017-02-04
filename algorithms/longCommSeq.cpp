//
//  longCommSeq.cpp
//  algorithms
//
//  Created by Anand N Ilkal on 04/02/17.
//  Copyright © 2017 Anand N Ilkal. All rights reserved.
//

#include "longCommSeq.hpp"
#include <stdlib.h>
#include <string.h>

using namespace std;

namespace imo_sort {
	longCommSeq::longCommSeq(){

	}
	
	longCommSeq::~longCommSeq() {
		
	}
	
	uint32_t longCommSeq::getLCSlength(unsigned char *inalist, unsigned char *inblist) {
		alist = inalist;
		blist = inblist;
		uint32_t alen = std::strlen(reinterpret_cast<const char*>(alist));
		uint32_t blen = std::strlen(reinterpret_cast<const char*>(blist));
		_sequence = reinterpret_cast<uint32_t**>(malloc((alen+1) * sizeof(uint32_t*)));
		for(int j = 0; j < alen+1; j++) {
			_sequence[j] = reinterpret_cast<uint32_t*>(malloc((blen+1) * sizeof(uint32_t)));
			for(int k = 0; k < blen+1; k++) {
				_sequence[j][k] = 0;
			}
		}
		return getLCS(alen, blen);
	}
	
	uint32_t longCommSeq::getLCS(int32_t a, int32_t b) {
		uint32_t max = 0;
		uint32_t alen = 0;
		uint32_t blen = 0;
		
		for(int i = 0 ; i <= a ; i++) {
			for(int j = 0; j <= b; j++) {
				if( i == 0 || j == 0) {
					_sequence[i][j] = 0;
				}
				else if (alist[i-1] == blist[j-1]) {
					_sequence[i][j] = 1 +  _sequence[i-1][j-1];
				} else {
					_sequence[i][j] = getmax(_sequence[i-1][j], _sequence[i][j-1]);
				}
			}
		}
		
		return _sequence[a][b];
	}
	
	uint32_t longCommSeq::getmax(uint32_t a, uint32_t b) {
		return a > b ? a : b;
	}
	
}
