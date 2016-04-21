#include <iostream>
#include "tsptabusolver.h"
#include <ctime>
#include<stdio.h>

using namespace std;


int main(int argc, char* argv[]){

	std::clock_t start;
  start = std::clock();

	TSPTabuSolver solver2("tsp0.txt");
	solver2.solve(6);

	TSPTabuSolver solver1("tsp1.txt");
	solver1.solve(5);

	TSPTabuSolver solver3("tsp2.txt");
	solver3.solve(7);

//	TSPTabuSolver benchmark("CCNFP10g1b.txt");
	std::cout << "Time: " << (std::clock() - start) / (double)(CLOCKS_PER_SEC / 1000) <<
	" ms" << std::endl;

	return 1;
}
