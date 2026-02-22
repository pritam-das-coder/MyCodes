# Create a dictionary and Implement Various dictionary operations
student = { 
"name": "Alex", 
"age": 21, 
"major": "Computer Science", 
"courses": ["Math", "Physics", "Programming"] 
} 
print(f"Initial dictionary: {student}\n") 
print(f"Name: {student['name']}") 
print(f"Age: {student.get('age')}\n") 
student["gpa"] = 3.8 
print(f"After adding GPA: {student}") 
student["age"] = 22 
print(f"After updating age: {student}\n") 
major = student.pop("major") 
print(f"Removed major '{major}' using pop().") 
print(f"Dictionary after pop: {student}") 
last_item = student.popitem() 
print(f"Removed last item '{last_item}' using popitem().") 
print(f"Dictionary after popitem: {student}\n") 
print("Iterating through keys:") 
for key in student.keys(): 
    print(key) 
print("\nIterating through values:") 
for value in student.values(): 
    print(value) 
print("\nIterating through key-value pairs:") 
for key, value in student.items(): 
print(f"{key}: {value}") 