# Create a Python script that reads a text file named "expenses.txt" and calculates the total amount spent
# on various expenses listed in the file
import re
def calcAmount(file_path):
    with open(file_path,"r") as file:
        st=file.read()
        amt=re.findall(r"\b[0-9.]+\b",st)
    return amt
path=r"G:\My Drive\MyCodes\python\Exception & File Handling\Assignment2\expenses.txt"
print("Total Amount Spent : ")
amt=calcAmount(path)
sum=0
for i in amt:
    sum+=float(i)
print(sum)