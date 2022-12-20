#include "../src/End_Production_Department/End_Production.hpp"
#include "../src/Raw_Material_Department/Raw_Material.hpp"
#include "../src/Worker_Statement_Department/Worker_Statement.hpp"
#include "../src/Transport_Department/Transport.hpp"

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <regex>

using namespace std;

/* Function prototypes */
string decorate(string decorator, bool start, string text);
void read_input(ifstream &inputFileStream, End_Production &endproduction_dep_ref);
void read_department(vector<vector<string>> &sub_string_lines, End_Production &endproduction_dep_ref);

int main()
{
    ifstream inputFileStream("test/input.txt");

    /* Make Department Objects */
    End_Production endProductionDepartment;

    read_input(inputFileStream, endProductionDepartment);

    const string decorator = "--------------------";

    /* End Production Department affairs */

    // Show End Production Department affairs
    cout << decorate(decorator, true, endProductionDepartment.getName()) << endl
         << endl;

    endProductionDepartment.getProduct(0);
    endProductionDepartment.getProduct(1);

    cout << decorate(decorator, false, endProductionDepartment.getName()) << endl
         << endl;

    // toString() method test
    cout << "=== toString() ===" << endl
         << endl
         << endProductionDepartment.toString();

    return 0;
}

string decorate(string decorator, bool start, string text)
{
    if (start)
    {
        return decorator + "< " + text + " >" + decorator;
    }
    else
    {
        return decorator + "< / " + text + " >" + decorator + "\n";
    }
}

void read_input(ifstream &inputFileStream, End_Production &endproduction_dep_ref)
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
            read_department(sub_string_lines, endproduction_dep_ref);
        }
        else if (departmentName == "Transport")
        {
            // read_department(sub_string_lines, transport_dep_ref);
        }
    }
}

void read_department(vector<vector<string>> &sub_string_lines, End_Production &endproduction_dep_ref)
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

        endproduction_dep_ref.addProduct(productType, cost, price, chemicalCombinationSo3, chemicalCombinationChloride, prodQuantity, reqProdQuantity, stockDuration);
    }
}
