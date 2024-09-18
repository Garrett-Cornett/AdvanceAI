#include <iostream>
#include <vector>
#include <string>
using namespace std;

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

int main(int argc, char* argv[]){
    vector<string> variable_list(0);
    vector<string> conclusion_list(0);
    vector<string> clause_variable_list(variable_list.size() * conclusion_list.size());

    //Back-Chain start
    string goal = ""; //goal sought
    Process(goal);
    

    return 0;
}
