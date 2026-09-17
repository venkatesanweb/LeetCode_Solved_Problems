# Write your MySQL query statement below
SELECT a.product_name , sum(b.unit) as unit FROM
Products as a join Orders as b on a.product_id=b.product_id
where b.order_date LIKE '2020-02-%' 
group by b.product_id having sum(b.unit)>=100;
