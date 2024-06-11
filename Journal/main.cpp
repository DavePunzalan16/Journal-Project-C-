#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

// Function to implement Currency Converter
void currency_converter() {
    float pesos;
    cout << "Enter amount in Philippine Pesos (PHP): ";
    cin >> pesos;
    float dollar = pesos / 50;
    float euro = pesos / 65;
    float yen = pesos / 2.2;
    cout << "Equivalent amount in US Dollar: " << dollar << endl;
    cout << "Equivalent amount in Euro: " << euro << endl;
    cout << "Equivalent amount in Japanese Yen: " << yen << endl;
    cout << "Executing Currency Converter code..." << endl;
}

// Function to implement Temperature Converter
void temperature_converter() {
    float celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    float kelvin = celsius + 273.15;
    float fahrenheit = (celsius * 9/5) + 32;
    cout << "Equivalent temperature in Kelvin: " << kelvin << endl;
    cout << "Equivalent temperature in Fahrenheit: " << fahrenheit << endl;
    cout << "Executing Temperature Converter code..." << endl;
}

// Function to implement Data Calculator
void data_calculator() {
    float data_consumed;
    const float max_monthly_data = 100;
    cout << "Enter amount of data consumed in GB: ";
    cin >> data_consumed;
    float average_per_day = data_consumed / 30;
    float remaining_data = max_monthly_data - data_consumed;
    float amount_due = data_consumed * 10;
    cout << "Average Per Day Data: " << average_per_day << " GB" << endl;
    cout << "Remaining Data: " << remaining_data << " GB" << endl;
    cout << "Amount Due: " << amount_due << " GB" << endl;
    cout << "Executing Data Calculator code..." << endl;
}

// Function to implement Fine Calculator
void fine_calculator() {
    float speed;
    const float BASE_SPEED_LIMIT = 80.0;
    const float EXTRA_FINE_PER_KPH = 50.0;
    const float MAX_SPEED_LIMIT = 100.0;
    cout << "Enter the driver's speed in KPH: ";
    cin >> speed;
    if (speed <= BASE_SPEED_LIMIT){
        cout << "No fine.\n";
    } else if (speed <= MAX_SPEED_LIMIT) {
        float fine = 500.0;
        cout << "Fine: P" << fine << "/n";
    } else {
        float excessSpeed = speed - MAX_SPEED_LIMIT;
        float fine = 500.0 + (excessSpeed * EXTRA_FINE_PER_KPH);
        cout << "Fine: " << fine << "\n";
    }
    cout << "Executing Fine Calculator code..." << endl;
}

// Function to implement Number Evaluator
void number_evaluator() {
    int number;
    int sum = 0;
    cout << "Enter numbers to sum(enter 0 to stop):\n";
    while(true) {
        cin >> number;
        if(number == 0){
            break;
        } sum += number;
    } cout<<"Sum of entered numbers: " << sum << "\n";
    cout << "Executing Number Evaluator code..." << endl;
}

