# Write your MySQL query statement below

SELECT max(num) as num
 from mynumbers where
 num in 
(
    SELECT * FROM
    mynumbers group by
    num having
    count(num)=1
); 
