echo "Enter an integer:"
read input

factorial=1

while [ $input -gt 1 ]
do
  factorial=$((factorial * input))  
  input=$((input - 1))      
done

echo $factorial