#include <iostream>
#include <vector>
#include <string>
#include <tuple>
using namespace std;

//  Unintialized global variables
static string diagnosis = "";
static int battery_issues = -1;
static int brake_issues = -1;
static int engine_issues = -1;

int search_con(string var){
    /*Take passed variable, find matching variable in conclusion
    list and corresponding rule number, R_i.  Then, call
    rule_to_clause(R_i)*/
    int R_i = 0;
    rule_to_clause(R_i);
    return R_i;
}

void rule_to_clause(int R_i){
    /*Convert rule# (R_i) to clause# (C_i) using formula:
    C_i = (*size of clause variable list* * (R_i - 1)) + 1
    Then call update_VL(C_i)*/
    int C_i = 0;
    update_VL(C_i);
}

void update_VL(int C_i){
    /*Take passed C_i. May ask questions and will instantiate all
    variables starting from location C_i in the variable list.  
    If variable is not in the associated variable list, it may be
    the clause of some rule.  Call Process(variable) to find its
    value (It will be a recursive call)*/
    string variable = "";
    Process(variable);
}

string validate_R_i(int R_i, string conclusion){
    /*Check R_i for if the values of the variables in the 'if'
    clauses of R_i are satisfied with the values in the variable
    list and the derived global variable list.  If yes, assign
    conclusion of the rule to the variable conclusion. Otherwise,
    it will no assign any value and then return*/
}

void Process(string variable){
    /*Start loop.  In each iteration do the following:
        - call search_con(variable)
        - call rule_to_clause(R_i)
        - call update_VL(C_i)
        - initialize conclusion to null and call 
          validate_R_i(R_i, conclusion)
        - if non-null returned, save value of conclusion in 
          derived global variable list and return
        - else, continue loop with next entry of conclusion list*/
        while(true){
            int R_i = search_con(variable);
            string conclusion = "NULL";
            conclusion = validate_R_i(R_i, conclusion);
            if(conclusion == "NULL"){
                continue;
            } else {
                return;
            }
        }
}

