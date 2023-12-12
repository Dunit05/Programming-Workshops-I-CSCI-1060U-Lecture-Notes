class Employee {
public: // needed to access the variables/methods
    string name;
    int salary;
    string description() {
        return "Name: " + name + ", salary: " + to_string(salary);
    }
};
