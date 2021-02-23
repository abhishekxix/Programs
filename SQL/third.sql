-- TO enter a null value in any type of attribute, we need to type in ''

CREATE TABLE student (
    roll_number INT UNIQUE NOT NULL,
    name  VARCHAR(30) PRIMARY KEY,
    class VARCHAR(5)
);

INSERT INTO student VALUES (
    2,
    'John Wick',
    'IOT'
);

INSERT INTO student VALUES (
    3,
    'Tony Stark',
    'IOT'
);

INSERT INTO student VALUES (
    4,
    'Peter Parker',
    'IOT'
);

INSERT INTO student VALUES (
    5,
    'Alan Turing',
    'IOT'
);

INSERT INTO student VALUES (
    6,
    'Ramanujan',
    'IOT'
);

INSERT INTO student VALUES (
    7,
    'Aristotle',
    'IOT'
);


SELECT * 
FROM student;

-- foreign key
CREATE TABLE student2 (
    roll_number INT UNIQUE NOT NULL,
    name  VARCHAR(30) REFERENCES student(name),
    class VARCHAR(5)
);

INSERT INTO student VALUES (
    7,
    'Aristotle',
    'IOT'
);

INSERT INTO student VALUES (
    9,
    'Sodium',
    'IOT'
);

INSERT INTO student VALUES (
    8,
    'Potassium',
    'IOT'
);

-- CREATE TABLE student2 (
--    roll_number INT UNIQUE NOT NULL,
  --  name  VARCHAR(30),
    -- class VARCHAR(5),
    -- FOREIGN KEY(name) REFERENCES student(name)
-- );

SELECT *
FROM student2;

CREATE TABLE employee (
    emp_id INT UNIQUE NOT NULL,
    name  VARCHAR(30),
    age INT CHECK(age > 20)
);


INSERT INTO employee VALUES (
    1,
    'Albert Einstein',
    69
);

INSERT INTO employee VALUES (
    2,
    'Schrodinger',
    23
);

INSERT INTO employee VALUES (
    3,
    'Charles Babbage',
    21
);

SELECT * 
FROM employee;