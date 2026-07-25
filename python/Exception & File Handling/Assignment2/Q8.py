# Create a Python program that reads a text file named "data.txt" and calculates the total number of words
# present in the file
file=open(r"G:\My Drive\MyCodes\python\Exception & File Handling\Assignment2\data.txt","r")
str=file.read()
lst=str.split()
print(len(lst))