// Function to implement Quick Geometry
void quick_geometry() {
    cout << "Available Shapes" << endl
    << "1. SQUARE" << endl
    << "2. TRIANGLE" << endl
    << "3. CIRCLE" << endl
    << "4. RECTANGLE" << endl
    << "5. ELLIPSE" << endl
    << "6. TRAPEZOID" << endl;
    
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;
    
    int area = 0.0;
    string shapeName = "";
    
    switch (choice) {
        case 1: {
            double sideLength;
            cout << "Enter the side length of the square: ";
            cin >> sideLength;
            area = sideLength * sideLength;
            shapeName = "Square";
            break;
        }
        case 2: {
            double base, height;
            cout << "Enter the base of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
            area = 0.5 * base * height;
            shapeName = "Triangle";
            break;
        }
        case 3: {
            double radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            area = M_PI * radius * radius;
            shapeName = "Circle";
            break;
        }
        case 4: {
            double base, height;
            cout << "Enter the base of the rectangle: ";
            cin >> base;
            cout << "Enter the height of the rectangle: ";
            cin >> height;
            area = base * height;
            shapeName = "Rectangle";
            break;
        }
        case 5: {
            double majorAxis, minorAxis;
            cout << "Enter the major axis of the ellipse: ";
            cin >> majorAxis;
            cout << "Enter the minor axis of the ellipse: ";
            cin >> minorAxis;
            area = M_PI * majorAxis * minorAxis;
            shapeName = "Ellipse";
            break;
        }
        case 6: {
            double a, b, height;
            cout << "Enter the length of the first parallel side of the trapezoid: ";
            cin >> a;
            cout << "Enter the length of the second parallel side of the trapezoid: ";
            cin >> b;
            cout << "Enter the height of the trapezoid: ";
            cin >> height;
            area = 0.5 * (a + b) * height;
            shapeName = "Trapezoid";
            break;
        }
        default:
            cout << "Invalid choice" << endl;
    }
    
    cout << "You chose " << shapeName << endl;
    cout << "The area is " << area << endl;
    cout << "Executing Quick Geometry code..." << endl;
}

// Function to implement Salary Calculator
void salary_calculator() {
    int hoursWorked, ratePerHour, sss, pagIbig, philhealth, grossPay, tax, deductions, netPay;
    cout <<"Enter Hours Worked: ";
    cin>> hoursWorked;
    cout <<"Enter Rate Per Hour: ";
    cin>> ratePerHour;
    cout <<"Enter SSS Deduction: ";
    cin>> sss;
    cout <<"Enter PagIbig Deduction: ";
    cin>> pagIbig;
    cout <<"Enter Philhealth Deduction: ";
    cin>> philhealth;
    grossPay= hoursWorked * ratePerHour;
    tax = grossPay / 10;
    deductions = tax + sss + pagIbig + philhealth;
    netPay = grossPay - deductions;
    cout << "\nEmployee Salary Statement" << endl;
    cout << "=========================" << endl;
    cout << "Gross Pay: P" << deductions << endl;
    cout << "Net Pay: P" << netPay << endl;
    cout << "Executing Salary Calculator code..." << endl;
}

// Function to implement Number Evaluator in Functions
void number_evaluator_in_functions() {
    char playAgain;
    do {
        int num, count = 0, sum = 0, oddCount = 0, evenCount = 0, negativeCount = 0, positiveCount = 0;
        do {
            cout << "Enter a number (0 to stop): ";
            cin >> num;
            if (num != 0) {
                count++;
                sum += num;
                if (num % 2 == 0) {
                    evenCount++;
                } else {
                    oddCount++;
                }if (num < 0) {
                    negativeCount++;
                } else {
                    positiveCount++;
                }
            }
        } while (num != 0);
        
        cout << "Total numbers entered including 0: " << count << endl;
        cout << "Sum of all the numbers entered: " << sum << endl;
        cout << "Average of all the numbers entered: " << (count == 0 ? 0 : static_cast<double>(sum) / count) << endl;
        cout << "Total odd numbers entered: " << oddCount << endl;
        cout << "Total even numbers entered including 0: " << evenCount << endl;
        cout << "Total negative numbers entered: " << negativeCount << endl;
        cout << "Total positive numbers entered including 0: " << positiveCount << endl;
        
        cout << "Do you want to try again? (Y/N): ";
        cin >> playAgain;
        
    } while (playAgain == 'Y' || playAgain == 'y');
    
    cout << "Goodbye!" << endl;
    cout << "Executing Number Evaluator In Functions code..." << endl;
}

