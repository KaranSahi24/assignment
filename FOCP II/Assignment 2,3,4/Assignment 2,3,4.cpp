#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Person 
{
    protected:
        int age, id;
        long long contact;
        string name;
    public:
        Person(int age, int id, long long contact, string name) 
        {
            setAge(age);
            this->id = id;
            this->contact = contact;
            setName(name);
        }

        void setAge(int age) 
        {
            if (age > 0 && age < 120)
                this->age = age;
            else
                cout << "Invalid Age" << endl;
        }

        void setName(const string& name) 
        {
            if (name.empty())
                cout << "Invalid Name" << endl;
            else
                this->name = name;
        }

        virtual void displayDetails() const 
        {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "ID: " << id << endl;
            cout << "Contact Information: " << contact << endl;
        }

        virtual void calculatePayment() const
        {
            cout << "Payment: 0" << endl;
        }

        virtual ~Person() {}
};

class Student : public Person
{
    protected:
        string enrollmentDate, program;
        float gpa;
    public:
        Student(int age, int id, long long contact, const string& name, const string& enrollmentDate, const string& program, float gpa)
            : Person(age, id, contact, name), enrollmentDate(enrollmentDate), program(program), gpa(gpa) {}

        void displayDetails() const override 
        {
            cout << "Student Details:" << endl;
            Person::displayDetails();
            cout << "Enrollment Date: " << enrollmentDate << endl;
            cout << "Program: " << program << endl;
            cout << "GPA: " << gpa << endl;
        }
};

class UnderGraduateStudent : public Student 
{
    private:
        string major, minor, graduationDate;
    public:
        UnderGraduateStudent(int age, int id, long long contact, const string& name, const string& enrollmentDate, const string& program,
                            float gpa, const string& major, const string& minor, const string& graduationDate)
            : Student(age, id, contact, name, enrollmentDate, program, gpa), major(major), minor(minor), graduationDate(graduationDate) {}

        void displayDetails() const override 
        {
            Student::displayDetails();
            cout << "Major: " << major << endl;
            cout << "Minor: " << minor << endl;
            cout << "Graduation Date: " << graduationDate << endl;
        }

        void calculatePayment() const override 
        {
            cout << "Undergraduate Student with 30% scholarship." << endl;
        }
};

class GraduateStudent : public Student
{
    private:
        string researchTopic, advisor, thesisTitle;
    public:
        GraduateStudent(int age, int id, long long contact, const string& name, const string& enrollmentDate, const string& program,
                        float gpa, const string& researchTopic, const string& advisor, const string& thesisTitle)
            : Student(age, id, contact, name, enrollmentDate, program, gpa), researchTopic(researchTopic), advisor(advisor), thesisTitle(thesisTitle) {}

        void displayDetails() const override
        {
            Student::displayDetails();
            cout << "Research Topic: " << researchTopic << endl;
            cout << "Advisor: " << advisor << endl;
            cout << "Thesis Title: " << thesisTitle << endl;
        }

        void calculatePayment() const override 
        {
            cout << "Graduate Student with full assistantship. No payment required." << endl;
        }
};

class Professor : public Person 
{
    protected:
        string department, specialization, hireDate;
    public:
        Professor(int age, int id, long long contact, const string& name, const string& department,
                const string& specialization, const string& hireDate)
            : Person(age, id, contact, name), department(department), specialization(specialization), hireDate(hireDate) {}

        void displayDetails() const override 
        {
            cout << "Professor Details:" << endl;
            Person::displayDetails();
            cout << "Department: " << department << endl;
            cout << "Specialization: " << specialization << endl;
            cout << "Hire Date: " << hireDate << endl;
        }
};

class AssistantProfessor : public Professor
{
    private:
        bool isTenureTrack;
    public:
        AssistantProfessor(int age, int id, long long contact, const string& name, const string& department,
                        const string& specialization, const string& hireDate, bool isTenureTrack)
            : Professor(age, id, contact, name, department, specialization, hireDate), isTenureTrack(isTenureTrack) {}

        void displayDetails() const override 
        {
            Professor::displayDetails();
            cout << "Tenure Track: " << (isTenureTrack ? "Yes" : "No") << endl;
        }

        void calculatePayment() const override 
        {
            cout << "Assistant Professor salary: 50,000" << endl;
        }
};

class AssociateProfessor : public Professor
{
    private:
        int publicationsRequired;
    public:
        AssociateProfessor(int age, int id, long long contact, const string& name, const string& department,
                        const string& specialization, const string& hireDate, int publicationsRequired)
            : Professor(age, id, contact, name, department, specialization, hireDate), publicationsRequired(publicationsRequired) {}

        void displayDetails() const override 
        {
            Professor::displayDetails();
            cout << "Publications Required: " << publicationsRequired << endl;
        }

        void calculatePayment() const override 
        {
            cout << "Associate Professor salary: 75,000" << endl;
        }
};

class Course 
{
    protected:
        string code, title, description;
        int credits;
    public:
        Course(const string& code, const string& title, const string& description, int credits): code(code), title(title), description(description) 
        {
            setCredits(credits);
        }

        void setCredits(int credits) 
        {
            if (credits > 0)
                this->credits = credits;
            else
                cout << "Invalid Credits" << endl;
        }

        void displayCourse() const
        {
            cout << "Course Code: " << code << endl;
            cout << "Title: " << title << endl;
            cout << "Description: " << description << endl;
            cout << "Credits: " << credits << endl;
        }
};

