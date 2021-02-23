CREATE DATABASE university;
USE university;

CREATE TABLE course (
    id VARCHAR(6) PRIMARY KEY,
    course_name VARCHAR(50),
    credits INT CHECK(credits < 5),
    duration_months INT CHECK(duration_months < 4)
);

CREATE TABLE student (
    name_first VARCHAR(30),
    name_last VARCHAR(30),
    roll_no INT PRIMARY KEY, 
    address VARCHAR(100),
    phone_number VARCHAR(12),
    email_id VARCHAR(50),
    dob DATE,
    course VARCHAR(6) REFERENCES courses(id)
);

CREATE TABLE teacher (
    name_first VARCHAR(30),
    name_last VARCHAR(30),
    id VARCHAR(4) PRIMARY KEY,
    course VARCHAR(6)  REFERENCES courses(id),
    department_no VARCHAR(3),
    address VARCHAR(100),
    salary INT,
    phone_number VARCHAR(12),
    email_id VARCHAR(50),
    dob DATE,
    joining_date DATE
);

INSERT INTO course VALUES (
    'CST001',
    'Prugremming',
    3,
    3
);

INSERT INTO course VALUES (
    'CST002',
    'Suftwere Ingenering',
    2,
    3
);

INSERT INTO course VALUES (
    'CST003',
    'Nitwurkeng',
    1,
    3
);


INSERT INTO course VALUES (
    'CST004',
    'Uperating sestim',
    4,
    3
);

SELECT *
FROM course;

INSERT INTO course VALUES (
    'CST005',
    'Elgurethms',
    1,
    3
);

INSERT INTO course VALUES (
    'CST006',
    'Dutu strectors',
    4,
    2
);

UPDATE course 
SET credits = 1
WHERE course_name = 'Prugremming';

SELECT *
FROM course;

DROP TABLE course;

