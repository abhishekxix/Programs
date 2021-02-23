CREATE DATABASE final_practical;
USE final_practical;

-- creation of the table
CREATE TABLE company (
    Eno INT,
    Name VARCHAR(50),
    City VARCHAR(50),
    telephone VARCHAR(15),
    salary DOUBLE,
    PRIMARY KEY(Eno, Name)
);

-- Insertion of 5 records
INSERT INTO company 
VALUES (
    1, 
    'Rob',
    'LA',
    '+1-541-754-3010',
    100000.34
);

INSERT INTO company 
VALUES (
    2, 
    'Wang',
    'Chicago',
    '+1-541-567-7090',
    150000
);

INSERT INTO company 
VALUES (
    3, 
    'Lee',
    'NY',
    '+1-234-754-4530',
    1930000.68
);

INSERT INTO company 
VALUES (
    4, 
    'Marco',
    'San Francisco',
    '+1-396-896-3281',
    1870000
);

INSERT INTO company 
VALUES (
    5, 
    'Annie',
    'LA',
    '+1-345-723-7895',
    100000.34
);

SELECT *
FROM company;


-- Arithmetic operations
    -- Multiplication
SELECT 
    Eno,
    Name, 
    city,
    telephone,
    salary,
    salary * 2 AS doubled_salary
FROM company;

    -- Division
SELECT 
    Eno,
    Name, 
    city,
    telephone,
    salary,
    salary * 0.5 AS halved_salary
FROM company;

-- Sorting data using ORDER BY
SELECT *
FROM company
ORDER BY Eno;

-- add date_of_birth column.
ALTER TABLE company
ADD date_of_birth DATE;