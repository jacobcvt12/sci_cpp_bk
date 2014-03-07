ComplexNumber.o : ComplexNumber.cpp ComplexNumber.hpp
	g++ -c -O ComplexNumber.cpp

ComplexNumber_Main.o : ComplexNumber_Main.cpp ComplexNumber.hpp
	g++ -c -O ComplexNumber.cpp

ComplexNumber_Main : ComplexNumber.o ComplexNumber_Main.o
	g++ -O -o ComplexNumber_Main ComplexNumber.o ComplexNumber_Main.o
