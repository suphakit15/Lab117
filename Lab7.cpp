#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

struct studentNode {
    char name[20];
    int age;
    char sex;
    float gpa;
    studentNode *next;
};

class LinkedList {
protected:
    studentNode *start, *now;

public:
    LinkedList();
    virtual ~LinkedList();

    void InsNode(char n[], int a, char s, float g);
    void DelNode();
    void GoNext();
    void GoFirst();
    virtual void ShowNode();
};

class NewList : public LinkedList {
public:
    virtual void ShowNode();
};

int main() {

    LinkedList listA;
    NewList listB;
    LinkedList *listC;

    listA.InsNode("one", 1, 'A', 1.1);
    listA.InsNode("two", 2, 'B', 2.2);
    listA.InsNode("three", 3, 'C', 3.3);

    listA.GoNext();
    listA.ShowNode();

    listB.InsNode("four", 4, 'D', 4.4);
    listB.InsNode("five", 5, 'E', 5.5);
    listB.InsNode("six", 6, 'F', 6.6);

    listB.DelNode();
    listB.ShowNode();

    listC = &listA;
    listC->GoFirst();
    listC->ShowNode();

    listC = &listB;
    listC->ShowNode();

    return 0;
}
LinkedList::LinkedList() {
    start = NULL;
    now = NULL;
}

LinkedList::~LinkedList() {
    while (start != NULL) {
        studentNode *temp = start;
        start = start->next;
        delete temp;
    }
}
void LinkedList::InsNode(char n[], int a, char s, float g) {
    studentNode *temp = new studentNode;
    strcpy(temp->name, n);
    temp->age = a;
    temp->sex = s;
    temp->gpa = g;
    temp->next = NULL;

    if (start == NULL)
        start = temp;
    else {
        studentNode *p = start;
        while (p->next != NULL)
            p = p->next;
        p->next = temp;
    }
}
void LinkedList::DelNode() {
    if (start == NULL || start->next == NULL)
        return;

    studentNode *temp = start->next;
    start->next = temp->next;
    delete temp;
}
void LinkedList::GoNext() {
    if (start == NULL) return;

    if (now == NULL)
        now = start->next;
    else if (now->next != NULL)
        now = now->next;
}
void LinkedList::GoFirst() {
    now = start;
}
void LinkedList::ShowNode() {
    if (now != NULL) {
        cout << now->name << " "
             << now->age << " "
             << now->sex << " "
             << fixed << setprecision(2)
             << now->gpa << endl;
    }
}
void NewList::ShowNode() {
    if (start == NULL) return;

    studentNode *p = start;
    while (p->next != NULL)
        p = p->next;

    cout << p->name << " " << start->name << endl;
}