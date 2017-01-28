//
//  quickSort.hpp
//  algorithms
//
//  Created by Anand N Ilkal on 28/01/17.
//  Copyright © 2017 Anand N Ilkal. All rights reserved.
//

#ifndef quickSort_hpp
#define quickSort_hpp

#include <stdio.h>
#include "sort.hpp"

namespace imo_sort {
	class quickSort : public sort_algo {
	public:
		quickSort();
		virtual ~quickSort();
		
		bool runSort(uint32_t*, uint32_t);
		bool runSort(std::vector<uint32_t>*);
		
	private:
		uint32_t	findPivot(uint32_t, uint32_t);
		void		quick_sort(uint32_t*, int32_t, int32_t);
		uint32_t	order_data(uint32_t*, int32_t, int32_t);
	};
}

#endif /* quickSort_hpp */