// Function of lab act of class student info
void laboratory_act_7(){
    
        string name;
        int studentNumber;
        int year;
        double quizGrade;
        double classStandingGrade;
        double nonAcademicsGrade;
        double majorExamGrade;
        
        cout << "Enter Student Name: ";
        cin >> name;
        cout << "Enter Student Number: ";
        cin >> studentNumber;
        cout << "Enter Year: ";
        cin >> year;
        cout << "Enter Quiz Grade: ";
        cin >> quizGrade;
        cout << "Enter Class Standing Grade: ";
        cin >> classStandingGrade;
        cout << "Enter Non-Academics Grade: ";
        cin >> nonAcademicsGrade;
        cout << "Enter Major Exam Grade: ";
        cin >> majorExamGrade;
        
        if (year == 1) {
            cout << "Equivalent of Year in Year Level: Freshmen" << endl;
        } else if (year == 2) {
            cout << "Equivalent of Year in Year Level: Sophomore" << endl;
        } else if (year == 3) {
            cout << "Equivalent of Year in Year Level: Junior" << endl;
        } else if (year == 4) {
            cout << "Equivalent of Year in Year Level: Senior" << endl;
        } else {
            cout << "Equivalent of Year in Year Level: Error" << endl;
        }
        
        double rating = (quizGrade * 0.35) + (classStandingGrade * 0.20) + (nonAcademicsGrade * 0.05) + (majorExamGrade * 0.40);
        cout << "Rating: " << rating << endl;
        
        cout << "Equivalent in 11 pt System of Rating: ";
        if (rating >= 98) {
            cout << "1.00";
        } else if (rating >= 95) {
            cout << "1.25";
        } else if (rating >= 92) {
            cout << "1.50";
        } else if (rating >= 89) {
            cout << "1.75";
        } else if (rating >= 86) {
            cout << "2.00";
        } else if (rating >= 83) {
            cout << "2.25";
        } else if (rating >= 80) {
            cout << "2.50";
        } else if (rating >= 77) {
            cout << "2.75";
        } else if (rating >= 75) {
            cout << "3.00";
        } else {
            cout << "5.00";
        }
        cout << endl;}