class Department 
{
    protected:
        string name, location;
        int budget;
    public:
        Department(const string& name, const string& location, int budget): location(location), budget(budget) 
        {
            setName(name);
        }

        void setName(const string& name) 
        {
            if (name.empty())
                cout << "Invalid Name" << endl;
            else
                this->name = name;
        }
};

class Gradebook 
{
    protected:
        vector<int> studentIDs;
        vector<float> grades;
    public:
        void addGrade(int studentID, float grade)
        {
            if (grade < 0.0 || grade > 4.0) 
            {
                cout << "Invalid grade. GPA should be between 0.0 and 4.0" << endl;
                return;
            }
            studentIDs.push_back(studentID);
            grades.push_back(grade);
        }

        float calculateAverageGrade() const 
        {
            if (grades.empty()) 
            {
                cout << "No grades available to calculate average." << endl;
                return 0.0f;
            }

            float sum = 0.0f;
            for (float grade : grades)
                sum += grade;

            return sum / grades.size();
        }

        float getHighestGrade() const 
        {
            if (grades.empty()) 
            {
                cout << "No grades available to get highest of." << endl;
                return 0.0f;
            }

            float maxGrade = grades[0];
            for (float grade : grades)
                if (grade > maxGrade)
                    maxGrade = grade;

            return maxGrade;
        }

        void getFailingStudents() const 
        {
            if (grades.empty()) 
            {
                cout << "No students to check for failing." << endl;
                return;
            }

            for (size_t i = 0; i < grades.size(); ++i) 
            {
                if (grades[i] < 1.0) 
                {
                    cout << "Student with ID " << studentIDs[i] << " is failing." << endl;
                }
            }
        }
};

class EnrollmentManager 
{
    protected:
        vector<string> courseCodes;
        vector<vector<int>> enrolledStudentIDs;

        int findCourseIndex(const string& code) const
        {
            for (size_t i = 0; i < courseCodes.size(); ++i) 
            {
                if (courseCodes[i] == code) 
                    return i;
            }
            return -1;
        }

    public:
        void enrollStudent(const string& courseCode, int studentID) 
        {
            int index = findCourseIndex(courseCode);

            if (index == -1) 
            {
                courseCodes.push_back(courseCode);
                enrolledStudentIDs.emplace_back();
                index = courseCodes.size() - 1;
            }

            enrolledStudentIDs[index].push_back(studentID);
        }

        void dropStudent(const string& courseCode, int studentID) 
        {
            int index = findCourseIndex(courseCode);
            if (index == -1) 
            {
                cout << "Course does not exist to drop the student." << endl;
                return;
            }

            auto& students = enrolledStudentIDs[index];
            auto it = find(students.begin(), students.end(), studentID);
            if (it != students.end()) 
            {
                students.erase(it);
                cout << "Student with ID: " << studentID << " has been dropped from the course." << endl;
            } 
            else 
            {
                cout << "Student with ID: " << studentID << " is not enrolled in the course." << endl;
            }
        }

        void getEnrollmentCount(const string& courseCode) const 
        {
            int index = findCourseIndex(courseCode);
            if (index == -1) 
            {
                cout << "Course does not exist." << endl;
                return;
            }

            cout << "Number of students enrolled in " << courseCode << ": " << enrolledStudentIDs[index].size() << endl;
        }
};

int main() {
    
    UnderGraduateStudent ugStudent(20, 101, 1234567890, "Alice", "2022-09-01", "B.Tech", 3.6, "Computer Science", "Mathematics", "2026-06-01");
    GraduateStudent gradStudent(24, 102, 9876543210, "Bob", "2021-08-15", "M.Tech", 3.8, "AI in Education", "Dr. Smith", "Adaptive Learning Systems");

    AssociateProfessor assocProf(45, 201, 5678901234, "Dr. John", "Engineering", "AI & ML", "2015-07-20", 15);
    AssistantProfessor asstProf(38, 202, 6789012345, "Dr. Jane", "Computer Science", "Cybersecurity", "2019-06-12", true);

    Course course1("CS101", "Introduction to Programming", "Covers C++ basics", 4);
    Course course2("CS202", "Data Structures", "Covers stacks, queues, trees", 3);

    cout << "\n--- Course Details ---\n";
    course1.displayCourse();
    course2.displayCourse();

    cout << "\n--- Student Details ---\n";
    ugStudent.displayDetails();
    cout << endl;
    gradStudent.displayDetails();

    cout << "\n--- Professor Details ---\n";
    assocProf.displayDetails();
    cout << endl;
    asstProf.displayDetails();

    cout << "\n--- Payment Info ---\n";
    ugStudent.calculatePayment();
    gradStudent.calculatePayment();
    assocProf.calculatePayment();
    asstProf.calculatePayment();

    Gradebook gradebook;
    gradebook.addGrade(101, 3.5);
    gradebook.addGrade(102, 1.2);
    gradebook.addGrade(103, 0.9);  

    cout << "\n--- Gradebook Info ---\n";
    cout << "Average Grade: " << gradebook.calculateAverageGrade() << endl;
    cout << "Highest Grade: " << gradebook.getHighestGrade() << endl;
    gradebook.getFailingStudents();

    EnrollmentManager manager;
    manager.enrollStudent("CS101", 101);
    manager.enrollStudent("CS101", 102);
    manager.enrollStudent("CS202", 103);

    cout << "\n--- Enrollment Info ---\n";
    manager.getEnrollmentCount("CS101");
    manager.dropStudent("CS101", 101);
    manager.getEnrollmentCount("CS101");
    manager.getEnrollmentCount("CS202");

    return 0;
}