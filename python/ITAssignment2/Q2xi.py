# Program to convert a list of temparatures in Celsius to Fahrenheit. 
def celToFah(C):
    return (1.8*C+32)
temp_Celsius=[0,10,20,30,40]
print(f"List of temparatures in Celsius : {temp_Celsius}")
temp_Fahrenheit=[]
for temp in temp_Celsius:
    temp_Fahrenheit.append(celToFah(temp))
print(f"Corresponding List of temparatures in Fahrenheit : {temp_Fahrenheit}")
# List of temparatures in Celsius : [0, 10, 20, 30, 40]
# Corresponding List of temparatures in Fahrenheit : [32.0, 50.0, 68.0, 86.0, 104.0] 