// Function of lab act of Employee position
void laboratory_act_8(){
    string name;
    char positionCode;
    char taxCode;
    
    cout << "Enter Employee Name: ";
    cin >> name;
    
    cout << "Enter Position Code (M, S, R, C): ";
    cin >> positionCode;
    
    cout << "Enter Tax Code (A, B, C, D): ";
    cin >> taxCode;
    
    string positionEquivalent;
    double grossPay = 0;
    double netPay = 0; // Define netPay only once
    
    switch (positionCode) {
        case 'M':
            positionEquivalent = "Manager";
            grossPay = 50000;
            break;
        case 'S':
            positionEquivalent = "Supervisor";
            grossPay = 35000;
            break;
        case 'R':
            positionEquivalent = "Regular";
            grossPay = 25000;
            break;
        case 'C':
            positionEquivalent = "Contractual";
            grossPay = 15000;
            break;
        default:
            positionEquivalent = "Unknown";
            break;
    }
    
    string taxEquivalent;
    double taxRate = 0;
    
    switch (taxCode) {
        case 'A':
            taxEquivalent = "10% tax";
            taxRate = 0.10;
            break;
        case 'B':
            taxEquivalent = "20% tax";
            taxRate = 0.20;
            break;
        case 'C':
            taxEquivalent = "30% tax";
            taxRate = 0.30;
            break;
        case 'D':
            taxEquivalent = "40% tax";
            taxRate = 0.40;
            break;
        default:
            taxEquivalent = "0% tax";
            break;
    }
    
    netPay = grossPay - (grossPay * taxRate); // Calculate netPay
    
    cout << "Employee Name: " << name << endl;
    cout << "Position Code Equivalent: " << positionEquivalent << endl;
    cout << "Tax Code Equivalent: " << taxEquivalent << endl;
    cout << "Gross Pay: " << grossPay << endl;
    cout << "Net Pay: " << netPay << endl;
}
// Function of lab act of contractual and regular
void laboratory_act_9(){
    string name;
    int employeeId;
    double monthlySalary;
    double hourlySalary;
    double hoursWorked;
    
    // Input details for a regular employee
    cout << "Enter details for Regular Employee:" << std::endl;
    cout << "Employee Name: ";
    cin >> name;
    cout << "Employee ID: ";
    cin >> employeeId;
    cout << "Monthly Salary (USD): ";
    cin >> monthlySalary;
    
    // Display details and compute salary for regular employee
    cout << "Details of Employee:" << endl;
    cout << "Employee ID: " << employeeId << endl;
    cout << "Name: " << name << endl;
    cout << "Type: Regular Employee" << endl;
    cout << "Monthly Salary: " << monthlySalary << " USD per month" << endl;
    
    // Input details for a contractual employee
    cout << "Enter details for Contractual Employee:" << endl;
    cout << "Employee Name: ";
    cin >> name;
    cout << "Employee ID: ";
    cin >> employeeId;
    cout << "Hourly Salary (USD): ";
    cin >> hourlySalary;
    cout << "Enter hours worked by Contractual Employee: ";
    cin >> hoursWorked;
    
    // Compute salary for contractual employee
    double totalSalary = hourlySalary * hoursWorked;
    
    // Display details and computed salary for contractual employee
    cout << "Details of Employee:" << endl;
    cout << "Employee ID: " << employeeId << endl;
    cout << "Name: " << name << endl;
    cout << "Type: Contractual Employee" << endl;
    cout << "Total Salary: " << totalSalary << " USD" << endl;

}
//Function of lab act of Credit card
void laboratory_act_10(){
    // Bank interest calculation
    int principal = 10000;
    int time = 12;
    double bankInterest = principal * 0.15 * time;
    cout << "The Standard Rate is 15%: " << endl;
    cout << "Computed Interest based on our rate is: " << bankInterest << endl;
    
    // BDO interest calculation
    double bdoInterest = principal * 0.10 * time;
    cout << "Here in BDO, our rate is only 10%: " << endl;
    cout << "Computed Interest based on our rate is: " << bdoInterest << endl;
    
    // Credit Card payment calculation
    int amountToPay = 15000;
    int paymentTerms = 3;
    double amountPerTerm = static_cast<double>(amountToPay) / paymentTerms;
    cout << "Amount to pay per Payment Term (Credit Card): " << amountPerTerm << endl;
   }
//Function of lab act of Credit PNB
void laboratory_act_11(){
    // Bank interest calculation
    int principal = 10000;
    int time = 12;
    double bankInterest = principal * 0.15 * time;
    cout << "The Standard Rate is 15%: " << endl;
    cout << "Computed Interest based on our rate is: " << bankInterest << endl;
    
    // BDO interest calculation
    double bdoInterest = principal * 0.10 * time;
    cout << "Here in BDO, our rate is only 10%: " << endl;
    cout << "Computed Interest based on our rate is: " << bdoInterest << endl;
    
    // PNB interest calculation
    int principalPNB1 = 10000;
    int principalPNB2 = 60000;
    double ratePNB1, ratePNB2;
    int timePNB = 12;
    
    if (principalPNB1 <= 50000) {
        ratePNB1 = 0.075; // 7.5%
    } else {
        ratePNB1 = 0.05; // 5%
    }
    
    if (principalPNB2 <= 50000) {
        ratePNB2 = 0.075; // 7.5%
    } else {
        ratePNB2 = 0.05; // 5%
    }
    
    cout << "at PNB, our rate depends on the Principal amount." << endl;
    cout << "If the Principal amount is less than or equal to 50000, the rate is 7.5%." << endl;
    cout << "If the Principal amount is more than 50000, the rate is 5%." << endl;
    cout << "Computed Interest based on our rate for principal 1: " << (principalPNB1 * ratePNB1 * timePNB) << endl;
    cout << "Computed Interest based on our rate for principal 2: " << (principalPNB2 * ratePNB2 * timePNB) << endl;
    
}

