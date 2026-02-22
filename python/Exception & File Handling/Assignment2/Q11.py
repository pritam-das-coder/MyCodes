# Write a Python program to open a text file named "grades.txt" and find the average grade of students
# listed in the file
def calcAvgGrade(file):
    sumGrade=0
    c=0
    for line in file:
        grade=int(line)
        sumGrade+=grade
        c+=1
    avgGrade=sumGrade/c
    return avgGrade
file=open(r"G:\My Drive\MyCodes\python\Exception & File Handling\Assignment2\grades.txt","r")
print(calcAvgGrade(file))