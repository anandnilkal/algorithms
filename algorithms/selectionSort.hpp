//
//  selectionSort.hpp
//  algorithms
//
//  Created by Anand N Ilkal on 19/01/17.
//  Copyright © 2017 Anand N Ilkal. All rights reserved.
//

#ifndef selectionSort_hpp
#define selectionSort_hpp

#include <stdio.h>
#include "sort.hpp"

namespace imo_sort {
	class selectionSort : public sort_algo {
	public:
		selectionSort();
		virtual ~selectionSort();
	
		bool runSort(uint32_t*, uint32_t);
		bool runSort(std::vector<uint32_t>*);
	};
}
#endif /* selectionSort_hpp */
