# Create a program that merges two dictionaries. If a key exists in both dictionaries, add their values together in the resulting dictionary.

d1 = {'USA':1,'PRC':3,'Germany':3,'India':4}
d2 = {'India':7,'Israel':12,'Japan':5,'PRC':2}

d = {}
for i in d1.keys():
    if i in d2.keys():
        d[i]=d1[i]+d2[i]
    else:
        d[i]=d1[i]

for i in d2.keys():
    if i not in d.keys():
        d[i]=d2[i]

print(d)