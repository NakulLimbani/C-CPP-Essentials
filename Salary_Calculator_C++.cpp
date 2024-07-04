#include <iostream>
using namespace std;
int main()
{
    int HoursWorked , OvertimeHours , TotalSalary ;
    cout << "Enter The Total Number Of Hours Worked:\n";
    cin >> HoursWorked;
    if (HoursWorked > 40) 
    {
        OvertimeHours = HoursWorked - 40;
        TotalSalary = (40 * 250) + (OvertimeHours * 300);
    }
    else 
    {
        TotalSalary = (HoursWorked * 250);
    }
    cout << "Total Earning Is : Rs " << TotalSalary;
    return 0;
}