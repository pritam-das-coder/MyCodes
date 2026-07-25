# A list is a non-decreasing if each element is at least as big as the preceding one. For
# instance [], [7], [8,8,11] and [3,19,44,44,63,89] are non-decreasing,
# while [3,18,4] and [23,14,3,14,3,23] are not. Write a recursive function to check if a
# list is non-decreasing or not.
def check(li):
    if len(li)<=1: return True
    if(li[0]>li[1]): return False
    return check(li[1:])

print(check([]))                 # True
print(check([7]))                # True
print(check([8, 8, 11]))         # True
print(check([3, 19, 44, 44, 63, 89]))  # True
print(check([3, 18, 4]))         # False
print(check([23, 14, 3, 14, 3, 23]))  # False


