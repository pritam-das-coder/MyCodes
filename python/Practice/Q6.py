# Given a string, write a script using built-in string methods to count the number of vowels, consonants, digits, and special characters.

str = input("Enter a string : ")

no_vowel = 0
no_consonants = 0
no_digits = 0
no_specialchar = 0

for ch in str:
    c = ch.lower()
    if c == " ":
        continue
    elif c.isalpha():
        if c in ['a','e','i','o','u']:
            no_vowel+=1
        else:
            no_consonants+=1
    elif c.isdigit():
        no_digits+=1
    else:
        no_specialchar+=1

print(f"Number of vowels : {no_vowel}")
print(f"Number of consonants : {no_consonants}")
print(f"Number of digits : {no_digits}")
print(f"Number of special characters : {no_specialchar}")