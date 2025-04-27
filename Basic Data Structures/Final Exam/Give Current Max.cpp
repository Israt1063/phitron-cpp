
/*
Problem Statement

You will be given a list  of size . The list will contain data of some students where 
each student have name ,  id and mark . Then you will be given  queries, for each query 
there will be some commands. Commands are given below - 

 0 -> Insert  into the list where  is the data of a student which contain name,id  and mark . 
 Then print the current student's data who has the maximum mark  from the list. 
 1-> Print the current student's data who has the maximum mark  from the list. 
 2-> Delete the student who has the maximum mark from the list and print the current student 
 who has the maximum mark  from the list. 

Note: If there are multiple students with same mark then we will select whose id  is smaller. 
If the list is empty and you can't print anything then you should print "Empty".

Sample Input 0

3
akib 23 95
jobbar 24 99
ali 25 100
8
1
2
2
2
0 kabir 15 65
0 asif 55 65
2
0 tamim 35 65
Sample Output 0

ali 25 100
jobbar 24 99
akib 23 95
Empty
kabir 15 65
kabir 15 65
asif 55 65
tamim 35 65
*/

#include <iostream>
#include<algorithm>
using namespace std;

class Student {
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks) {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp {
public:
    bool operator()(Student l, Student r) 
    {
        if (l.marks != r.marks)
            return l.marks < r.marks;
        return l.roll > r.roll;       
    }
};

int main() {
    priority_queue<Student, vector<Student>, cmp> pq; 

    int n;
    cin >> n; 
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        pq.push(obj);
    }

    int q;
    cin >> q;

    while (q--) {
        int g;
        cin >> g;

        switch (g) {
            case 0: 
                {
                    string name;
                    int roll, marks;
                    cin >> name >> roll >> marks;
                    Student obj(name, roll, marks);
                    pq.push(obj);
                    if (!pq.empty())
                    {
                        Student topStudent = pq.top();
                        cout << topStudent.name << " " << topStudent.roll << " " << topStudent.marks << endl;
                    }
                    break;
                }
            case 1: 
                { 
                if (pq.empty()) {
                    cout << "Empty" << endl;
                } else {
                    Student topStudent = pq.top();
                    cout << topStudent.name << " " << topStudent.roll << " " << topStudent.marks << endl;
                }
                break;
            }
            case 2:
                { 
                    if (pq.empty()) {
                        cout << "Empty" << endl;
                    } else {
                        pq.pop();
                        if (pq.empty()) {
                            cout << "Empty" << endl;
                        } else {
                            Student topStudent = pq.top();
                            cout << topStudent.name << " " << topStudent.roll << " " << topStudent.marks << endl;
                        }
                    }
                    break;
                }
           
        }
    }

    return 0;
}
