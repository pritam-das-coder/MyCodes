# Write a program to remove all duplicate elements from a list while maintaining the original order of the items.

arr = [2,12,9,2,1,0,1,4,5,4,4]
ans = []

for i in arr:
    if i not in ans:
        ans.append(i)

print(ans)

# print(list(dict.fromkeys(arr)))
# seen = set()
# unique = []
# for x in lst:
#     if x not in seen:
#         seen.add(x)
#         unique.append(x)
# print(unique)