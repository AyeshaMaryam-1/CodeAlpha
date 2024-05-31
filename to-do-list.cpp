#include <iostream>
using namespace std;

void print_tasks(string tasks[], int task_count)
{
    cout<<"Tasks To Do: "<<endl;
    for (int i = 0; i < task_count; i++)
    {
        cout<<"Task "<<i<<" : "<<tasks[i]<<endl;
    }
    cout<<"-----------------------------------------"<<endl;
}

int main()
{
    string tasks[10] = {""};   // Only 10 tasks will store in this TO-DO LIST
    int task_count = 0;

    int option = -1;
    while (option != 4)
    {
        // Banner of our program
        cout<<"****************************************"<<endl;
        cout<<"               TO-DO LIST               "<<endl;
        cout<<"****************************************"<<endl;

        // Main Menu of our program
        cout << " 1. ADD TASK" << endl;
        cout << " 2. VIEW TASK" << endl;
        cout << " 3. UPDATE TASK" << endl;
        cout << " 4. QUIT" << endl<< endl;
        cin>>option;

        switch (option)
        {
        case 1:
        {
            if (task_count < 9)
            {
                system("cls");
                cout<<"-----------------------------------------"<<endl;
                cout<<"                 ADD TASK                "<<endl;
                cout<<"-----------------------------------------"<<endl;
                cout<<"Enter a new task: "<<endl;
                cin.ignore();
                getline(cin, tasks[task_count]);
                task_count++;
            }
            else
            {
                cout<<"-----Task list is full-----"<<endl;
            }
            break;
        }
        case 2:
                system("cls");
                cout<<"-----------------------------------------"<<endl;
                cout<<"                VIEW TASK                "<<endl;
                cout<<"-----------------------------------------"<<endl;
                print_tasks(tasks, task_count);
                break;
        case 3:
            {
                system("cls");
                cout<<"-----------------------------------------"<<endl;
                cout<<"              UPDATE TASK                "<<endl;
                cout<<"-----------------------------------------"<<endl;
                print_tasks(tasks, task_count);
                int task_number;
                cout<<"Enter task number to mark as completed: ";
                cin>>task_number;
                if (task_number >= 0 && task_number <= task_count)
                {
                    tasks[task_number] += " (DONE)";
                    for (int i = 0; i < task_count; i++)
                    {
                        cout<<"Task "<<i<<" : "<<tasks[i]<<endl;
                    }
                    cout<<"-----------------------------------------"<<endl;
                }
                else
                {
                    cout<<"Invalid task number."<<endl;
                }
                break;    
            }
        case 4:
            {
                char answer;
                char y;
                cout<<"Are you sure you want to quit?"<<endl;
                cout<<"Press 'y' or 'n' : ";
                cin>>answer;

                if (answer = y)
                {
                    cout<<"Terminating the program!"<<endl;
                }   
                break;
            }
        
        default:
            cout<<"Invalid option."<<endl;
        }
    }
    return 0;
}
