# Show some string operations using list manipulation. 
def listToString(li):
    newst=""
    for i in li:
        newst+=i
    return newst
st="Pritam Das"
print(f"Original String : {st}")
# String Reversal
char_list=list(st)
char_list.reverse()
print(f"String after reversal: {listToString(char_list)}")
# Replace & Remove a character at a particular index
char_list=list(st)
char_list.pop(0)
char_list[0]='R'
print(f"String after replace & remove operation : {listToString(char_list)}")
# Insert a character at a particular index
# char_list=list(st)
# char_list.insert(3,'8')
# print(f"String after insert operation : {listToString(char_list)}")
# Original String : Pritam Das
# String after reversal: saD matirP      
# String after replace & remove operation : Ritam Das
# String after insert operation : Pri8tam Das
