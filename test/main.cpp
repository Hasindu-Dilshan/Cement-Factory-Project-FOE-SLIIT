#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <regex>

#include "main.hpp"

/* Function prototypes */
std::string decorate(std::string decorator, bool start, std::string text);
void readInput(std::ifstream &inputFileStream, EndProduction &endProductionDepartment, RawMaterial &rawMaterialDepartment,
               Transport &transportDepartment, WorkerStatement &workerStatementDepartment);
void readInput(EndProduction &endProductionDepartment);
void readInput(RawMaterial &rawMaterialDepartment);
void readInput(Transport &transportDepartment);
void readInput(WorkerStatement &workerStatementDepartment);

void readDepartment(std::vector<std::vector<std::string>> &subStringLines, EndProduction &endProductionDepartment);
void readDepartment(std::vector<std::vector<std::string>> &subStringLines, RawMaterial &rawMaterialDepartment);
void readDepartment(std::vector<std::vector<std::string>> &subStringLines, Transport &transportDepartment);
void readDepartment(std::vector<std::vector<std::string>> &subStringLines, WorkerStatement &workerStatementDepartment);

int main()
{
    // std::ifstream inputFileStream("test/input.txt");

    /* Make Department Objects */
    EndProduction endProductionDepartment;
    RawMaterial rawMaterialDepartment;
    Transport transportDepartment;
    WorkerStatement workerStatementDepartment;

    // readInput(inputFileStream, endProductionDepartment, rawMaterialDepartment, transportDepartment, workerStatementDepartment);

    readInput(endProductionDepartment);
    readInput(rawMaterialDepartment);
    readInput(transportDepartment);
    readInput(workerStatementDepartment);

    const std::string decorator = "--------------------";

    /* Show End Production department affairs */
    std::cout << decorate(decorator, true, endProductionDepartment.getName());

    endProductionDepartment.getProduct(0);
    // endProductionDepartment.getProduct(1);

    endProductionDepartment.removeProduct(0);

    endProductionDepartment.getProduct(0);

    std::cout << decorate(decorator, false, endProductionDepartment.getName());

    /* Show Raw Materials department affairs */
    std::cout << decorate(decorator, true, rawMaterialDepartment.getName());

    rawMaterialDepartment.getMaterial(0);
    // rawMaterialDepartment.getMaterial(1);

    rawMaterialDepartment.removeMaterial(0);

    rawMaterialDepartment.getMaterial(0);

    std::cout << decorate(decorator, false, rawMaterialDepartment.getName());

    /* Show Transport department affairs */
    std::cout << decorate(decorator, true, transportDepartment.getName());

    transportDepartment.getTransferable(0);
    // transportDepartment.getTransferable(1);

    transportDepartment.removeTransferable(0);

    transportDepartment.getTransferable(0);

    std::cout << decorate(decorator, false, transportDepartment.getName());

    /* Show Worker Statement department affairs */
    std::cout << decorate(decorator, true, workerStatementDepartment.getName());

    workerStatementDepartment.getWorker(0);
    // workerStatementDepartment.getWorker(1);

    workerStatementDepartment.removeWorker(0);

    workerStatementDepartment.getWorker(0);

    std::cout << decorate(decorator, false, workerStatementDepartment.getName());

    return 0;
}

std::string decorate(std::string decorator, bool start, std::string text)
{
    std::ostringstream outputStringStream;

    if (start)
    {
        outputStringStream << decorator << "< " + text << " >" << decorator << std::endl
                           << std::endl;
        return outputStringStream.str();
    }
    else
    {
        outputStringStream << decorator << "< / " << text << " >" << decorator << std::endl
                           << std::endl;
        return outputStringStream.str();
    }
}

void readInput(std::ifstream &inputFileStream, EndProduction &endProductionDepartment, RawMaterial &rawMaterialDepartment,
               Transport &transportDepartment, WorkerStatement &workerStatementDepartment)
{
    std::string line;

    while (inputFileStream.good())
    {
        getline(inputFileStream, line);

        std::istringstream line_stream(line);

        std::string departmentName;

        // Get department name
        while (line_stream.good())
        {
            getline(line_stream, departmentName, ':');
        }

        std::vector<std::vector<std::string>> subStringLines;

        while (getline(inputFileStream, line))
        {
            // break from inner loop to start new department iteration
            if (line == "")
            {
                break;
            }

            std::vector<std::string> subStrings;
            std::istringstream line_stream(line);

            while (line_stream.good())
            {
                std::string substr;

                getline(line_stream, substr, ',');
                substr = std::regex_replace(substr, std::regex("^ +| +$|( ) +"), "$1");
                subStrings.push_back(substr);
            }

            subStringLines.push_back(subStrings);
        }

        if (departmentName == "End Production")
        {
            readDepartment(subStringLines, endProductionDepartment);
        }
        if (departmentName == "Raw Material")
        {
            readDepartment(subStringLines, rawMaterialDepartment);
        }
        if (departmentName == "Transport")
        {
            readDepartment(subStringLines, transportDepartment);
        }
        if (departmentName == "Worker Statement")
        {
            readDepartment(subStringLines, workerStatementDepartment);
        }
    }
}

