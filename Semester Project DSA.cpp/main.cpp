#include <iostream>
#include <fstream>
#include <sstream>
#include <limits>

using namespace std;

struct Node {
    string name;
    long long int phone_number;
    Node* next;
    Node* prev;
};

class ContactBook {
    Node* head;

public:
    ContactBook() : head(NULL) {}

    ~ContactBook() {
        DeleteAllContacts();
    }

    void CreateNode() {
        string name;
        long long int phone_number;

        cout << "  Name of Contact: ";
        cin >> name;

        cout << "  Phone Number: ";
        while (!(cin >> phone_number)) {
            cout << "  Invalid input. Please enter a valid phone number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        Node* newNode = new Node{name, phone_number, NULL, NULL};

        if (head == NULL) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }
        cout << "  Contact Added" << endl;
    }

    void Display() {
        if (head == NULL) {
            cout << "  No Contacts... Please Add Some Contacts" << endl;
            return;
        }

        BubbleSort();
        Node* temp = head;
        cout << "  Name: " << "      Number: \n" << endl;
        int count = 0;
        while (temp != NULL) {
            cout << "  " << temp->name << "          " << temp->phone_number << endl;
            temp = temp->next;
            count++;
        }
        cout << "  Total contacts: " << count << endl;
    }

    void Search() {
        if (head == NULL) {
            cout << "  No Contacts to Search" << endl;
            return;
        }

        int command;
        cout << "***********" << endl;
        cout << "  Press 1 if you want to Search By Name." << endl;
        cout << "  Press 2 if you want to Search By Number." << endl;
        cout << "  Enter the Command: ";
        while (!(cin >> command) || (command != 1 && command != 2)) {
            cout << "  Invalid command. Please enter 1 or 2: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        bool found = false;
        Node* temp = head;
        if (command == 1) {
            string name;
            cout << "  Enter the Name to Search: ";
            cin >> name;
            while (temp != NULL) {
                if (temp->name == name) {
                    cout << "  Name: " << temp->name << ", Phone Number: " << temp->phone_number << endl;
                    found = true;
                    break;
                }
                temp = temp->next;
            }
        } else {
            long long int phone_number;
            cout << "  Enter the Number to Search: ";
            while (!(cin >> phone_number)) {
                cout << "  Invalid input. Please enter a valid phone number: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            while (temp != NULL) {
                if (temp->phone_number == phone_number) {
                    cout << "  Name: " << temp->name << ", Phone Number: " << temp->phone_number << endl;
                    found = true;
                    break;
                }
                temp = temp->next;
            }
        }
        if (!found) {
            cout << "  Contact Not Found" << endl;
        }
    }

    void DeleteAllContacts() {
        Node* current = head;
        while (current != NULL) {
            Node* next = current->next;
            delete current;
            current = next;
        }
        head = NULL;
        cout << "  Successfully Deleted All Contacts" << endl;
    }

    void DeleteContactBySearch() {
        if (head == NULL) {
            cout << "  No Contacts to Delete" << endl;
            return;
        }

        int command;
        cout << "***********" << endl;
        cout << "  Press 1 if you want to Search By Name" << endl;
        cout << "  Press 2 if you want to Search By Number" << endl;
        cout << "  Enter the Command: ";
        while (!(cin >> command) || (command != 1 && command != 2)) {
            cout << "  Invalid command. Please enter 1 or 2: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        Node* temp = head;
        bool found = false;
        if (command == 1) {
            string name;
            cout << "  Enter the Name to Delete: ";
            cin >> name;
            while (temp != NULL) {
                if (temp->name == name) {
                    found = true;
                    break;
                }
                temp = temp->next;
            }
        } else {
            long long int phone_number;
            cout << "  Enter the Number to Delete: ";
            while (!(cin >> phone_number)) {
                cout << "  Invalid input. Please enter a valid phone number: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            while (temp != NULL) {
                if (temp->phone_number == phone_number) {
                    found = true;
                    break;
                }
                temp = temp->next;
            }
        }

        if (found) {
            if (temp == head) {
                head = temp->next;
                if (head) head->prev = NULL;
            } else {
                temp->prev->next = temp->next;
                if (temp->next) temp->next->prev = temp->prev;
            }
            delete temp;
            cout << "  Contact Deleted Successfully" << endl;
        } else {
            cout << "  Contact Not Found" << endl;
        }
    }

    void BubbleSort() {
        if (head == NULL) return;

        bool swapped;
        Node* ptr1;
        Node* lptr = NULL;

        do {
            swapped = false;
            ptr1 = head;

            while (ptr1->next != lptr) {
                if (ptr1->name > ptr1->next->name) {
                    swap(ptr1->name, ptr1->next->name);
                    swap(ptr1->phone_number, ptr1->next->phone_number);
                    swapped = true;
                }
                ptr1 = ptr1->next;
            }
            lptr = ptr1;
        } while (swapped);
    }

    void EditContacts() {
        if (head == NULL) {
            cout << "  No Contacts to Edit" << endl;
            return;
        }

        int command;
        cout << "***********" << endl;
        cout << "  Press 1 if you want to Search By Name" << endl;
        cout << "  Press 2 if you want to Search By Number" << endl;
        cout << "  Enter the Command: ";
        while (!(cin >> command) || (command != 1 && command != 2)) {
            cout << "  Invalid command. Please enter 1 or 2: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        Node* temp = head;
        bool found = false;
        if (command == 1) {
            string name;
            cout << "  Enter the Name to Edit: ";
            cin >> name;
            while (temp != NULL) {
                if (temp->name == name) {
                    found = true;
                    break;
                }
                temp = temp->next;
            }
        } else {
            long long int phone_number;
            cout << "  Enter the Number to Edit: ";
            while (!(cin >> phone_number)) {
                cout << "  Invalid input. Please enter a valid phone number: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            while (temp != NULL) {
                if (temp->phone_number == phone_number) {
                    found = true;
                    break;
                }
                temp = temp->next;
            }
        }

        if (found) {
            cout << "  Enter New Name: ";
            cin >> temp->name;
            cout << "  Enter New Number: ";
            while (!(cin >> temp->phone_number)) {
                cout << "  Invalid input. Please enter a valid phone number: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            cout << "  Contact Edited Successfully" << endl;
        } else {
            cout << "  Contact Not Found" << endl;
        }
    }

    void OflineSave() {
        ofstream myfile("contactbook.txt");
        if (!myfile) {
            cout << "  Error opening file for saving." << endl;
            return;
        }

        Node* temp = head;
        while (temp != NULL) {
            myfile << temp->name << endl;
            myfile << temp->phone_number << endl;
            temp = temp->next;
        }
        myfile.close();
    }

    void reopenCB() {
        ifstream myfile("contactbook.txt");
        if (!myfile || myfile.peek() == EOF) {
            cout << "  File is Empty or Cannot be opened...Sorry" << endl;
            return;
        }

        string line;
        int lineCount = 0;
        Node* lastNode = NULL;
        while (getline(myfile, line)) {
            if (lineCount % 2 == 0) {
                Node* newNode = new Node;
                newNode->name = line;
                newNode->next = NULL;
                if (head == NULL) {
                    head = newNode;
                    lastNode = newNode;
                } else {
                    lastNode->next = newNode;
                    newNode->prev = lastNode;
                    lastNode = newNode;
                }
            } else {
                stringstream convert(line);
                long long int phone_number;
                convert >> phone_number;
                lastNode->phone_number = phone_number;
            }
            lineCount++;
        }
        myfile.close();
    }

    void Structure() {
        cout << "***********" << endl;
        cout << "  1. Add Contact" << endl;
        cout << "  2. Edit the Contact" << endl;
        cout << "  3. Delete Contact" << endl;
        cout << "  4. Search Contact" << endl;
        cout << "  5. Display All Contacts" << endl;
        cout << "  6. Delete All Contacts" << endl;
        cout << "  7. Exit" << endl;
        cout << "***********" << endl;

        int Scommand;
        cout << "  Enter the Command: ";
        while (!(cin >> Scommand) || (Scommand < 1 || Scommand > 7)) {
            cout << "  Invalid command. Please enter a number between 1 and 7: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        switch (Scommand) {
            case 1:
                CreateNode();
                OflineSave();
                break;
            case 2:
                EditContacts();
                OflineSave();
                break;
            case 3:
                DeleteContactBySearch();
                OflineSave();
                break;
            case 4:
                Search();
                break;
            case 5:
                Display();
                break;
            case 6:
                DeleteAllContacts();
                OflineSave();
                break;
            case 7:
                cout << "Exiting..." << endl;
                return;
            default:
                cout << "  You Entered wrong Command... Run the Code Again" << endl;
                break;
        }
        Structure();
    }
};

int main() {
    ContactBook cb;
    cb.reopenCB();
    string n;
    cout << "  What is Your Name: ";
    cin >> n;

    cout << "***********" << endl;
    cout << "  " << n << "  WELCOME TO CONTACTBOOK      " << endl;
    cout << "***********" << endl;
    cb.Structure();
    return 0;
}
