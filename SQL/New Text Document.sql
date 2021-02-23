create table student (
    rno number(10),
    name varchar2(20),
    address varchar2(50),
    pno number(10),
    marks number(10)
);

insert into student values(
    1,
    'Edward',
    'USA',
    1234,
    69
);

insert into student values(
    2,
    'Light',
    'Tokyo',
    1214,
    87
);

insert into student values(
    3,
    'Shaktimaan',
    'India',
    6969,
    98
);

insert into student values(
    4,
    'Kakashi',
    'Leaf village',
    09087,
    59
);

insert into student values(
    5,
    'Marshal Mathers',
    'USA',
    9997,
    89
);


select *
from student;

select 
    rno,
    name,
    address,
    marks+500
from student;

select 
    rno,
    name,
    address,
    marks-50
from student;

select 
    rno,
    name,
    address,
    marks * 8
from student;

select 
    rno,
    name,
    address,
    marks / 2
from student;

select 
    rno,
    name,
    address,
    marks + 500 - 100 * 1
from student;

select 
    rno+2,
    name,
    address,
    marks+400
from student;

select 
    max (marks) "MAXIMUM MARKS" 
from student;

select 
    min (marks) "MINIMUM MARKS" 
from student;

select 
    avg (marks) "AVERAGE MARKS" 
from student;

select 
    sum(marks) "TOTAL MARKS" 
from student;

select 
    count (address) "NO OF RECORDS IN ADDRESS" 
from student;

select 
    name,
    sum (marks) 
from student 
    group by name 
    having sum(marks) > 150;
    
select 
    address,
    count(*) " NO OF ADDRESS"  
from student 
    group by address;
    
select 
    distinct (address) as distinct_address 
from student;

select 
    approx_count_distinct (name) as distinct_name 
from student ;

select 
    approx_count_distinct (name) as distinct_name 
from student 
    group by name ;
    
select 
    rno,
    name 
from student 
    order by address desc;

