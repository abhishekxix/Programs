-- Part A:Create the following relational schema:

-- Employee(empID, empName Sex, Salary,empDept)

-- Customer(custID,custname,salesRepID,rating)



--  Where salesRepId is a foreign key referring to empId of the employee relation. And lets rating be in (‘Good’, ‘Satisfactory’,’Excellent’,’Poor’)

-- PART-B. Insert at least 8-10 Records in both tables employee and customer.

-- PART-C.  Assume that each employee makes a sale to at least one customer. What does the following query return?

--                1 How many customers got male sales representative.

--                 2. Names of all the employees with atleast one of their customers having a rating other than ‘Excellent’.

--        3. The average salary of female employees , those who have salary than the minimum salary of male employees company.

CREATE DATABASE vikas;
USE vikas;

CREATE TABLE Employee (
    empId VARCHAR(20) PRIMARY KEY,
    empName VARCHAR(50) NOT NULL,
    sex CHAR(1) NOT NULL,
    salary DOUBLE,
    empDept VARCHAR(30)
);

INSERT INTO Employee
VALUES (
    '1', 
    'vikas',
    'M',
    43782,
    'datamanager' 
);

INSERT INTO Employee
 VALUES (
    '2',
    'Abhishek',
    'M',
    46781,
    'datamanager' 
);

INSERT INTO Employee
 VALUES (
    '3',
    'Neeraj',
    'M', 
    73782, 
    'manager' 
);

INSERT INTO Employee
 VALUES (
    '4',
    'Roopali',
    'F',
    100000, 
    'manager'
);

INSERT INTO Employee
 VALUES (
    '5',
    'Sachin',
    'M',
    100000,
    'HR' 
);

INSERT INTO Employee
 VALUES (
    '6', 
    'Poonam',
    'F',
    78000,
    'CEO' 
);

INSERT INTO Employee
 VALUES (
    '7',
    'Akash', 
    'M',
    100000,
    'Anlyast' 
);

INSERT INTO Employee
 VALUES (
    '8', 
    'Rahul',
    'M',
    100000, 
    'datamanager' 
);


CREATE TABLE Customer (
    custId VARCHAR(20) PRIMARY KEY,
    custName VARCHAR(50) NOT NULL,
    salesRepId VARCHAR(20) REFERENCES Employees(empId) ON DELETE CASCADE,
    rating DOUBLE CHECK(rating >= 0 AND rating <= 5)
);

INSERT INTO Customer
VALUES('12', 'Tiger' , '1' ,5);
INSERT INTO Customer
VALUES('13', 'Puma' , '2' ,4);
INSERT INTO Customer
VALUES('14', 'Prabh' , '2' ,3);
INSERT INTO Customer
VALUES('15', 'Aniket' , '3' ,3);
INSERT INTO Customer
VALUES('16', 'Daksh' , '8' ,4);
INSERT INTO Customer
VALUES('17', 'Iktaaj' , '6' ,5);
INSERT INTO Customer
VALUES('18', 'Hitesh' , '6' ,2);
INSERT INTO Customer
VALUES('19', 'Mitesh' , '2' ,1);
INSERT INTO Customer
VALUES('20', 'Suresh' , '1' ,4);

SELECT count(custId) AS 'Customers with male sales rep'
FROM Customer c
WHERE salesRepId = (
    SELECT empId
    FROM Employee e
    WHERE 
        c.salesRepId = e.empId
        AND
        e.sex = 'M'
);

SELECT DISTINCT empName AS 'Employees with atleast one Excellent rating'
FROM Employee e
WHERE empId = (
    SELECT salesRepId
    FROM  Customer c
    WHERE rating < 5 AND
        e.empId = c.salesRepId
);

SELECT avg(salary) AS 'Female avg salary'
FROM Employee
WHERE 
    sex LIKE 'F' 
        AND
    salary >= (
        SELECT min(salary)
        FROM Employee
        WHERE sex = 'M'
    );
