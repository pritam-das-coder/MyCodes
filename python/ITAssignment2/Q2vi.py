# Program to Concatenate two lists as index wise. 
list_a=['hi',1,'a',23,7,0.9]
list_b=['me','the',9,80]
res=[]
minLen=min(len(list_a),len(list_b))
maxLen=max(len(list_a),len(list_b))
i=0
while i<minLen:
    res.append(list_a[i])
    res.append(list_b[i])
    i+=1
while i<maxLen:
    res.append(list_a[i] if (maxLen==len(list_a)) else list_b[i])
    i+=1
print(f"Final List : {res}")
# Final List : ['hi', 'me', 1, 'the', 'a', 9, 23, 80, 7, 0.9]