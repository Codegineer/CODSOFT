#include <iostream>
#include <vector>
#include <ctype.h>
using namespace std;
/*
*   Task 4: To-do list
*
*   Program name:       to_do_list.cpp
*   Program language:   C++
*   Author:             Katlego Motaung
*   Date of completion: 09/04/2024
*/
int main()
{
    char opt;               /// For options
    vector<string> tasks;   /// To store tasks
    string task;
    do{
        cout << "\nChoose an option:\na - Add task.\nd - Display task.\nr - Remove task.\nc - Clear all tasks.\nq - Quit.\n";
        cin >> opt; ///insert option
        switch(opt){

            case 'a':
                cout << "Add a tasks:\n";
                cin.ignore();
                getline(cin,task);
                tasks.push_back(task);
                cout << "\nTask added successfully.\n" << endl;
                break;

            case 'd':
                if(!tasks.empty()){
                    system("cls");
                    cout << "Available tasks:\n";
                    for(auto i = 0; i < tasks.size(); i++)
                        cout << i + 1 <<". "<< tasks[i] << endl;
                }
                else
                    cout << "Nothing to display.\n";
                break;
            case 'r':
                if(!tasks.empty()){
                    system("cls");
                    tasks.size() == 1 ? cout << "\nThere is " << tasks.size() << " available tasks.\n" : cout << "\nThere are " << tasks.size() << " available tasks.\n";
                    ///cout << "\nThere are " << tasks.size() << " available tasks.\n";
                    cout << "\nType index to remove task.\n\n";
                    int i;
                    cin >> i;
                    if(i - 1 < tasks.size()){
                        system("cls");
                        tasks.erase(tasks.begin() + i - 1);
                        cout << "Task removed successfully.";
                    }
                    else{
                        cout << "\nIndex out of bound.\n\n";
                    }
                }
                else
                    cout << "\nNothing to remove.\n\n";
                break;
            case 'c':
                if(!tasks.empty()){
                    system("cls");
                    tasks.clear();
                    cout << "List is cleared.\n\n";
                }
                else
                    cout << "There is nothing to clear.\n";
                break;
            case 'q':
                system("cls");
                cout <<"Program closed.\n\n";
                break;
            default:
                system("cls");
                cout << "Invalid option!\n\n";
                break;
        }
    }while(opt != 'q');
    return 0;
}
