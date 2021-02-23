from pathlib import Path
#Absolute path starting from  root
#Relative path starting form the current  directory
path = Path("ecommerce")
print(path.exists())
path = Path("emails")
 #mkdir to make a directory
del path
path = Path()
for file in path.glob('*') :
    print(file)