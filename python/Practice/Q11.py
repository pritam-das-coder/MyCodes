# Write a script that takes a string paragraph as input and builds a dictionary where the keys are the unique words and the values are the frequencies of those words in the text.

str = input("Enter a paragraph : ")
lst = str.split()
words = dict.fromkeys(lst)
for i in words.keys():
    c = 0
    for j in lst:
        if j == i:
            c+=1
    words[i] = c
print(words)