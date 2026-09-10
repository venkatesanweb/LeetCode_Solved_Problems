# Write your MySQL query statement below
SELECT user_id , max(time_stamp) as last_stamp
 FROM Logins 
 where substring(time_stamp,1 , 4)='2020' 
 group by user_id;
