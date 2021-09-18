# Write your MySQL query statement below
select e.name as "Employee" from Employee e join Employee
m on e.ManagerId= m.Id AND e.salary >m.salary
