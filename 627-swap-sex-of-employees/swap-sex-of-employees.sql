# Write your MySQL query statement below
update Salary
set sex= case 
when sex='m' THEN 'f'
else 'm'
end;