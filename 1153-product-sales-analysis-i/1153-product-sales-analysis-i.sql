/* Write your T-SQL query statement below */
Select p.product_name,s.year,s.price
From product p
inner join sales s
on s.product_id=p.product_id
