def printRev(lst,idx):
    if(idx==len(lst)):
        return
    printRev(lst,idx+1)
    print(lst[idx],end=" ")
l1=[2,3,5,6]
printRev(l1,0)
