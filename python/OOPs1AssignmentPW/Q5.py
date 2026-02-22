# 5.Write a code for Restaurant Management System Using OOPS
# * Create a MenuItem class that has attributes such as name, description, price, and category
# * Implement methods to add a new menu item, update menu item information, and remove a menu item from the menu
# * Use encapsulation to hide the menu item's unique identification number
# * Inherit from the MenuItem class to create a FoodItem class and a BeverageItem class, each with their own
#   specific attributes and methods.
class MenuItem:
    def __init__(self,name,description,price,category,id):
        self.__name=name
        self.__description=description
        self.__price=price
        self.__category=category
        self.__id=id

    def getName(self):
        return self.__name
    def getDescription(self):
        return self.__description
    def getPrice(self):
        return self.__price
    def getCategory(self):
        return self.__category
    def getId(self):
        return self.__id
    
    def setName(self,new_name):
        self.__name=new_name
    def setDescription(self,new_des):
        self.__name=new_des
    def setPrice(self,new_price):
        self.__name=new_price
    def setCategory(self,new_cat):
        self.__name=new_cat
    def setId(self,new_id):
        self.__name=new_id
    
class FoodItem(MenuItem):
    def __init__(self,name,description,price,category,id,fried):
        super().__init__(name,description,price,category,id)
        self.__fried=fried

    def getFried(self):
        return self.__fried
    
    def setFried(self,new_fried):
        self.__fried=new_fried

class BeverageItem(MenuItem):
    def __init__(self,name,description,price,category,id,volume):
        super().__init__(name,description,price,category,id)
        self.__volume=volume

    def getVolume(self):
        return self.__volume
    
    def setVolume(self,new_vol):
        self.__volume=new_vol

def main():
    food = FoodItem('Briyani','mixed rice dish',100,'Spiced',23,'Deep')
    beverage = BeverageItem('Lasi','has good quality dahi',45,'Beverage',67,100)

    print('Food : ')
    print(f'Name : {food.getName()}')
    print(f'Description : {food.getDescription()}')
    print(f'Price : ₹{food.getPrice()}')
    print(f'Category : {food.getCategory()}')
    print(f'ID : {food.getId()}')
    print(f'Fried : {food.getFried()}')

    print('Beverage : ')
    print(f'Name : {beverage.getName()}')
    print(f'Description : {beverage.getDescription()}')
    print(f'Price : ₹{beverage.getPrice()}')
    print(f'Category : {beverage.getCategory()}')
    print(f'ID : {beverage.getId()}')
    print(f'Volume : {beverage.getVolume()} mL')

if __name__ == '__main__' :
    main()
