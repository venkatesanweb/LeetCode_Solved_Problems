# Write your MySQL query statement below
SELECT a.name,sum(b.amount) as balance 
FROM users as a join transactions as b on a.account=b.account group by b.account having sum(b.amount)>10000;
