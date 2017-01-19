//
//  sort.hpp
//  algorithms
//
//  Created by Anand N Ilkal on 18/01/17.
//  Copyright © 2017 Anand N Ilkal. All rights reserved.
//

#ifndef sort_hpp
#define sort_hpp

#include <stdio.h>
#include <stdint.h>
#include <vector>

using namespace std;

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
	
	class sort_algo {
	public:
		sort_algo();
		virtual ~sort_algo();
		sort_algo_t get_sort_algo();
		void set_sort_algo(sort_algo_t);
		
		sort_algo* getAlgoObject();
		sort_algo* getAlgoObject(sort_algo_t);
		
		sort_algo* getObject(sort_algo_t);
		virtual bool runSort(uint32_t*, uint32_t);
		virtual bool runSort(std::vector<uint32_t>*);
		virtual void swap(uint32_t*, uint32_t*);
	private:
		sort_algo_t  _algo;
	};
}

#endif /* sort_hpp */
