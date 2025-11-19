# Write a Python function subsequence(l1,l2) that takes two sorted lists as arguments
# and returns True if the first list is a subsequence of the second list, and
# returns False otherwise.
# A subsequence of a list is obtained by dropping some values.
# Thus, [2,3,4] and [2,2,5] are subsequences of [2,2,3,4,5], but [2,4,4] and [2,4,3] are
# not.
def subsequence(l1,l2):
    i=0
    j=0
    while i<len(l1) and j<len(l2):
        if l1[i]==l2[j]:
            i+=1
        j+=1
    if i==len(l1): return True
    else: return False
print(subsequence([2,3,3],[2,2,3,4,5]))
        