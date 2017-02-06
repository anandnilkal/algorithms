//
//  main.cpp
//  longCommSeq
//
//  Created by Anand N Ilkal on 04/02/17.
//  Copyright © 2017 Anand N Ilkal. All rights reserved.
//

#include <iostream>
#include "longCommSeq.hpp"

using namespace imo_sort;

int main(int argc, const char * argv[]) {
	char X[] = "AGGTAB";
	char Y[] = "GXXAYB";
 
	int m = strlen(X);
	int n = strlen(Y);
	
	longCommSeq LCS;
	printf("LCS length = %u\n",
		   LCS.getLCSlength(reinterpret_cast<unsigned char*>(X),
					 reinterpret_cast<unsigned char*>(Y)));
    return 0;
}
