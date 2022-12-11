output.o: src/common/Department.o src/End_Production_Department/End_Production.o src/End_Production_Department/Product.o test/main.o
	g++ src/*/*.cpp test/main.cpp -o test/main.out

Department.o: src/common/Department.cpp
	g++ -c src/common/Department.cpp

End_Production.o: src/End_Production_Department/End_Production.cpp
	g++ -c src/End_Production_Department/End_Production.cpp

Product.o:  src/End_Production_Department/Product.cpp
	g++ -c src/End_Production_Department/Product.cpp

main.o: test/main.cpp
	g++ -c test/main.cpp

clean: 
	rm src/*/*.o test/main.o test/main.out
