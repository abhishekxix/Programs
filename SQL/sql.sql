CREATE DATABASE testing;
USE testing;

DECLARE 
	line VARCHAR(40);

	BEGIN
		line := 'Hello';
		dbms_output.put_line (line);
END;


DECLARE
	x INT;
	y INT; 
	2 INT;

	BEGIN
		x := 103; 
		y := 28;

		2 := x+y;

		dbms_output.put_line('Sum is '|| 2 );
END;


DECLARE 

	num INT := 6;
	fact INT := 1;
	temp INT;

	BEGIN

		temp := num;

		WHILE(temp > 0)
		LOOP
			fact := fact * temp;
            temp := temp - 1;
		END LOOP
	dbms.output.put_line('Factorial of ' || num || 'is' || fact);
END;
