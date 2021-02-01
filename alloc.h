//
// Created by seymo on 2/1/2021.
//
#include <iostream>
#define cinl std::cin
#ifndef STDINENGINE_CIN_H
#define STDINENGINE_CIN_H
#define stralloc std::string
namespace reinvented {
	class alloc {
	public:
		alloc ( ) = default;
		
		void extract(std::string selfoperator) {
			cinl >> selfoperator;
		}
		void flushl(std::string selfop) {
			getline(std::cin, selfop);
		}
	};
	class stdoutl {
	public:
		void puts(const std::string& ssf) {
			std::cout << ssf << std::endl;
		}
	};
}
reinvented::alloc line;
reinvented::stdoutl psstream;

#endif //STDINENGINE_CIN_H
