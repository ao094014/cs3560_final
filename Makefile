all: count

count:	TaskB.cc
		g++ -g taskB.cc	
doc:
		doxygen taskB.cc
valg:
		valgrind taskB.cc
cpp:
		cppcheck taskB.cc