#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <regex>

#include "main.hpp"

using namespace std;

/* Function prototypes */
string decorate(string decorator, bool start, string text);
void read_input(ifstream &inputFileStream, End_Production &endProductionDepartment, Raw_Material &rawMaterialDepartment, Transport &transportDepartment, Worker_Statement &workerStatementDepartment);
void read_department(vector<vector<string>> &sub_string_lines, End_Production &endProductionDepartment);
void read_department(vector<vector<string>> &sub_string_lines, Raw_Material &rawMaterialDepartment);
void read_department(vector<vector<string>> &sub_string_lines, Transport &transportDepartment);
void read_department(vector<vector<string>> &sub_string_lines, Worker_Statement &workerStatementDepartment);

int main()
{
    ifstream inputFileStream("test/input.txt");

    /* Make Department Objects */
    End_Production endProductionDepartment;
    Raw_Material rawMaterialDepartment;
    Transport transportDepartment;
    Worker_Statement workerStatementDepartment;

    read_input(inputFileStream, endProductionDepartment, rawMaterialDepartment, transportDepartment, workerStatementDepartment);

    const string decorator = "--------------------";

    /* Show End Production Department affairs */
    cout << decorate(decorator, true, endProductionDepartment.getName());

    endProductionDepartment.getProduct(0);
    endProductionDepartment.getProduct(1);

    endProductionDepartment.removeProduct(0);

    endProductionDepartment.getProduct(0);
    endProductionDepartment.getProduct(1);

    cout << decorate(decorator, false, endProductionDepartment.getName());

    /* Show Raw Materials Department affairs */
    cout << decorate(decorator, true, rawMaterialDepartment.getName());

    rawMaterialDepartment.getMaterial(0);
    rawMaterialDepartment.getMaterial(1);

    rawMaterialDepartment.removeMaterial(0);

    rawMaterialDepartment.getMaterial(0);
    rawMaterialDepartment.getMaterial(1);

    cout << decorate(decorator, false, rawMaterialDepartment.getName());

    /* Show Transport Department affairs */
    cout << decorate(decorator, true, transportDepartment.getName());

    transportDepartment.getTransferable(0);
    transportDepartment.getTransferable(1);

    transportDepartment.removeTransferable(0);

    transportDepartment.getTransferable(0);
    transportDepartment.getTransferable(1);

    cout << decorate(decorator, false, transportDepartment.getName());

    /* Show Worker Statement Department affairs */
    cout << decorate(decorator, true, workerStatementDepartment.getName());

    workerStatementDepartment.getWorker(0);
    workerStatementDepartment.getWorker(1);

    workerStatementDepartment.removeWorker(0);

    workerStatementDepartment.getWorker(0);
    workerStatementDepartment.getWorker(1);

    cout << decorate(decorator, false, workerStatementDepartment.getName());

    return 0;
}

string decorate(string decorator, bool start, string text)
{
    ostringstream outputStringStream;

    if (start)
    {
        outputStringStream << decorator << "< " + text << " >" << decorator << endl
                           << endl;
        return outputStringStream.str();
    }
    else
    {
        outputStringStream << decorator << "< / " << text << " >" << decorator << endl
                           << endl;
        return outputStringStream.str();
    }
}

void read_input(ifstream &inputFileStream, End_Production &endProductionDepartment, Raw_Material &rawMaterialDepartment, Transport &transportDepartment, Worker_Statement &workerStatementDepartment)
{
    string line;

    while (inputFileStream.good())
    {
        getline(inputFileStream, line);

        istringstream line_stream(line);

        string departmentName;

        // Get department name
        while (line_stream.good())
        {
            getline(line_stream, departmentName, ':');
        }

        vector<vector<string>> sub_string_lines;

        while (getline(inputFileStream, line))
        {
            // break from inner loop to start new department iteration
            if (line == "")
            {
                break;
            }

            vector<string> sub_strings;
            istringstream line_stream(line);

            while (line_stream.good())
            {
                string substr;

                getline(line_stream, substr, ',');
                substr = std::regex_replace(substr, std::regex("^ +| +$|( ) +"), "$1");
                sub_strings.push_back(substr);
            }

            sub_string_lines.push_back(sub_strings);
        }

        if (departmentName == "End Production")
        {
            read_department(sub_string_lines, endProductionDepartment);
        }
        if (departmentName == "Raw Material")
        {
            read_department(sub_string_lines, rawMaterialDepartment);
        }
        if (departmentName == "Transport")
        {
            read_department(sub_string_lines, transportDepartment);
        }
        if (departmentName == "Worker Statement")
        {
            read_department(sub_string_lines, workerStatementDepartment);
        }
    }
}

void read_department(vector<vector<string>> &sub_string_lines, End_Production &endProductionDepartment)
{
    for (vector<string> sub_string_line : sub_string_lines)
    {
        string productType = sub_string_line.at(0);
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

void read_department(vector<vector<string>> &sub_string_lines, Raw_Material &rawMaterialDepartment)
{
    for (vector<string> sub_string_line : sub_string_lines)
    {
        string materialType = sub_string_line.at(0);
        string materialQulaity = sub_string_line.at(1);
        long cost = stol(sub_string_line.at(2));
        int suppliedQuantity = stoi(sub_string_line.at(3));
        int safetyStock = stoi(sub_string_line.at(4));
        int availableStock = stoi(sub_string_line.at(5));
        int orderedStock = stoi(sub_string_line.at(6));
        int stockDuration = stoi(sub_string_line.at(7));

        rawMaterialDepartment.addMaterial(materialType, materialQulaity, cost, suppliedQuantity, safetyStock, availableStock, orderedStock, stockDuration);
    }
}
void read_department(vector<vector<string>> &sub_string_lines, Transport &transportDepartment)
{
    for (vector<string> sub_string_line : sub_string_lines)
    {
        string transferableType = sub_string_line.at(0);
        float fuelIssued = stof(sub_string_line.at(1));
        float averageFuelConsumption = stof(sub_string_line.at(2));
        float kilometersDone = stof(sub_string_line.at(3));

        transportDepartment.addTransferable(transferableType, fuelIssued, averageFuelConsumption, kilometersDone);
    }
}
void read_department(vector<vector<string>> &sub_string_lines, Worker_Statement &workerStatementDepartment)
{
    for (vector<string> sub_string_line : sub_string_lines)
    {
        string workerName = sub_string_line.at(0);
        string workerType = sub_string_line.at(1);
        int workingHoursInTheMonth = stoi(sub_string_line.at(2));
        int fixWorkingHoursPerDay = stoi(sub_string_line.at(3));
        int paymentForADay = stoi(sub_string_line.at(4));
        int overtimeHours = stoi(sub_string_line.at(5));
        int overtimePaymentPerHour = stoi(sub_string_line.at(6));

        workerStatementDepartment.addWorker(workerName, workerType, workingHoursInTheMonth, fixWorkingHoursPerDay, paymentForADay, overtimeHours, overtimePaymentPerHour);
    }
}