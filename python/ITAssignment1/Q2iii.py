# Find whether a character is vowel, consonants, no, special char or not.
def check(ch):
    ch=ch.lower()
    if ch.isalpha():
        if ch in 'aeiou':
            return 'Vowel'
        else:
            return 'Consonant'
    elif ch.isdigit():
        return 'Number'
    else:
        return 'Special Character'
ch=input('Enter a character : ')
print(f'Given character is {check(ch)}')
