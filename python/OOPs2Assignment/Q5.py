# Design classes representing a House and its various components like Bedroom, LivingRoom, and Kitchen. 
# Implement composition by creating a House object that contains instances of its components
class Bedroom:
    def __init__(self,area_sqft,size):
        self.area_sqft=area_sqft
        self.size=size
    def __str__(self):
        return f"Area : {self.area_sqft} Size : {self.size}"
    
class LivingRoom:
    def __init__(self,area_sqft):
        self.area_sqft=area_sqft
    def __str__(self):
        return f"{self.area_sqft}"
    
class Kitchen:
    def __init__(self,area_sqft,isModular):
        self.area_sqft=area_sqft
        self.isModular=isModular
    def __str__(self):
        return f"{self.area_sqft} {self.isModular}"
    
class House:
    def __init__(self,price,area_sqft_bed,size,area_sqft_living,area_sqft_kitchen,isModular):
        self.price=price
        self.bedroom=Bedroom(area_sqft_bed,size)
        self.livingroom=LivingRoom(area_sqft_living)
        self.kitchen=Kitchen(area_sqft_kitchen,isModular)
    def __str__(self):
        return f"Total Cost : {self.price} \nBedroom Details : {self.bedroom}"
    
def main():
    h=House(5000000,120,4,160,100,True)
    print(h)

if __name__=='__main__':
    main()