# A list is a palindrome if it reads the same forwards and backwards. For
# instance [], [7], [8,11,8] and [19,3,44,44,3,19] are palindromes,
# while [3,18,4] and [23,14,3,14,3,23] are not. Write a recursive function to check if a
# list is a palindrome.
def isPalin(li):
    if len(li)==0: return True
    if li[0]!=li[len(li)-1]: return False
    return isPalin(li[1:len(li)-1])
print(isPalin([19,3,44,44,3,19]))
