# Write your MySQL query statement below

SELECT e.employee_id  from Employees  as e Left Join Salaries  as b on e.employee_id =b.employee_id  where b.salary is null

UNION 

SELECT b.employee_id  from Salaries  as b left Join Employees as e on b.employee_id =e.employee_id  where e.name is null

ORDER BY employee_id ;
