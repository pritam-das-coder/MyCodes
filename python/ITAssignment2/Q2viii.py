# Write a program to show divisible by 7 no’s within 1 to 300 in a separated list.
my_list=[]
for i in range(1,301):
    if i%7==0:
        my_list.append(i)
print(f"Required List : {my_list}")
# Required List : [7, 14, 21, 28, 35, 42, 49, 56, 63, 70, 77, 84, 91, 98, 105, 112, 119, 126, 133, 140, 147, 154, 161, 168, 175, 182, 189, 196, 203, 210, 217, 224, 231, 238, 245, 252, 259, 266, 273, 280, 287, 294]