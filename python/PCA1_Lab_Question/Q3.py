# Write a Python function sublist(l1,l2) that takes two sorted lists as arguments and
# returns True if the first list is a sublist of the second list, and returns False otherwise.
# A sublist of a list is a segment consisting of contiguous values, without a gap.
# Thus, [2,3,4] is a sublist of [2,2,3,4,5], but [2,2,4] and [2,4,5] are not.
def sublist(l1,l2):
    k=len(l1)
    n=len(l2)
    i=0
    j=k-1
    while j<n :
        if l1==l2[i:j+1]:
            return True
        i+=1
        j+=1
    return False
print(sublist([2,2,4],[2,4,5]))
