USE sql_store;

SELECT * 
FROM customers
-- WHERE customer_id = 1 this is a comment
ORDER BY points DESC; -- to sort in descending order use DESC
-- ORDER BY sorts in ascending order implicitly. to do the same explicitly, type ASC
-- linebreaks, spaces and indentations are ignored 

SELECT first_name, last_name -- the order in which we write the attributes to be displayed is the 
-- order in which they are displayed. Here first_name comes before last_name
FROM customers
WHERE points > 100
ORDER BY points DESC;
-- The order of the sql clauses is important

SELECT 
	first_name, 
	last_name,
    points,
    (points * 10) + 100 AS 'discount factor'	-- the classical PEMDAS or BODMAS is used for precedence
-- we can also enclose arithmetic expressions in parentheses to give the desired precedence
FROM customers
WHERE points > 100
ORDER BY points DESC;
-- the as clause is used to give an alias
-- if we want to have a space in the name of an attribute, we have to enclose it in quotes,
-- single or double quotes are the same in this case
SELECT  DISTINCT state -- used to fetch unique entries 
FROM customers;

SELECT 
	name AS 'Name',
    unit_price AS 'Unit price', 
    unit_price * 1.1 AS 'New Price'
FROM products;

SELECT *
From customers
WHERE points > 3000;

-- operators
-- >
-- >=
-- <
-- <= 
-- =
-- != and <> are the same
-- Strings are enclosed in single quotes by convention. But double quotes can also be used
-- Strings are also not  orderscase sensitive
 SELECT * 
 FROM customers
 WHERE state <> 'VA' AND state != 'MA';

-- The WHERE clause is used to apply filters to the selections

SELECT * 
FROM customers
WHERE birth_date > '1990-01-01';
-- This is the default date format in SQL YYYY-MM--DD
--  Dates are not strings in SQL but they need to be enclosed in single quotes

SELECT *
FROM orders 
WHERE order_date >= '2019-01-01';

SELECT *
FROM customers
WHERE birth_date >= '1990-01-01' OR points > 1000;
-- The NOT operator is used to negate a condition

SELECT * 
FROM order_items
WHERE (order_id = 6 AND (unit_price * quantity > 30));

-- The IN operator
-- It is used to filter out a single attribute using a set of possible values
-- It can be used instead of using multiple OR statements.
-- The order of the possible values does not matter
SELECT *
FROM customers
WHERE state IN ('VA', 'FL', 'GA');

SELECT *
FROM customers
WHERE state NOT IN ('VA', 'FL', 'GA');

SELECT * 
FROM products 
WHERE quantity_in_stock IN (49, 38, 72);

-- The BETWEEN operator
-- This operator is used to compare an attribute against a range of values

SELECT *
FROM customers
WHERE points BETWEEN 1000 AND 3000;
-- The ranges are inclusive 

SELECT * 
FROM customers
WHERE birth_date BETWEEN '1990-01-01' AND '2000-01-01';

-- The LIKE operator
-- this operator is used to filter the string attributes matching a 
-- given pattern

SELECT *
FROM customers
WHERE last_name LIKE 'b%';
-- the % indicates any number of characters
SELECT *
FROM customers
WHERE last_name LIKE '%b%';
-- This pattern means that the last_name can have any number of characters
-- before and after b
-- % substitutes any number of characters
-- _ substitutes a single character
SELECT *
FROM customers
WHERE last_name LIKE 'b____y';

SELECT * 
FROM customers
WHERE (address LIKE '%TRAIL%' OR 
	   address LIKE '%AVENUE%')
	  OR phone LIKE '%9';

-- REGEXP operator
-- uses Regular expressions for searching the string
SELECT *
FROM customers
WHERE last_name REGEXP 'field';
-- WE don't need to use the % sign with REGEXP operator
-- ^ represents the beginning of a string
-- $ represents the end of a string
-- WE can also search for multiple patterns separated by the | operator (logical OR)
 
SELECT *
FROM customers
WHERE last_name REGEXP '^field|mac|rose';

SELECT *
FROM customers
WHERE last_name REGEXP 'field$|mac|rose';

-- [] represents a set of characters that can substitute a character in
-- the required string
SELECT *
FROM customers
WHERE last_name REGEXP '[gim]e';
-- Here g, i, or m can come before e in the last name
-- we can also supply a range of characters
SELECT *
FROM customers
WHERE last_name REGEXP '[a-h]e';
-- There are many more characters

SELECT * 
FROM customers
WHERE first_name REGEXP 'elka|ambur';

SELECT * 
FROM customers
WHERE last_name REGEXP 'ey$|on$';

SELECT * 
FROM customers
WHERE last_name REGEXP '^my|se';

SELECT * 
FROM customers
WHERE first_name REGEXP 'b[ru]';

-- The IS NULL operator
SELECT *
FROM customers
WHERE phone IS NULL;

SELECT *
FROM customers
WHERE phone IS NOT NULL;

SELECT *
FROM order_statuses
WHERE name != 'Shipped';

SELECT *
FROM orders
WHERE shipped_date IS NULL;

-- ORDER BY operator in SQL
-- It is used to sort data in the required manner
-- data is sorted by primary key by default
-- ASC to sort in ascending order (default)
-- DESC to sort in descending order
-- in mysql, we can sort the data irrespective of whether or not that 
-- attribute is present in the SELECT clause. But some other DBMS don't
-- allow this
-- we can also sort data using an alias
-- we can also sort using column numbers but that should be avoided

SELECT * 
FROM order_items
WHERE order_id = 2
ORDER BY (quantity * unit_price) DESC;

-- The LIMIT clause
-- It limits the number of results returned

SELECT *
FROM customers
LIMIT 3;

-- We can also choose to skip some number of records before choosing the 
-- ones that are requested by providing an offset before the limit
SELECT *
FROM customers
LIMIT 6, 3;
-- Skips first 6 records and then chooses 3 records

SELECT * 
FROM  customers
ORDER BY points DESC
LIMIT 3;
-- The limit clause needs to come at the end of the query