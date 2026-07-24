# Write your MySQL query statement below
select Signups.user_id,ROUND(
        IFNULL(SUM(c.action = 'confirmed') / COUNT(c.action), 0),
        2
    ) AS confirmation_rate
from Signups 
left join Confirmations c
on Signups.user_id= c.user_id
group by user_id;