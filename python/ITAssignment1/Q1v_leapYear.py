# Display leap years within 1900 to 2012 and show the checking of leap yr.
def isLeapYear(yr):
    if yr%100==0:
        if yr%400==0: return True
        else: return False
    else:
        if yr%4==0: return True
        else: return False

for i in range(1900,2013):
    if isLeapYear(i): print(i,end=",")
