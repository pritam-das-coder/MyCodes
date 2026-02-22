# Show string splitting, replacing operation.
# string splitting
s1=' Hello world\nThis is a test.'
words=s1.split()
print(words)
s2='apple,mango,cherry'
fruits=s2.split(',')
print(fruits)
# string replacing
str='Hello, I am good, I am nice, I am wow'
print('Original String :')
print(str)
print('New String :')
print(str.replace('I am','We are'))
print('New String after 2 replacement :')
print(str.replace('I am','We are',2))