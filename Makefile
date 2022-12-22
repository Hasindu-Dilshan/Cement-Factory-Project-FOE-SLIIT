output.o: src/common/Department.o src/End_Production_Department/End_Production.o src/End_Production_Department/Product.o src/Raw_Material_Department/Raw_Material.o src/Raw_Material_Department/Material.o src/Transport_Department/Transport.o src/Transport_Department/Transferable.o src/Worker_Statement_Department/Worker_Statement.o src/Worker_Statement_Department/Worker.o test/main.o
	g++ src/*/*.o test/main.o -o test/main.exe

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

Transport.o: src/Transport_Department/Transport.cpp
	g++ -c src/Transport_Department/Transport.cpp

Transferable.o: src/Transport_Department/Transferable.cpp
	g++ -c src/Transport_Department/Transferable.cpp

Worker_Statement.o: src/Worker_Statement_Department/Worker_Statement.cpp
	g++ -c src/Worker_Statement_Department/Worker_Statement.cpp

Worker.o: src/Worker_Statement_Department/Worker.cpp
	g++ -c src/Worker_Statement_Department/Worker.cpp

main.o: test/main.cpp
	g++ -c test/main.cpp

clean: 
	rm src/*/*.o test/main.o test/main
