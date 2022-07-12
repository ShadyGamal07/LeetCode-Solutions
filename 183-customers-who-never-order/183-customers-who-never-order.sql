/* Write your T-SQL query statement below */

SELECT Name as Customers 
FROM Customers
WHERE id not in
(
    SELECT customerId 
    FROM Orders  
)