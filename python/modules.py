#Module in python is basically a file with some python code which is somehow related
import converter
from converter import kg_to_lbs
print(converter.kg_to_lbs(57))
print(kg_to_lbs(57))

#exercise
import utils
list = [10, 59, 68, 72, 84]
maximum = utils.find_max(list)
print(max(list))