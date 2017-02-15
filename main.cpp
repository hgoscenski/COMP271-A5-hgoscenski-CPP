#include <iostream>
using namespace std;


struct Node{
    string studentFName;
    string studentLName;
    string studentID;
    struct Node *link;
}
*front, *rear;

class queue{
public:
    void add(string,string,string);
    void display();
    void del();
    queue(){
        front = NULL;
        rear = NULL;
    }
};

void queue::add(string fname,string lname, string ID) {
    Node *tmp;
    tmp = new(struct Node);
    tmp->studentFName=fname;
    tmp->studentLName=lname;
    tmp->studentID=ID;
    tmp->link=NULL;
    if(front == NULL)
        front = tmp;
    else
        rear->link=tmp;
        rear = tmp;
}

void queue::del() {
    Node *tmp;
    if(front = NULL){
        cout << "That's just not going to work" << endl;
    } else{
        tmp = front;
        cout << "Removed Student: " << tmp->studentID << " | " << tmp->studentLName << ", " << tmp->studentFName << endl;
        front = front->link;
        free(tmp);
    }
}

void queue::display() {
    Node *ptr;
    ptr = front;
    if(front = NULL){
        cout<<"No one is on the waitlist" << endl;
    } else{
        cout<<"Registration Wait List: \n" << endl;
        while(ptr != NULL){
            cout<< ptr->studentID << " | " << ptr->studentLName << ", " << ptr->studentFName << "\n" << endl;
            ptr = ptr->link;
        }
    }
}

int main(){

    queue sr;
    sr.add("Harrison", "Goscenski", "1234567");
    sr.add("John", "Doe", "0987663");
    sr.add("Sam", "Smith", "1243242");

    sr.display();

    return 0;
}
