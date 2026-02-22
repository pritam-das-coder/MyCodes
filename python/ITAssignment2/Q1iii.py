#  Find Average of n natural numbers using list, function handling concepts. 
def average(l):
    sum=0
    for i in range(0,len(l)):
        sum+=l[i]
    avg=sum/len(l)
    return avg
l1=[]
n=int(input("Enter no. of natural numbers to be inputted : "))
for i in range(1,n+1):
    l1.append(i)
print(f"Average of {n} natural numbers is {average(l1)}")
# Enter no. of natural numbers to be inputted : 10
# Average of 10 natural numbers is 5.5