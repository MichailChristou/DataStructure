#include <iostream>
#include "List.h"

using namespace std;

int main(int argc, char** argv) {

	List Paul;

	Paul.AddNode(5);
	Paul.AddNode(2);
	Paul.AddNode(3);
	Paul.PrintList();
}
