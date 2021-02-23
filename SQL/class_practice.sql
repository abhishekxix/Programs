CREATE DATABASE CLASSWORK;
USE CLASSWORK;

CREATE TABLE sample_table (
    person_name VARCHAR(30),
    id_number BIGINT(20),
    phone_number VARCHAR(10)
);

INSERT INTO sample_table VALUES (
    'Abhishek Singh',
    1234567890,
    1020394747
);

INSERT INTO sample_table VALUES (
    'Pablo Escobar',
    1234547890,
    1020399999
);

INSERT INTO sample_table VALUES (
    'Osama Bin Laden',
    1234546890,
    1020645747
);

INSERT INTO sample_table VALUES (
    'Snoop Dogg',
    9983454689,
    2010645747
);


INSERT INTO sample_table VALUES (
    'Joyner Lucas',
    1234539020,
    2374823639
);


INSERT INTO sample_table VALUES (
    'Logic',
    938490212,
    3920948758
);


SELECT *
FROM sample_table 
ORDER BY person_name;

CREATE TABLE new_table (
    name_person VARCHAR(30),
    number_data INT(20)
) 
AS SELECT person_name, id_number
FROM sample_table;

SELECT *
FROM new_table;

INSERT INTO new_table
SELECT person_name, id_number
FROM sample_table 
WHERE person_name = 'Snoop Dogg';

UPDATE sample_table SET id_number = 69
WHERE person_name = 'Abhishek Singh'; 

SELECT *
FROM sample_table 
ORDER BY person_name;

UPDATE sample_table SET id_number = 69;


ALTER TABLE sample_table ADD(kuchh_bhi INT(10));

UPDATE sample_table 
SET kuchh_bhi = NULL;

SELECT *
FROM sample_table;

ALTER TABLE sample_table
MODIFY kuchh_bhi VARCHAR(100);

UPDATE sample_table 
SET kuchh_bhi = 'Kuchh bhi dal diya ismein to';

ALTER TABLE sample_table
RENAME TO bakwass;

ALTER TABLE bakwass
DROP COLUMN person_name;

DROP DATABASE  CLASSWORK;