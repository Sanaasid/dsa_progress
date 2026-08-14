# Write your MySQL query statement below
select s.score, COUNT(s2.score) as 'rank' 
from Scores s, (select distinct score from scores) s2

where s.score<=s2.score
group by s.id
order by s.score desc;