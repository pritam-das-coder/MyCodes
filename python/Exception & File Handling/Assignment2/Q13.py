# Create a Python program that reads a text file named "paragraph.txt" and counts the occurrences of
# each word in the paragraph, displaying the results in alphabetical order.

def count(file_path):
    with open(file_path,"r") as file:
        st=file.read()
        words=st.split()
        word_count={} # word->freq
        for w in words:
            word_count[w]=word_count.get(w,0)+1
        sorted_pair=sorted(word_count.items(),key=lambda x:x[0])
        for w,f in sorted_pair:
            print(f"{w} -> {f}")

    return words
path=r'G:\My Drive\MyCodes\python\Exception & File Handling\Assignment2\paragraph.txt'
count(path)