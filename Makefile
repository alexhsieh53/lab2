123: LAB2.o BMI.o
	g++ -o 123 LAB2.o BMI.o

BMI.o: BMI.cpp BMI.h
	g++ -c BMI.cpp

LAB2.o: LAB2.cpp BMI.h
	g++ -c LAB2.cpp

clean:
	rm BMI *.o
