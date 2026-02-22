# Write a Python function intersect(l1,l2) that takes two sorted lists as arguments and
# returns the list of all elements common to both l1 and l2 in the same order that they
# appear in the two lists. If the same element occurs more than once in both lists, it
# should appear in the output exactly once.
# Thus, intersect([2,2,4],[1,2,2,3,4]) should return [2,
# 4] while intersect([1,2,3],[4,5,6]) should return [].
def intersect(l1, l2):
    i, j = 0, 0
    result = []
    
    while i < len(l1) and j < len(l2):
        if l1[i] == l2[j]:
            # Only add if not already added (avoid duplicates)
            if not result or result[-1] != l1[i]:
                result.append(l1[i])
            i += 1
            j += 1
        elif l1[i] < l2[j]:
            i += 1
        else:
            j += 1
    
    return result


# Example runs
print(intersect([2,2,4], [1,2,2,3,4]))  # [2, 4]
print(intersect([1,2,3], [4,5,6]))      # []
print(intersect([1,1,2,3,4], [1,2,2,4,5]))  # [1,2,4]
