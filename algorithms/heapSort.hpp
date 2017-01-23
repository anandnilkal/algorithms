//
//  heapSort.hpp
//  algorithms
//
//  Created by Anand N Ilkal on 23/01/17.
//  Copyright © 2017 Anand N Ilkal. All rights reserved.
//

#ifndef heapSort_hpp
#define heapSort_hpp

#include <stdio.h>
#include "sort.hpp"

namespace imo_sort {
	class heapSort : public sort_algo {
	public:
		heapSort();
		virtual ~heapSort();
		
		virtual bool runSort(uint32_t*, uint32_t);
		virtual bool runSort(std::vector<uint32_t>*);
		
		void heap_sort(uint32_t*, uint32_t);
		void heapify(uint32_t*, uint32_t, uint32_t);
	};
}

#endif /* heapSort_hpp */
