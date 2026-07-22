#  Program to find gross salary of employee, consider basic salary, da, hra,ta etc. 
basic_salary=float(input("Enter basic salary of employee : "))
da=float(input("Enter Dearness Allowance of employee : "))
hra=float(input("Enter House Rent Allowance of employee : "))
ta=float(input("Enter Travel Allowance of employee : "))
#ma=float(input("Enter the Medical Allowance of employee : "))
gross_salary=basic_salary+da+hra+ta
print(f"Gross Salary of employee : {gross_salary}")
# Enter basic salary of employee : 20001
# Enter Dearness Allowance of employee : 400
# Enter House Rent Allowance of employee : 348
# Enter Travel Allowance of employee : 200.67
# Enter the Medical Allowance of employee :456
# Gross Salary of employee : 20949.67