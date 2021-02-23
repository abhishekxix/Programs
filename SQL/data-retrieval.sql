-- This is a comment in sql
-- SQL is case insensitive.

USE sql_store;

SELECT * 
FROM customers;

SELECT * 
FROM customers
WHERE customer_id = 1
ORDER BY customer_id DESC;

SELECT 1, 2;

-- The order of column is the same as specified in the
-- SELECT clause.
-- The AS keyword is used to give an alias.
SELECT 
    first_name,
    last_name,
    state,
    points,
    ((points * 10) + 100) AS 'Discount Factor'
FROM customers;

SELECT DISTINCT state 
FROM customers;

SELECT 
    name, 
    unit_price,
    unit_price * 1.1 AS new_price
FROM products;

SELECT *
FROM customers
WHERE points > 3000;

-- Not case sensitive
SELECT *
FROM customers
WHERE state != 'VA';

SELECT *
FROM orders
WHERE order_date >= '2019-01-01';

SELECT *
FROM customers
WHERE birth_date >= '1990-01-01' OR points > 1000;

SELECT *
FROM order_items
WHERE order_id = 6 AND unit_price * quantity > 30;

-- IN operator
SELECT *
FROM customers
WHERE state NOT IN ('VA', 'GA', 'FL');

SELECT *
FROM products
WHERE quantity_in_stock IN (49, 38, 72);

-- BETWEEN operator.
-- ranges are inclusive.
SELECT *
FROM customers
WHERE points BETWEEN 1000 AND 3000;

SELECT *
FROM customers
WHERE birth_date BETWEEN '1990-01-01' AND '2000-01-01';

-- The like operator.
-- _ -> 1 character
-- % -> any number of characters
SELECT *
FROM customers
WHERE last_name LIKE '%y';

SELECT * 
FROM customers
WHERE 
    (address LIKE '%trail%' OR
        address LIKE '%avenue%') 
    OR
    phone LIKE '%9';
    
-- REGEXP operator.
-- ^ beginning of a string.
-- $ end of a string.
-- to combine multiple patterns, use the pipe | operator
-- [] set of single characters that replace a single character 
    -- [a-h] range between a and h 
    -- [gim] any one of the given characters.

SELECT *
FROM customers
WHERE last_name REGEXP 'field$|mac|rose';

SELECT *
FROM customers
WHERE last_name REGEXP '[gim]e';

SELECT *
FROM customers
WHERE last_name REGEXP '[a-h]e';

-- The IS NULL operator
SELECT *  
FROM customers
WHERE phone IS NULL;

SELECT *  
FROM customers
WHERE phone IS NOT NULL;

-- ORDER BY clause
    -- We can use an alias in ORDER BY
SELECT *  
FROM customers
ORDER BY points DESC, first_name ASC;

SELECT * 
FROM order_items
WHERE order_id = 2
ORDER BY unit_price * quantity DESC;

SELECT * 
FROM order_items
ORDER BY order_id DESC, quantity DESC;

-- the LIMIT clause

SELECT * 
FROM customers
LIMIT 6, 3;