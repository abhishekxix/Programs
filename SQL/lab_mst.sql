CREATE DATABASE lib;
USE lib;

-- library branch details

CREATE TABLE library_branch (
	branch_id INT PRIMARY KEY,
    branch_name VARCHAR(30),
    address VARCHAR(100)
);

-- publisher details.
CREATE TABLE publisher (
	pub_name VARCHAR(50) PRIMARY KEY,
    address VARCHAR(100), 
    phone_number VARCHAR(20)
);

-- book table and inserted values.
CREATE TABLE book (
	book_id INT PRIMARY KEY,
    book_title VARCHAR(50),
    publisher_name VARCHAR(50) REFERENCES publisher(pub_name) ON DELETE CASCADE,
    pub_year VARCHAR(10)
);

-- book copies details
CREATE TABLE book_copies(
	book_id INT REFERENCES book(book_id) ON DELETE CASCADE,
    branch_id INT REFERENCES library_branch(branch_id) ON DELETE CASCADE,
    num_copies INT(20),
    PRIMARY KEY(book_id, branch_id)
);

-- book lending details
CREATE TABLE book_lending (
	book_id INT REFERENCES book(book_id) ON DELETE CASCADE,
    branch_id INT REFERENCES library_branch(branch_id) ON DELETE CASCADE,
    card_number VARCHAR(20),
    date_out DATE,
    due_date DATE,
    PRIMARY KEY(book_id, date_out)
);

-- Book authors table and inserted values.
CREATE TABLE book_authors (
	book_id INT REFERENCES book(book_id) ON DELETE CASCADE,
    author_name VARCHAR(50),
    PRIMARY KEY(book_id, author_name)
);

-- books
INSERT INTO book VALUES (
	1,
    'Think Like A Monk',
    'Thorsons',
    '2020'
);

INSERT INTO book VALUES (
	2,
    'Computer Fundamentals',
    'Pearson Education India',
    '2010'
);

INSERT INTO book VALUES (
	3,
    'Database System Concepts',
    ' McGraw Hill Education',
    '2013'
);

INSERT INTO book VALUES (
	4,
    'Object-Oriented Programming with C++',
    'McGraw Hill Education',
    '2017'
);

INSERT INTO book VALUES (
	5,
    'Data Structures and Algorithms Made Easy',
    'Careermonk Publications ',
    '2016'
);

INSERT INTO book VALUES (
	6,
    'Web Design with HTML, CSS, JavaScript and jQuer',
    'Wiley',
    '2014'
);

-- authors

INSERT INTO book_authors VALUES (
	1,
    'Jay Shetty'
);

INSERT INTO book_authors VALUES (
	2,
    'Goel'
);

INSERT INTO book_authors VALUES (
	3,
    'Abraham Silberschatz '
);

INSERT INTO book_authors VALUES (
	4,
    'E Balagurusamy'
);

INSERT INTO book_authors VALUES (
	5,
    'Narasimha Karumanchi'
);

INSERT INTO book_authors VALUES (
	6,
    'Jon Duckett'
);

-- publisher
INSERT INTO publisher VALUES (
	'Thorsons',
    'USA',
    '0123456789'
);

INSERT INTO publisher VALUES (
	'Pearson Education India',
    'India',
    '0987654321'
);

INSERT INTO publisher VALUES (
	' McGraw Hill Education',
    'India',
    '9282646461'
);

INSERT INTO publisher VALUES (
	'Careermonk Publications ',
    'India',
    '12345665432'
);

INSERT INTO publisher VALUES (
	'Wiley',
    'USA',
    '6969696969'
);

-- lib branch
INSERT INTO library_branch VALUES (
	1,
    'ABC',
    'India'
);

-- book copies
INSERT INTO book_copies VALUES (
	1,
    1,
    18900
);

INSERT INTO book_copies VALUES (
	2,
    1,
    69090
);

INSERT INTO book_copies VALUES (
	3,
    1,
    15990
);

INSERT INTO book_copies VALUES (
	4,
    1,
    18900
);

INSERT INTO book_copies VALUES (
	5,
    1,
    238900
);

INSERT INTO book_copies VALUES (
	6,
    1,
    18970
);

-- book lending
INSERT INTO book_lending VALUES (
	1,
    1,
    123, 
    '2020-03-01',
    '2020-03-07'
);

INSERT INTO book_lending VALUES (
	5,
    1,
    69, 
    '2020-09-08',
    '2020-09-16'
);

INSERT INTO book_lending VALUES (
	2,
    1,
    76, 
    '2020-05-15',
    '2020-05-27'
);

INSERT INTO book_lending VALUES (
	3,
    1,
    89, 
    '2020-04-09',
    '2020-04-21'
);

INSERT INTO book_lending VALUES (
	5,
    1,
    92, 
    '2020-04-01',
    '2020-05-07'
);

INSERT INTO book_lending VALUES (
	6,
    1,
    99, 
    '2020-07-01',
    '2020-08-07'
);

INSERT INTO book_lending VALUES (
	6,
    1,
    12, 
    '2017-01-01',
    '2017-03-07'
);

SELECT *
FROM library_branch;

SELECT *
FROM book;

SELECT *
FROM book_authors;

SELECT *
FROM publisher;

SELECT *
FROM book_copies;

SELECT *
FROM book_lending;

SELECT card_number FROM
book_lending
WHERE date_out BETWEEN ‘01-JAN-2017‘ AND ‘01-JUL-2017‘
GROUP BY CARD_NO
HAVING COUNT (*)>3; 

DELETE FROM book
WHERE book_id=3; 

CREATE VIEW V_PUBLICATION AS SELECT
pub_year
FROM book;

CREATE VIEW V_BOOKS AS
SELECT B.book_id, B.book_title, C.num_copies
FROM book B, book_copies C, library_branch L
WHERE B.book_id=C.book_id
AND C.branch_id=L.branch_id; 