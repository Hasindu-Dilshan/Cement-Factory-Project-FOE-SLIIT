output.o: src/common/Department.o src/End_Production.o src/Product.o test/main.o
	g++ src/common/Department.cpp src/*.cpp test/main.cpp -o test/main.out

Department.o: src/common/Department.cpp
	g++ -c src/common/Department.cpp

End_Production.o: src/End_Production.cpp
	g++ -c src/End_Production.cpp

Product.o:  src/Product.cpp
	g++ -c src/Product.cpp

main.o: test/main.cpp
	g++ -c test/main.cpp

clean: 
	rm src/common/Department.o src/*.o test/*.o test/main.out
