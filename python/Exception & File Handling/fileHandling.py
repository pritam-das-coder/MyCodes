# file=open("file.txt","r")
# for line in file:
#     print(line,end="")
# print()

# print(file.read())

# with open("file.txt","r") as file:
#     data=file.read()
#     print(data)

# with open("file.txt","r") as file:
#     data=file.read(7)
#     print(data)

file=open(r"G:\My Drive\MyCodes\daspr\codeLinux\python\Exception & File Handling\file2.txt","w")
file.write("Hello\n")
file.write("I am Dip")
file.close()

# with open("file3.txt","a") as f:
#     f.write("Preety Little Baby")

# import os
# os.remove("file3.txt")
# os.remove("file2.txt")