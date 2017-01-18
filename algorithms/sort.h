//
//  sort.h
//  algorithms
//
//  Created by Anand N Ilkal on 18/01/17.
//  Copyright © 2017 Anand N Ilkal. All rights reserved.
//

#ifndef sort_h
#define sort_h

namespace imo_sort {

enum sort_algo_t {
	SELECTION = 0,
	BUBBLE    = 1,
	INSERTION = 2,
	MERGE     = 3,
	HEAP      = 4,
	QUICK     = 5,
	COUNTING  = 6,
	BUCKET    = 7,
	COMB      = 8,
	PIGEONHOLE= 9,
	MAX       = 10
};

	template<typename T>
	class sort_algo {
		typedef		T		algo_t;
		typedef		T*		palgo_t;
		typedef		T&		refalgo_t;
	public:
		sort_algo();
		virtual ~sort_algo();
		sort_algo_t get_sort_algo();
		
	private:
		sort_algo_t  _algo;
	};

#include "sortImpl.h"
}

#endif /* sort_h */
