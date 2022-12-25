output.o: src/common/Department.o src/end_production_department/EndProduction.o src/end_production_department/Product.o src/raw_material_department/RawMaterial.o src/raw_material_department/Material.o src/transport_department/Transport.o src/transport_department/Transferable.o src/worker_statement_department/WorkerStatement.o src/worker_statement_department/Worker.o test/main.o
	g++ src/*/*.o test/main.o -o test/main

Department.o: src/common/Department.cpp
	g++ -c src/common/Department.cpp

EndProduction.o: src/end_production_department/EndProduction.cpp
	g++ -c src/end_production_department/EndProduction.cpp

Product.o:  src/end_production_department/Product.cpp
	g++ -c src/end_production_department/Product.cpp

RawMaterial.o:  src/raw_material_department/RawMaterial.cpp
	g++ -c src/raw_material_department/RawMaterial.cpp

Material.o:  src/raw_material_department/Material.cpp
	g++ -c src/raw_material_department/Material.cpp

Transport.o: src/transport_department/Transport.cpp
	g++ -c src/transport_department/Transport.cpp

Transferable.o: src/transport_department/Transferable.cpp
	g++ -c src/transport_department/Transferable.cpp

WorkerStatement.o: src/worker_statement_department/WorkerStatement.cpp
	g++ -c src/worker_statement_department/WorkerStatement.cpp

Worker.o: src/worker_statement_department/Worker.cpp
	g++ -c src/worker_statement_department/Worker.cpp

main.o: test/main.cpp
	g++ -c test/main.cpp

clean: 
	rm src/*/*.o test/main.o test/main