void readInput(EndProduction &endProductionDepartment)
{
    std::string productType;
    float cost;
    float price;
    float chemicalCombinationSo3;
    float chemicalCombinationChloride;
    int prodQuantity;
    int reqProdQuantity;
    int stockDuration;

    std::vector<std::vector<std::string>> subStringLines;
    std::vector<std::string> subStrings;

    std::cout << "=== Enter Product Details ===" << std::endl;

    // std::cin.ignore();

    std::cout << "Enter productType: ";
    std::getline(std::cin, productType);

    std::cout << "Enter cost: ";
    std::cin >> cost;

    std::cout << "Enter price: ";
    std::cin >> price;

    std::cout << "Enter chemicalCombinationSo3: ";
    std::cin >> chemicalCombinationSo3;

    std::cout << "Enter chemicalCombinationChloride: ";
    std::cin >> chemicalCombinationChloride;

    std::cout << "Enter prodQuantity: ";
    std::cin >> prodQuantity;

    std::cout << "Enter reqProdQuantity: ";
    std::cin >> reqProdQuantity;

    std::cout << "Enter stockDuration: ";
    std::cin >> stockDuration;

    subStrings.push_back(productType);
    subStrings.push_back(std::to_string(cost));
    subStrings.push_back(std::to_string(price));
    subStrings.push_back(std::to_string(chemicalCombinationSo3));
    subStrings.push_back(std::to_string(chemicalCombinationChloride));
    subStrings.push_back(std::to_string(prodQuantity));
    subStrings.push_back(std::to_string(reqProdQuantity));
    subStrings.push_back(std::to_string(stockDuration));

    subStringLines.push_back(subStrings);

    readDepartment(subStringLines, endProductionDepartment);
}

void readInput(RawMaterial &rawMaterialDepartment)
{
    std::string materialType;
    std::string materialQulaity;
    long cost;
    int suppliedQuantity;
    int safetyStock;
    int availableStock;
    int orderedStock;
    int stockDuration;

    std::vector<std::vector<std::string>> subStringLines;
    std::vector<std::string> subStrings;

    std::cout << "=== Enter Material Details ===" << std::endl;

    std::cin.ignore();

    std::cout << "Enter materialType: ";
    std::getline(std::cin, materialType);

    std::cout << "Enter materialQulaity: ";
    std::getline(std::cin, materialQulaity);

    std::cout << "Enter cost: ";
    std::cin >> cost;

    std::cout << "Enter suppliedQuantity: ";
    std::cin >> suppliedQuantity;

    std::cout << "Enter safetyStock: ";
    std::cin >> safetyStock;

    std::cout << "Enter availableStock: ";
    std::cin >> availableStock;

    std::cout << "Enter orderedStock: ";
    std::cin >> orderedStock;

    std::cout << "Enter stockDuration: ";
    std::cin >> stockDuration;

    subStrings.push_back(materialType);
    subStrings.push_back(materialQulaity);
    subStrings.push_back(std::to_string(cost));
    subStrings.push_back(std::to_string(suppliedQuantity));
    subStrings.push_back(std::to_string(safetyStock));
    subStrings.push_back(std::to_string(availableStock));
    subStrings.push_back(std::to_string(orderedStock));
    subStrings.push_back(std::to_string(stockDuration));

    subStringLines.push_back(subStrings);

    readDepartment(subStringLines, rawMaterialDepartment);
}

void readInput(Transport &transportDepartment)
{
    std::string transferableType;
    float fuelIssued;
    float averageFuelConsumption;
    float kilometersDone;

    std::vector<std::vector<std::string>> subStringLines;
    std::vector<std::string> subStrings;

    std::cout << "=== Enter Transferable Details ===" << std::endl;

    std::cin.ignore();

    std::cout << "Enter transferableType: ";
    std::getline(std::cin, transferableType);

    std::cout << "Enter fuelIssued: ";
    std::cin >> fuelIssued;

    std::cout << "Enter averageFuelConsumption: ";
    std::cin >> averageFuelConsumption;

    std::cout << "Enter kilometersDone: ";
    std::cin >> kilometersDone;

    subStrings.push_back(transferableType);
    subStrings.push_back(std::to_string(fuelIssued));
    subStrings.push_back(std::to_string(averageFuelConsumption));
    subStrings.push_back(std::to_string(kilometersDone));

    subStringLines.push_back(subStrings);

    readDepartment(subStringLines, transportDepartment);
}