void initialize(vector<tuple<string, int>> variable_list, vector<string> conclusion_list, vector<string> clause_variable_list){
    //  Initialize variable list, -1 to show unintialized
    variable_list[0] = make_tuple<string,int>("CAR TROUBLE", -1);
    variable_list[1] = make_tuple<string,int>("CAR STARTS", -1);
    variable_list[2] = make_tuple<string,int>("BATTERY CHECK LIGHT", -1);
    variable_list[3] = make_tuple<string,int>("HOLDS CHARGE", -1);
    variable_list[4] = make_tuple<string,int>("TPMS", -1);
    variable_list[5] = make_tuple<string,int>("TEMP WARNING", -1);
    variable_list[6] = make_tuple<string,int>("COOLANT", -1);
    variable_list[7] = make_tuple<string,int>("SQUEAKING NOISES", -1);
    variable_list[8] = make_tuple<string,int>("RADIATOR FAN CLOG", -1);
    variable_list[9] = make_tuple<string,int>("THERMOSTAT MALFUNCTION", -1);
    variable_list[10] = make_tuple<string,int>("WWF LIGHT", -1);
    variable_list[11] = make_tuple<string,int>("WINDOWS STUCK", -1);
    variable_list[12] = make_tuple<string,int>("CLICKING NOISE FROM TURNING", -1);
    variable_list[13] = make_tuple<string,int>("DIFFICULTY TURNING", -1);
    variable_list[14] = make_tuple<string,int>("BRAKE LIGHT", -1);
    variable_list[15] = make_tuple<string,int>("BRAKE FLUID", -1);
    variable_list[16] = make_tuple<string,int>("BRAKE PADS", -1);
    variable_list[17] = make_tuple<string,int>("ABS LIGHT", -1);
    variable_list[18] = make_tuple<string,int>("OIL PRESSURE", -1);
    variable_list[19] = make_tuple<string,int>("TIMING BELT", -1);
    variable_list[20] = make_tuple<string,int>("ENGINE LIGHT", -1);
    variable_list[21] = make_tuple<string,int>("STRANGE SMELL", -1);
    variable_list[22] = make_tuple<string,int>("SPARK PLUGS", -1);
    variable_list[23] = make_tuple<string,int>("SPUTTERING", -1);
    variable_list[24] = make_tuple<string,int>("AIR FILTER", -1);
    variable_list[25] = make_tuple<string,int>("CLICKING NOISE WHILE STARTING", -1);
    variable_list[26] = make_tuple<string,int>("POOR ACCELERATION", -1);
    variable_list[27] = make_tuple<string,int>("GAS CAP", -1);
    variable_list[28] = make_tuple<string,int>("EMISSIONS", -1);

    //  Intialize conclusion list
    conclusion_list[0] = "DIAGNOSIS";
    conclusion_list[1] = "BATTERY ISSUES";
    conclusion_list[2] = "DIAGNOSIS";
    conclusion_list[3] = "DIAGNOSIS";
    conclusion_list[4] = "ENGINE OVERHEARS";
    conclusion_list[5] = "DIAGNOSIS";
    conclusion_list[6] = "DIAGNOSIS";
    conclusion_list[7] = "DIAGNOSIS";
    conclusion_list[8] = "DIAGNOSIS";
    conclusion_list[9] = "DIAGNOSIS";
    conclusion_list[10] = "DIAGNOSIS";
    conclusion_list[11] = "DIAGNOSIS";
    conclusion_list[12] = "DIAGNOSIS";
    conclusion_list[13] = "BRAKE ISSUES";
    conclusion_list[14] = "DIAGNOSIS";
    conclusion_list[15] = "DIAGNOSIS";
    conclusion_list[16] = "DIAGNOSIS";
    conclusion_list[17] = "DIAGNOSIS";
    conclusion_list[18] = "DIAGNOSIS";
    conclusion_list[19] = "DIAGNOSIS";
    conclusion_list[20] = "DIAGNOSIS";
    conclusion_list[21] = "ENGINE ISSUES";
    conclusion_list[22] = "ENGINE ISSUES";
    conclusion_list[23] = "DIAGNOSIS";
    conclusion_list[24] = "DIAGNOSIS";
    conclusion_list[25] = "DIAGNOSIS";
    conclusion_list[26] = "DIAGNOSIS";
    conclusion_list[27] = "DIAGNOSIS";
    conclusion_list[28] = "DIAGNOSIS";
    conclusion_list[29] = "DIAGNOSIS";
    conclusion_list[30] = "DIAGNOSIS";
    conclusion_list[31] = "DIAGNOSIS";

    clause_variable_list[0] = "CAR TROUBLE";
    clause_variable_list[4] = "CAR STARTS";
    clause_variable_list[5] = "BATTERY CHECK LIGHT";
    clause_variable_list[8] = "BATTERY ISSUES";
    clause_variable_list[9] = "HOLDS CHARGE";
    clause_variable_list[12] = "BATTERY ISSUE";
    clause_variable_list[13] = "HOLDS CHARGE";
    clause_variable_list[16] = "CAR STARTS";
    clause_variable_list[17] = "TPMS";
    clause_variable_list[20] = "CAR STARTS";
    clause_variable_list[21] = "TEMP WARNING";
    clause_variable_list[24] = "ENGINE OVERHEATS";
    clause_variable_list[25] = "COOLANT";
    clause_variable_list[28] = "ENGINE OVERHEATS";
    clause_variable_list[29] = "SQUEAKING NOISES";
    clause_variable_list[32] = "ENGINE OVERHEATS";
    clause_variable_list[33] = "RADIATOR FAN CLOG";
    clause_variable_list[36] = "ENGINE OVERHEATS";
    clause_variable_list[37] = "THERMOSTAT MALFUNCTION";
    clause_variable_list[40] = "CAR STARTS";
    clause_variable_list[41] = "WWF LIGHT";
    clause_variable_list[44] = "CAR STARTS";
    clause_variable_list[45] = "WINDOW STUCK";
    clause_variable_list[48] = "CAR STARTS";
    clause_variable_list[49] = "CLICKING NOISE FROM TURNING";
    clause_variable_list[52] = "CAR STARTS";
    clause_variable_list[53] = "DIFFICULTY TURNING";
    clause_variable_list[56] = "CAR STARTS";
    clause_variable_list[57] = "BRAKE LIGHT";
    clause_variable_list[60] = "BRAKE ISSUES";
    clause_variable_list[61] = "BRAKE FLUID";
    clause_variable_list[64] = "BRAKE ISSUES";
    clause_variable_list[65] = "BRAKE PAD";
    clause_variable_list[68] = "BRAKE ISSUES";
    clause_variable_list[69] = "BRAKE FLUID";
    clause_variable_list[70] = "BRAKE PADS";
    clause_variable_list[72] = "CAR STARTS";
    clause_variable_list[73] = "ABS LIGHT";
    clause_variable_list[74] = "BRAKE FLUID";
    clause_variable_list[76] = "CAR STARTS";
    clause_variable_list[77] = "ABS LIGHT";
    clause_variable_list[78] = "BRAKE FLUID";
    clause_variable_list[80] = "CAR STARTS";
    clause_variable_list[81] = "OIL PRESSURE";
    clause_variable_list[84] = "CAR STARTS";
    clause_variable_list[85] = "TIMING BELT";
    clause_variable_list[88] = "CAR STARTS";
    clause_variable_list[92] = "ENGINE LIGHT";
    clause_variable_list[96] = "ENGINE ISSUES";
    clause_variable_list[97] = "STRANGE SMELL";
    clause_variable_list[100] = "ENGINE ISSUES";
    clause_variable_list[101] = "SPARK PLUGS";
    clause_variable_list[104] = "ENGINE ISSUES";
    clause_variable_list[105] = "SPUTTERING";
    clause_variable_list[108] = "ENGINE ISSUES";
    clause_variable_list[109] = "AIR FILTER";
    clause_variable_list[112] = "ENGINE ISSUES";
    clause_variable_list[113] = "CLICKING NOISE WHILE STARTING";
    clause_variable_list[116] = "ENGINE ISSUES";
    clause_variable_list[117] = "POOR ACCELERATION";
    clause_variable_list[120] = "ENGINE ISSUES";
    clause_variable_list[121] = "GAS CAP";
    clause_variable_list[124] = "ENGINE ISSUES";
    clause_variable_list[125] = "EMISSIONS";
}

int main(int argc, char* argv[]){
    vector<tuple<string, int>> variable_list(29);
    vector<string> conclusion_list(32);
    vector<string> clause_variable_list(4 * conclusion_list.size());

    //Back-Chain start
    string goal = ""; //goal sought
    Process(goal);
    

    return 0;
}
