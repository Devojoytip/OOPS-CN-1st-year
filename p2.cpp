#include<iostream>
using namespace std;

class Student
{
    public:
    char name[10];
    int id,age;
    void get()
    {
        cout<<"Enter name: "<<endl;
        cin>>name;
        cout<<"Enter id: "<<endl;
        cin>>id;
        cout<<"Enter age: "<<endl;
        cin >>age;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"id: "<<id<<endl;
    }
};

class ug: public Student
{
    public:
    int sem,fees,stipend;
    void get()
    {
        cout<<"Enter sem: "<<endl;
        cin>>sem;
        cout<<"Enter fees: "<<endl;
        cin>>fees;
        cout<<"Enter stipend: "<<endl;
        cin >>stipend;
    }
    void display()
    {
        cout<<"sem: "<<sem<<endl;
        cout<<"fees: "<<fees<<endl;
        cout<<"stipend: "<<stipend<<endl;
    }
};

class pg: public ug
{
    // public:
    // int sem,fees,stipend;
    // void get()
    // {
    //     cout<<"Enter sem: "<<endl;
    //     cin>>sem;
    //     cout<<"Enter fees: "<<endl;
    //     cin>>fees;
    //     cout<<"Enter stipend: "<<endl;
    //     cin >>stipend;
    // }
    // void display()
    // {
    //     cout<<"sem: "<<sem<<endl;
    //     cout<<"fees: "<<fees<<endl;
    //     cout<<"stipend: "<<stipend<<endl;
    // }

};

int main(){
    int n,m,k;
    cout<<"Enter no of ug students"<<endl;
    cin>>n;
    cout<<"Enter no of pg students"<<endl;
    cin>>m;
    k=m+n;
    Student s[k];
    ug u[n];
    pg p[m];
    cout<<"\nDetails of UG students-\n";
    for (int i = 0; i < n; i++)
    {
        s[i].get();
        u[i].get();  
    }
    cout<<"\nDetails of PG students-\n";
    for (int i = 0; i < m; i++)
    {
        s[n+i].get();
        p[i].get();  
    }
    cout<<"\nDetails of UG students-\n";
    for (int i = 0; i < n; i++)
    {
        s[i].display();
        u[i].display();  
    }
    cout<<"\nDetails of PG students-\n";
    for (int i = 0; i < m; i++)
    {
        s[n+i].display();
        p[i].display();  
    }
    
return 0;
}









// #include <iostream>
// using namespace std;

// class student
// {
//     char name[30];
//     int id;
//     int age;

// public:
//     void get()
//     {
//         cout << "Enter the name: ";
//         cin >> name;
//         cout << "Enter the student ID: ";
//         cin >> id;
//         cout << "Enter the age: ";
//         cin >> age;
//     }

//     void display()
//     {
//         cout << "Name: " << name << endl;
//         cout << "Student ID: " << id << endl;
//         cout << "Age: " << age << endl;
//     }
// };

// class ugStudent : public student
// {
//     int sem;
//     int fee;
//     int stipend;

// public:
//     void get()
//     {
//         cout << "Enter the number of semesters: ";
//         cin >> sem;
//         cout << "Enter the total fee: ";
//         cin >> fee;
//         cout << "Enter the stipend: ";
//         cin >> stipend;
//     }

//     void display()
//     {
//         cout << "Number of semesters: " << sem << endl;
//         cout << "Total Fee: " << fee << endl;
//         cout << "Stipend: " << stipend << endl;
//     }
// };

// class pgStudent : public student
// {
//     int sem;
//     int fee;
//     int stipend;

// public:
//     void get()
//     {
//         cout << "Enter the number of semesters: ";
//         cin >> sem;
//         cout << "Enter the total fee: ";
//         cin >> fee;
//         cout << "Enter the stipend: ";
//         cin >> stipend;
//     }

//     void display()
//     {
//         cout << "Number of semesters: " << sem << endl;
//         cout << "Total Fee: " << fee << endl;
//         cout << "Stipend: " << stipend << endl;
//     }
// };

// int main()
// {
//     int n, n1, n2, i;
//     cout << "Enter the number of UG students and PG students: ";
//     cin >> n1 >> n2;
//     n = n1 + n2;
//     student s[n];
//     ugStudent us[n1];
//     pgStudent ps[n2];
//     cout << "\nDetails of UG students-\n";
//     for (i = 0; i < n1; i++)
//     {
//         s[i].get();
//         us[i].get();
//     }
//     cout << "\nDetails of PG students-\n";
//     for (i = 0; i < n2; i++)
//     {
//         s[n1 + i].get();
//         ps[i].get();
//     }
//     cout << "\nDetails of UG students-\n";
//     for (i = 0; i < n1; i++)
//     {
//         s[i].display();
//         us[i].display();
//     }
//     cout << "\nDetails of PG students-\n";
//     for (i = 0; i < n2; i++)
//     {
//         s[n1 + i].display();
//         ps[i].display();
//     }
//     return 0;
// }