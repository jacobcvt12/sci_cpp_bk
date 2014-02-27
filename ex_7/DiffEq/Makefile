AbstractOdeSolver.o : AbstractOdeSolver.cpp AbstractOdeSolver.hpp
	g++ -c -O AbstractOdeSolver.cpp

ForwardEulerSolver.o : ForwardEulerSolver.cpp ForwardEulerSolver.hpp
	g++ -c -O ForwardEulerSolver.cpp

ForwardEulerSolver_main.o : ForwardEulerSolver_main.cpp ForwardEulerSolver.hpp
	g++ -c -O ForwardEulerSolver_main.cpp

ForwardEulerSolver : ForwardEulerSolver.o ForwardEulerSolver_main.o
	g++ -O -o ForwardEulerSolver ForwardEulerSolver.o ForwardEulerSolver_main.o
