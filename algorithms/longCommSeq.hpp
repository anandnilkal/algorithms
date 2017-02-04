//
//  longCommSeq.hpp
//  algorithms
//
//  Created by Anand N Ilkal on 04/02/17.
//  Copyright © 2017 Anand N Ilkal. All rights reserved.
//

#ifndef longCommSeq_hpp
#define longCommSeq_hpp

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <vector>

using namespace std;
namespace imo_sort {
	
	class longCommSeq {
	public:
		longCommSeq();
		virtual ~longCommSeq();
		
		uint32_t getLCSlength(unsigned char*, unsigned char*);
		
	private:
		uint32_t		getLCS(int32_t, int32_t);
		uint32_t		getmax(uint32_t, uint32_t);
		uint32_t		**_sequence;
		unsigned char	*alist;
		unsigned char	*blist;
		uint32_t		length;
	};
}
#endif /* longCommSeq_hpp */
