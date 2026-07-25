def List_Mean(a):
    sum=0
    for i in a:
        sum+=i
    return (sum/len(a))
li=[2.3,4.5,6.7,2.1]
print(List_Mean(li))