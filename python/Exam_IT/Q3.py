def calculate_salary():
    print("--- Gross Salary Calculator ---")
    
    try:
        # 1: Get the Basic Salary and percentages from the user
        basic = float(input("Enter Basic Salary: "))
        da_percent = float(input("Enter DA Percentage : "))
        hra_percent = float(input("Enter HRA Percentage : "))
        ta_percent = float(input("Enter TA Percentage : "))
        
        # 2: Calculate the actual amounts based on the user's percentages
        da = basic * (da_percent / 100)
        hra = basic * (hra_percent / 100)
        ta = basic * (ta_percent / 100)
        
        # 3: Calculate gross salary
        gross_salary = basic + da + hra + ta
        
        # 4: Display the output
        print("\n--- Salary Slip ---")
        print(f"Basic Salary  : {basic:.2f}")
        print(f"DA ({da_percent}%)      : {da:.2f}")
        print(f"HRA ({hra_percent}%)     : {hra:.2f}")
        print(f"TA ({ta_percent}%)      : {ta:.2f}")
        print("-" * 25)
        print(f"Gross Salary  : {gross_salary:.2f}")
        print("-" * 25)
        
    except ValueError:
        print("\nError: Invalid input. Please enter numbers only.")

# Run the program
if __name__ == "__main__":
    calculate_salary()