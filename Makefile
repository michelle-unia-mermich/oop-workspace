main:
	g++ -std=c++11 -o main.o main.cpp University.cpp Course.cpp Gradebook.cpp Grade.cpp Person.cpp Instructor.cpp Student.cpp

test:
	g++ -std=c++11 -o test.o test.cpp University.cpp Course.cpp Gradebook.cpp Grade.cpp Person.cpp Instructor.cpp Student.cpp

cleanup:
	rm -rf *.o