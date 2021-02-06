sudoku_validate:sudoku_validate.o sudoku.o
	g++ -o sudoku_validate sudoku_validate.o sudoku.o
sudoku_validate.o:sudoku.h sudoku_validate.cpp
	g++ -c sudoku_validate.cpp
sudoku.o:sudoku.h sudoku.cpp
	g++ -c sudoku.cpp
clean:
	rm sudoku_validate*.o
