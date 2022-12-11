class Item:
  def __init__(self, name:str, price:float, quantity=0):
    assert price >= 0, f'Price {price} cannot be 0'
    assert quantity >= 1 , f'quantity {quantity} cannot be negative'
    self.name = name
    self.price = price
    self.quantity = quantity

  def calculate_total_price(self):
    return self.price * self.quantity



item1 = Item("asdf", 5000, -2)

print(item1.calculate_total_price())