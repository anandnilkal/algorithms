//
//  bubbleSort.hpp
//  algorithms
//
//  Created by Anand N Ilkal on 22/01/17.
//  Copyright © 2017 Anand N Ilkal. All rights reserved.
//

#ifndef bubbleSort_hpp
#define bubbleSort_hpp

#include <stdio.h>
#include "sort.hpp"

namespace imo_sort {
	class bubbleSort : public sort_algo {
	public:
		bubbleSort();
		virtual ~bubbleSort();
		
		bool runSort(uint32_t*, uint32_t);
		bool runSort(std::vector<uint32_t>*);
	};
}
#endif /* bubbleSort_hpp */
