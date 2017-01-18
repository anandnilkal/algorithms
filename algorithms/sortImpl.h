//
//  sortImpl.h
//  algorithms
//
//  Created by Anand N Ilkal on 18/01/17.
//  Copyright © 2017 Anand N Ilkal. All rights reserved.
//

#ifndef sortImpl_h
#define sortImpl_h

template <typename T>
	sort_algo<T>::sort_algo() {
		_algo = imo_sort::SELECTION;
	}
	
	template <typename T>
	sort_algo<T>::~sort_algo() {
		
	}
	
	template <typename T>
	sort_algo_t sort_algo<T>::get_sort_algo() {
		return _algo;
	}

#endif /* sortImpl_h */
