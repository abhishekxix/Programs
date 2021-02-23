-- INNER JOIN
Select order_id, first_name, last_name, c.customer_id
FROM orders o
INNER JOIN customers c 
    ON o.customer_id = c.customer_id;
    
SELECT order_id, p.product_id, quantity, oi.unit_price 
FROM order_items oi
INNER JOIN products p
    ON oi.product_id = p.product_id;

-- Joining across databases
SELECT *
FROM order_items oi
INNER JOIN sql_inventory.products p 
    ON oi.product_id = p.product_id;
    
-- SELF JOIN
USE sql_hr;
SELECT 
    e.employee_id,
    e.first_name,
    m.first_name AS manager
FROM employees e
INNER JOIN employees m
    ON e.reports_to = m.employee_id;
    
-- joining multiple tables together

USE sql_store;

SELECT 
    o.order_id,
    o.order_date,
    c.first_name,
    c.last_name,
    os.name AS status
FROM
    orders o
        INNER JOIN
    customers c ON o.customer_id = c.customer_id
        INNER JOIN
    order_statuses os ON o.status = os.order_status_id;
    
-- exercise
USE sql_invoicing;

SELECT 
    c.name,
    c.state,
    p.date,
    p.amount,
    pm.name AS payment_method
FROM
    payments p
        INNER JOIN
    clients c ON p.client_id = c.client_id
        INNER JOIN
    payment_methods pm ON p.payment_method = pm.payment_method_id;
    
-- compound join conditions
USE sql_store;

SELECT 
    *
FROM
    order_items oi
        INNER JOIN
    order_item_notes oin 
    ON oi.order_Id = oin.order_Id
        AND oi.product_id = oin.product_id;

-- implicit join syntax
-- not recommended
SELECT 
    *
FROM
    orders o,
    customers c
WHERE
    o.customer_id = c.customer_id;
    

/* 
Outer joins
 */
 
-- this is an inner join. does not return the customers
-- who don't have an order placed in the system.
-- But if we want to see all the customers, then we have
-- to use outer joins   
SELECT 
    c.customer_id, 
    c.first_name, 
    o.order_id
FROM
    customers c
        INNER JOIN
    orders o ON c.customer_id = o.customer_id
ORDER BY c.customer_id;

-- left outer join
-- all the records from the left table are returned 
-- regardless of whether they satisfy a condition or not. 
-- in other words, it means that all the records from
-- the left table are to be returned
SELECT 
    c.customer_id,
    c.first_name, 
    o.order_id
FROM
    customers c
        LEFT OUTER JOIN
    orders o ON c.customer_id = o.customer_id
ORDER BY c.customer_id;

-- right outer join
-- all the records from the right table are returned 
-- regardless of whether they satisfy a condition or not.
-- in other words, it means that all the records from
-- the right table are to be returned  
SELECT 
    c.customer_id,
    c.first_name, 
    o.order_id
FROM
    customers c
        RIGHT OUTER JOIN
    orders o ON c.customer_id = o.customer_id
ORDER BY c.customer_id;

-- exercise
SELECT 
    p.product_id,
    p.name,
    oi.quantity
FROM
    products p
        LEFT OUTER JOIN
    order_items oi ON p.product_id = oi.product_id;
    
-- Outer joins on multiple tables
SELECT 
    c.customer_id, 
    c.first_name,
    o.order_id,
    sh.name
FROM
    customers c
        LEFT OUTER JOIN
    orders o ON c.customer_id = o.customer_id
        LEFT OUTER JOIN
    shippers sh ON o.shipper_id = sh.shipper_id
ORDER BY c.customer_id;

-- exercise
select 
    o.order_id,
    o.order_date,
    c.first_name as customer_name,
    sh.name as shipper,
    os.name as status
from orders o
inner join customers c
    on o.customer_id = c.customer_id
left outer join shippers sh
    on o.shipper_id = sh.shipper_id
inner join order_statuses os
    on o.status = os.order_status_id;
    
-- self outer join
use sql_hr;

SELECT 
    e.employee_id,
    e.first_name,
    m.first_name AS manager
FROM
    employees e
        LEFT OUTER JOIN
    employees m ON e.reports_to = m.employee_id;
    

-- USING clause
SELECT 
    c.customer_id, 
    c.first_name, 
    o.order_id
FROM
    customers c
        LEFT OUTER JOIN
    orders o 
    -- ON c.customer_id = o.customer_id
    USING (customer_id)
ORDER BY c.customer_id; 

-- natural join
-- not recommended but easy to code
-- automatically joins using common columns
SELECT 
    o.order_id, 
    c.first_name
FROM
    orders o
        NATURAL JOIN
    customers c;
    
-- cross join
    -- similar to cross product
    -- makes every possible combination
    -- explicit syntax of cross join.
SELECT 
    c.first_name AS customer,
    p.name AS product
FROM
    customers c
        CROSS JOIN
    products p
ORDER BY customer;

-- UNIONS 
    -- joins combine columns from multiple tables.
    -- unions combine rows from multiple queries. 
SELECT 
    order_id, order_date, 'Active' AS status
FROM
    orders
WHERE
    order_date >= '2019-01-01' 
UNION SELECT 
    order_id, order_date, 'Archived' AS status
FROM
    orders
WHERE
    order_date < '2019-01-01';
    
    
-- ===============================
SELECT 
    first_name
FROM
    customers 
UNION SELECT 
    name
FROM
    shippers;