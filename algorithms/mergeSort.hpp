//
//  mergeSort.hpp
//  algorithms
//
//  Created by Anand N Ilkal on 22/01/17.
//  Copyright © 2017 Anand N Ilkal. All rights reserved.
//

#ifndef mergeSort_hpp
#define mergeSort_hpp

#include <stdio.h>
#include "sort.hpp"

namespace imo_sort {
	
#define ONE 1
	class mergeSort : public sort_algo {
	public:
		mergeSort();
		virtual ~mergeSort();
		
		bool runSort(uint32_t *, uint32_t);
		bool runSort(std::vector<uint32_t>*);
		
	private:
		void sort(uint32_t*, uint32_t, uint32_t, uint32_t);
		void merge(uint32_t*, uint32_t, uint32_t, uint32_t, uint32_t);
	};
}
#endif /* mergeSort_hpp */