// Function to print items from a map
void print_map_items(map<int, pair<string, string>>& m) {
    for (const auto& entry : m) {
        cout << entry.first << " = [" << entry.second.first << "]" << endl;
    }
}

int main() {
    cout << "PRELIM JOURNAL" << endl;
    cout << "DAVE MATTHEW S. PUNZALAN" << endl;
    cout << "20221128752" << endl;
    cout << "CCS2102-CS2C" << endl;
    
    // Define the Laboratory and Quizzes maps with additional code
    map<int, pair<string, string>> Laboratory = {
        {1, {"Problem 1: Currency Converter", "// insert your code here"}},
        {2, {"Problem 2: Temperature Converter", "// insert your code here"}},
        {3, {"Problem 3: Data Calculator", "// insert your code here"}},
        {4, {"Problem 4: Fine Calculator", "// insert your code here"}},
        {5, {"Problem 5: Number Evaluator", "// insert your code here"}},
        {6, {"Problem 6: Quick Geometry", "// insert your code here"}},
        {7, {"Problem 7: Grading Evaluator", "//insert your code here"}},
        {8, {"Problem 8: Employee Position", "//insert your code here"}},
        {9, {"Problem 9: Salary computation", "//insert your code here"}},
        {10, {"Problem 10: Bank Payment Option", "//insert your code here"}},
        {11, {"Problem 11: PNB Bank", "//insert your code here"}}
    };
    
    map<int, pair<string, string>> Quizzes = {
        {1, {"Quiz 1: Salary Calculator", "// insert your code here"}},
        {2, {"Quiz 2: Number Evaluator in Functions", "// insert your code here"}}
    };
    
    string file_name;
    cout << "Enter File to open (A OR B) = ";
    cin >> file_name;
    
    // Convert the file_name to uppercase for comparison
    transform(file_name.begin(), file_name.end(), file_name.begin(), ::toupper);
    
    if (file_name == "A") {
        cout << "you enter file: A = LABORATORY" << endl;
        while (true) {
            cout << "Enter your choice (1 to 11, or 0 to exit): ";
            int lab_choice;
            cin >> lab_choice;
            
            if (lab_choice >= 1 && lab_choice <= 11) {
                cout << "you enter: " << lab_choice << " = [" << Laboratory[lab_choice].first << "]" << endl;
                // Call the associated function for the selected problem
                switch (lab_choice) {
                    case 1: currency_converter(); break;
                    case 2: temperature_converter(); break;
                    case 3: data_calculator(); break;
                    case 4: fine_calculator(); break;
                    case 5: number_evaluator(); break;
                    case 6: quick_geometry(); break;
                    case 7: laboratory_act_7(); break;
                    case 8: laboratory_act_8(); break;
                    case 9: laboratory_act_9(); break;
                    case 10: laboratory_act_10(); break;
                    case 11: laboratory_act_11(); break;
                    
                }
            } else if (lab_choice == 0) {
                break;
            } else {
                cout << "Invalid choice. Please try again." << endl;
            }
        }
    } else if (file_name == "B") {
        cout << "you enter file: B = QUIZZES" << endl;
        while (true) {
            cout << "Enter your choice (1 to 2, or 0 to exit): ";
            int quiz_choice;
            cin >> quiz_choice;
            
            if (quiz_choice >= 1 && quiz_choice <= 2) {
                cout << "you enter: " << quiz_choice << " = [" << Quizzes[quiz_choice].first << "]" << endl;
                // Call the associated function for the selected quiz
                switch (quiz_choice) {
                    case 1: salary_calculator(); break;
                    case 2: number_evaluator_in_functions(); break;
                }
            } else if (quiz_choice == 0) {
                break;
            } else {
                cout << "Invalid choice. Please try again." << endl;
            }
        }
    } else {
        cout << "Invalid file name. Please enter 'A' or 'B'." << endl;
    }
    
    return 0;
}
