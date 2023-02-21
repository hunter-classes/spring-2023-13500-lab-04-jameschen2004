main: main.o box.o checkerboard.o checkerboard3x3.o cross.o lower.o trapezoid.o upper.o
	g++ -o main main.o box.o checkerboard.o checkerboard3x3.o cross.o lower.o trapezoid.o upper.o

main.o: main.cpp funcs.h
	g++ -c main.cpp

box.o: box.cpp funcs.h
	g++ -c box.cpp

checkerboard.o: checkerboard.cpp funcs.h
	g++ -c checkerboard.cpp

checkerboard3x3.o: checkerboard3x3.cpp funcs.h
	g++ -c checkerboard3x3.cpp

cross.o: cross.cpp funcs.h
	g++ -c cross.cpp

lower.o: lower.cpp funcs.h
	g++ -c lower.cpp

trapezoid.o: trapezoid.cpp funcs.h
	g++ -c trapezoid.cpp

upper.o: upper.cpp funcs.h
	g++ -c upper.cpp

clean: 
	rm -f main.o box.o checkerboard.o checkerboard3x3.o cross.o lower.o trapezoid.o upper.o

