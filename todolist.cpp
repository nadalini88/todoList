#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main () {
    vector<string> todoList;
    int choice;

    do {
    cout <<"Please create your to-do list" << endl;
    cout <<"1. Add item" << endl;
    cout <<"2. Show task" << endl;
    cout <<"3. Edit item" << endl;
    cout <<"4. Remove item" << endl;
    cout <<"5. Exit" << endl;
    cout << "Choose an option: " << endl;
    cin >> choice;
    cin.ignore();

    if (choice == 1) {
        string item;
        cout << "Enter the task description: ";
        getline(cin,item);
        todoList.push_back(item);
        cout << "Task added!\n";
    }
    else if (choice == 2) {
        cout << "Your tasks:\n";
        for (int i = 0; i < todoList.size(); i++) {
            cout << i + 1 << ". " << todoList[i] <<endl;
        }
        if (todoList.empty()) cout << "Not tasks yet.\n";
    }
    else if (choice == 3) {
        int itemNumber;
        cout << "Enter the number of the task to edit: \n";
        cin >> itemNumber;
        cin.ignore();

        if (itemNumber > 0 && itemNumber <= todoList.size()) {
            cout <<"Enter the new description: \n";
            string newDesc;
            getline(cin, newDesc);
            todoList[itemNumber - 1] = newDesc;
            cout << "Task updated!\n";
        } else {
        cout << "Invalid task number.\n";
        }
    }
    else if (choice == 4) {
        int itemNumber;
        cout <<"Enter the number of the task to remove: \n";
        cin >> itemNumber;
        cin.ignore();

        if (itemNumber > 0 && itemNumber <= todoList.size()){
            todoList.erase(todoList.begin() + itemNumber - 1);
            cout << "Task removed!";
        } else {
            cout <<"Invalid task number.\n";
        }
    }
    else if (choice == 5) {
        cout << "Exiting...\n";
    }
    else{
        cout << "Invalid choice. Try again.\n";
    }

    } while (choice != 5);
    return 0;
}
