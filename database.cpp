SELECT DISTINCT Syntax
    SELECT DISTINCT column1,
    column2, ... FROM table_name;

SELECT DISTINCT Country FROM Customers;
The WHERE clause is used to filter records.

    It is used to extract only those records that fulfill a specified condition.

    SELECT column1,
    column2, ... FROM table_name WHERE condition;

SELECT *FROM Customers
    WHERE Country = 'Mexico';

SELECT *FROM Customers
    WHERE CustomerID = 1;

The WHERE clause can be combined with AND, OR, and NOT operators.

                                                   The AND and OR operators are used to filter records based on more than one condition :

    The AND
    operator displays a record if all the conditions separated by AND are TRUE.The OR
    operator displays a record if any of the conditions separated by OR is TRUE.The NOT
    operator displays a record if the
    condition(s)
is NOT TRUE.

    SELECT column1,
    column2, ... FROM table_name WHERE condition1 AND condition2 AND condition3...;

SELECT column1, column2, ... FROM table_name WHERE condition1 OR condition2 OR condition3...;

SELECT column1, column2, ... FROM table_name WHERE NOT condition;

SELECT *FROM Customers
    WHERE Country = 'Germany' AND City = 'Berlin';

SELECT *FROM Customers
    WHERE City = 'Berlin' OR City = 'M�nchen';

SELECT *FROM Customers
    WHERE Country = 'Germany' OR Country = 'Spain';

SELECT *FROM Customers
    WHERE NOT Country = 'Germany';

SELECT *FROM Customers
    WHERE Country = 'Germany' AND(City = 'Berlin' OR City = 'M�nchen');

SELECT *FROM Customers
    WHERE NOT Country = 'Germany' AND NOT Country = 'USA';

The ORDER BY keyword is used to sort the result - set in ascending or descending order.

                                                                      The ORDER BY keyword sorts the records in ascending order by default.To sort the records in descending order,
    use the DESC keyword.SELECT column1, column2, ... FROM table_name ORDER BY column1, column2, ... ASC | DESC;

SELECT *FROM Customers
    ORDER BY Country;
SELECT *FROM Customers
    ORDER BY Country DESC;

SELECT *FROM Customers
    ORDER BY Country,
    CustomerName;

SELECT *FROM Customers
    ORDER BY Country ASC,
    CustomerName DESC;
DESC table_name

    he IN
    operator allows you to specify multiple values in a WHERE clause.

    The IN
    operator is a shorthand for multiple OR conditions.

    SELECT
    column_name(s)
FROM table_name
    WHERE column_name
    IN(value1, value2, ...);

SELECT *FROM Customers
    WHERE Country IN('Germany', 'France', 'UK');
SELECT *FROM Customers
    WHERE Country NOT IN('Germany', 'France', 'UK');

SQL BETWEEN CLAUSE
    SELECT column1,
    column2.column table_name WHERE column_name
            FROM BETWEEN val -
        1 AND val - 2 he BETWEEN operator selects values within a given range.The values can be numbers,
    text, or dates.

              The BETWEEN
              operator is inclusive : begin and end values are included.

                                      SELECT
                                      column_name(s)
FROM table_name
    WHERE column_name BETWEEN value1 AND value2;

SELECT *FROM Products
    WHERE Price BETWEEN 10 AND 20;
To display the products outside the range of the previous example, use NOT BETWEEN :

    SELECT *FROM Products
        WHERE Price NOT BETWEEN 10 AND 20;

The SQL MIN() and MAX() Functions
                  The MIN() function returns the smallest value of the selected column.

                  The MAX() function returns the largest value of the selected column.

                  MIN() Syntax
                  SELECT MIN(column_name)
FROM table_name
    WHERE condition;
MAX()
Syntax
    SELECT
    MAX(column_name)
FROM table_name
    WHERE condition;

SELECT MIN(Price)
AS SmallestPrice
    FROM Products;

SELECT MAX(Price)
AS LargestPrice
    FROM Products;

SELECT MAX(Price)
AS LargestPrice
    FROM Products;

The following SQL statement finds the number of products :

    SELECT
    COUNT(ProductID)
FROM Products;
Note : NULL values are not counted.

       AVG() Example
           The following SQL statement finds the average price of all products :

    SELECT
    AVG(Price)
FROM Products;

SELECT SUM(Quantity)
FROM OrderDetails;
