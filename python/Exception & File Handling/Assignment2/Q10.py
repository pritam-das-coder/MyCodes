# Develop a Python program that reads a text file named "contacts.txt" and extracts email addresses from
# each line of the file
import re

def extract_emails(file_path):
    with open(file_path, 'r') as file:
        contents = file.read()
        emails = re.findall(r'\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Za-z]{2,}\b', contents)
    return emails

file_path = "G:\My Drive\MyCodes\python\Exception & File Handling\Assignment2\contacts.txt"
emails = extract_emails(file_path)
print("Email addresses extracted from 'contacts.txt':")
for email in emails:
    print(email)


'''The Output:
Email addresses extracted from 'contacts.txt':
sunil.doel@example.com
jane.foster@example.com
rdj.johnson@example.com
lana.williams@example.com
''' 
'''
. in regex means "any character"
\. means period
+ after ]means one or more character
\b in regex means word boundary-- a position b/w word character and non-word charcter
'''