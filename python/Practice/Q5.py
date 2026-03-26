# Write a program that takes a sentence as input and uses string slicing to reverse the order of the words (not the characters).

str = input("Enter a sentence : ")
words = str.split()
words.reverse()
res = " ".join(words)
print(res)