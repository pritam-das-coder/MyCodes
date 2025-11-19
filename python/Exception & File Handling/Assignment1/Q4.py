# Design a ListConcatenator class in Python that overloads the addition operator '+' to concatenate lists.
# The class should allow users to concatenate lists of any type and provide flexibility in the order of
# concatenation:
class ListConcatenator:
    def __init__(self,li):
        self.li=li
    def __add__(self,O):
        if isinstance(O,ListConcatenator):
            return ListConcatenator(self.li+O.li)
        elif isinstance(O,list):
            return ListConcatenator(self.li+O)
        else:
            raise TypeError("Unsupported type for operand +")
    def __str__(self):
        return str(self.li)
try:
    my_list1=ListConcatenator([1,2])
    my_list2=ListConcatenator(['a',"hello",16])
    my_list3=[4,6.8]
    print(my_list1+my_list2)
    print(my_list2+my_list3)
    print(my_list1+2)
except TypeError as e:
    print(e)