def printRec(lst):
    if(len(lst)==0): return
    print(lst[0])
    printRec(lst[1:])
def printRec2(lst,idx):
    if(idx==len(lst)):
        return
    print(lst[idx],end=" ")
    printRec2(lst,idx+1)
l1=[3,7,5,4]
# printRec(l1)
printRec2(l1,0)