void readInput(WorkerStatement &workerStatementDepartment)
{
    std::string workerName;
    std::string workerType;
    int workingHoursInTheMonth;
    int fixWorkingHoursPerDay;
    int paymentForADay;
    int overtimeHours;
    int overtimePaymentPerHour;

    std::vector<std::vector<std::string>> subStringLines;
    std::vector<std::string> subStrings;

    std::cout << "=== Enter Worker Details ===" << std::endl;

    std::cin.ignore();

    std::cout << "Enter workerName: ";
    std::getline(std::cin, workerName);

    std::cout << "Enter workerType: ";
    std::getline(std::cin, workerType);

    std::cout << "Enter workingHoursInTheMonth: ";
    std::cin >> workingHoursInTheMonth;

    std::cout << "Enter fixWorkingHoursPerDay: ";
    std::cin >> fixWorkingHoursPerDay;

    std::cout << "Enter paymentForADay: ";
    std::cin >> paymentForADay;

    std::cout << "Enter overtimeHours: ";
    std::cin >> overtimeHours;

    std::cout << "Enter overtimePaymentPerHour: ";
    std::cin >> overtimePaymentPerHour;

    subStrings.push_back(workerName);
    subStrings.push_back(workerType);
    subStrings.push_back(std::to_string(workingHoursInTheMonth));
    subStrings.push_back(std::to_string(fixWorkingHoursPerDay));
    subStrings.push_back(std::to_string(paymentForADay));
    subStrings.push_back(std::to_string(overtimeHours));
    subStrings.push_back(std::to_string(overtimePaymentPerHour));

    subStringLines.push_back(subStrings);

    readDepartment(subStringLines, workerStatementDepartment);
}

void readDepartment(std::vector<std::vector<std::string>> &subStringLines, EndProduction &endProductionDepartment)
{
    for (std::vector<std::string> sub_string_line : subStringLines)
    {
        std::string productType = sub_string_line.at(0);
        float cost = stof(sub_string_line.at(1));
        float price = stof(sub_string_line.at(2));
        float chemicalCombinationSo3 = stof(sub_string_line.at(3));
        float chemicalCombinationChloride = stof(sub_string_line.at(4));
        int prodQuantity = stoi(sub_string_line.at(5));
        int reqProdQuantity = stoi(sub_string_line.at(6));
        int stockDuration = stoi(sub_string_line.at(7));

        endProductionDepartment.addProduct(productType, cost, price, chemicalCombinationSo3, chemicalCombinationChloride, prodQuantity, reqProdQuantity, stockDuration);
    }
}

void readDepartment(std::vector<std::vector<std::string>> &subStringLines, RawMaterial &rawMaterialDepartment)
{
    for (std::vector<std::string> sub_string_line : subStringLines)
    {
        std::string materialType = sub_string_line.at(0);
        std::string materialQulaity = sub_string_line.at(1);
        long cost = stol(sub_string_line.at(2));
        int suppliedQuantity = stoi(sub_string_line.at(3));
        int safetyStock = stoi(sub_string_line.at(4));
        int availableStock = stoi(sub_string_line.at(5));
        int orderedStock = stoi(sub_string_line.at(6));
        int stockDuration = stoi(sub_string_line.at(7));

        rawMaterialDepartment.addMaterial(materialType, materialQulaity, cost, suppliedQuantity, safetyStock, availableStock, orderedStock, stockDuration);
    }
}
void readDepartment(std::vector<std::vector<std::string>> &subStringLines, Transport &transportDepartment)
{
    for (std::vector<std::string> sub_string_line : subStringLines)
    {
        std::string transferableType = sub_string_line.at(0);
        float fuelIssued = stof(sub_string_line.at(1));
        float averageFuelConsumption = stof(sub_string_line.at(2));
        float kilometersDone = stof(sub_string_line.at(3));

        transportDepartment.addTransferable(transferableType, fuelIssued, averageFuelConsumption, kilometersDone);
    }
}
void readDepartment(std::vector<std::vector<std::string>> &subStringLines, WorkerStatement &workerStatementDepartment)
{
    for (std::vector<std::string> sub_string_line : subStringLines)
    {
        std::string workerName = sub_string_line.at(0);
        std::string workerType = sub_string_line.at(1);
        int workingHoursInTheMonth = stoi(sub_string_line.at(2));
        int fixWorkingHoursPerDay = stoi(sub_string_line.at(3));
        int paymentForADay = stoi(sub_string_line.at(4));
        int overtimeHours = stoi(sub_string_line.at(5));
        int overtimePaymentPerHour = stoi(sub_string_line.at(6));

        workerStatementDepartment.addWorker(workerName, workerType, workingHoursInTheMonth, fixWorkingHoursPerDay, paymentForADay, overtimeHours, overtimePaymentPerHour);
    }
}