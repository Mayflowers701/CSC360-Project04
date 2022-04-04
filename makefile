OBJS = main.o closestPointsAlgorithm.o distance.o initializeField.o recursiveClosestPoints.o sliceClosest.o sorters.o
H = starField.hpp makefile
cc = g++ -c -O -Wall -ansi -pedantic -std=c++2a

p4: $(OBJS)
	g++ -o p4 $(OBJS)

main.o: main.cpp $(H) makefile
	$(cc) main.cpp

closestPointsAlgorithm.o: closestPointsAlgorithm.cpp $(H)
	$(cc) closestPointsAlgorithm.cpp

distance.o: distance.cpp $(H)
	$(cc) distance.cpp

initializeField.o: initializeField.cpp $(H)
	$(cc) initializeField.cpp

recursiveClosestPoints.o: recursiveClosestPoints.cpp $(H)
	$(cc) recursiveClosestPoints.cpp

sliceClosest.o: sliceClosest.cpp $(H)
	$(cc) sliceClosest.cpp

sorters.o: sorters.cpp $(H)
	$(cc) sorters.cpp
