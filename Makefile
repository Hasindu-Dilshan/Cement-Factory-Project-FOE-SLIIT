output.o: src/common/Department.o src/End_Production_Department/End_Production.o src/End_Production_Department/Product.o src/Raw_Material_Department/Raw_Material.o src/Raw_Material_Department/Material.o test/main.o
	g++ src/*/*.cpp test/main.cpp -o test/main.out

Department.o: src/common/Department.cpp
	g++ -c src/common/Department.cpp

End_Production.o: src/End_Production_Department/End_Production.cpp
	g++ -c src/End_Production_Department/End_Production.cpp

Product.o:  src/End_Production_Department/Product.cpp
	g++ -c src/End_Production_Department/Product.cpp

Raw_Material.o:  src/Raw_Material_Department/Raw_Material.cpp
	g++ -c src/Raw_Material_Department/Raw_Material.cpp

Material.o:  src/Raw_Material_Department/Material.cpp
	g++ -c src/Raw_Material_Department/Material.cpp

main.o: test/main.cpp
	g++ -c test/main.cpp

clean: 
	rm src/*/*.o test/main.o test/main.out
