//
//  longIncrSeq.hpp
//  algorithms
//
//  Created by Anand N Ilkal on 04/02/17.
//  Copyright © 2017 Anand N Ilkal. All rights reserved.
//

#ifndef longIncrSeq_hpp
#define longIncrSeq_hpp

#include <stdio.h>
#include <stdint.h>
#include <vector>

using namespace std;
namespace imo_sort {
	class longIncrSeq {
	public:
		longIncrSeq();
		virtual ~longIncrSeq();
		
		uint32_t getLISlength(uint32_t*, uint32_t);
		
	private:
		uint32_t runLis();
		std::vector<int> _sequence;
		uint32_t		*dlist;
		uint32_t		length;
	};
}

#endif /* longIncrSeq_hpp */
