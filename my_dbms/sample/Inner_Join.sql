mysql> CREATE TABLE products (
    ->   id INT NOT NULL AUTO_INCREMENT,
    ->   product_name VARCHAR(255) NOT NULL,
    ->   PRIMARY KEY (id)
    -> );
Query OK, 0 rows affected (0.02 sec)

mysql> 
mysql> CREATE TABLE categories (
    ->   id INT NOT NULL AUTO_INCREMENT,
    ->   category_name VARCHAR(255) NOT NULL,
    ->   PRIMARY KEY (id)
    -> );
Query OK, 0 rows affected (0.02 sec)

mysql> show tables;
+--------------------+
| Tables_in_cdac_raj |
+--------------------+
| categories         |
| dept               |
| emp                |
| products           |
+--------------------+
4 rows in set (0.00 sec)

mysql> select * from products;
Empty set (0.01 sec)

mysql> INSERT INTO products (product_name) VALUES
    ->   ('iPhone 13'),
    ->   ('Galaxy S22'),
    ->   ('Pixel 6 Pro');
Query OK, 3 rows affected (0.00 sec)
Records: 3  Duplicates: 0  Warnings: 0

mysql> 
mysql> INSERT INTO categories (category_name) VALUES
    ->   ('Smartphones'),
    ->   ('Laptops'),
    ->   ('Tablets');
Query OK, 3 rows affected (0.00 sec)
Records: 3  Duplicates: 0  Warnings: 0

mysql> select * from categories;
+----+---------------+
| id | category_name |
+----+---------------+
|  1 | Smartphones   |
|  2 | Laptops       |
|  3 | Tablets       |
+----+---------------+
3 rows in set (0.00 sec)

mysql> select * from products;
+----+--------------+
| id | product_name |
+----+--------------+
|  1 | iPhone 13    |
|  2 | Galaxy S22   |
|  3 | Pixel 6 Pro  |
+----+--------------+
3 rows in set (0.00 sec)

mysql> SELECT categories.id, categories.category_name, products.product_name FROM categories RIGHT JOIN products ON categories.id = products.id;
+------+---------------+--------------+
| id   | category_name | product_name |
+------+---------------+--------------+
|    1 | Smartphones   | iPhone 13    |
|    2 | Laptops       | Galaxy S22   |
|    3 | Tablets       | Pixel 6 Pro  |
+------+---------------+--------------+
3 rows in set (0.00 sec)

mysql> insert into products values (4, "Hehe");
Query OK, 1 row affected (0.01 sec)

mysql> SELECT categories.id, categories.category_name, products.product_name FROM categories RIGHT JOIN products ON categories.id = products.id;
+------+---------------+--------------+
| id   | category_name | product_name |
+------+---------------+--------------+
|    1 | Smartphones   | iPhone 13    |
|    2 | Laptops       | Galaxy S22   |
|    3 | Tablets       | Pixel 6 Pro  |
| NULL | NULL          | Hehe         |
+------+---------------+--------------+
4 rows in set (0.00 sec)

mysql> select * from products;
+----+--------------+
| id | product_name |
+----+--------------+
|  1 | iPhone 13    |
|  2 | Galaxy S22   |
|  3 | Pixel 6 Pro  |
|  4 | Hehe         |
+----+--------------+
4 rows in set (0.00 sec)

mysql> select * from categories;
+----+---------------+
| id | category_name |
+----+---------------+
|  1 | Smartphones   |
|  2 | Laptops       |
|  3 | Tablets       |
+----+---------------+
3 rows in set (0.00 sec)

mysql> SELECT * FROM categories RIGHT JOIN products ON categories.id = products.id;
+------+---------------+----+--------------+
| id   | category_name | id | product_name |
+------+---------------+----+--------------+
|    1 | Smartphones   |  1 | iPhone 13    |
|    2 | Laptops       |  2 | Galaxy S22   |
|    3 | Tablets       |  3 | Pixel 6 Pro  |
| NULL | NULL          |  4 | Hehe         |
+------+---------------+----+--------------+
4 rows in set (0.00 sec)

mysql> insert into categories values (5, "Hehe");
Query OK, 1 row affected (0.01 sec)

mysql> SELECT * FROM categories RIGHT JOIN products ON categories.id = products.id;
+------+---------------+----+--------------+
| id   | category_name | id | product_name |
+------+---------------+----+--------------+
|    1 | Smartphones   |  1 | iPhone 13    |
|    2 | Laptops       |  2 | Galaxy S22   |
|    3 | Tablets       |  3 | Pixel 6 Pro  |
| NULL | NULL          |  4 | Hehe         |
+------+---------------+----+--------------+
4 rows in set (0.00 sec)

mysql> SELECT * FROM products RIGHT JOIN categories ON categories.id = products.id;
+------+--------------+----+---------------+
| id   | product_name | id | category_name |
+------+--------------+----+---------------+
|    1 | iPhone 13    |  1 | Smartphones   |
|    2 | Galaxy S22   |  2 | Laptops       |
|    3 | Pixel 6 Pro  |  3 | Tablets       |
| NULL | NULL         |  5 | Hehe          |
+------+--------------+----+---------------+
4 rows in set (0.00 sec)

mysql> SELECT * FROM products JOIN categories ON categories.id = products.id;
+----+--------------+----+---------------+
| id | product_name | id | category_name |
+----+--------------+----+---------------+
|  1 | iPhone 13    |  1 | Smartphones   |
|  2 | Galaxy S22   |  2 | Laptops       |
|  3 | Pixel 6 Pro  |  3 | Tablets       |
+----+--------------+----+---------------+
3 rows in set (0.00 sec)

mysql> SELECT * FROM products JOIN categories;
+----+--------------+----+---------------+
| id | product_name | id | category_name |
+----+--------------+----+---------------+
|  4 | Hehe         |  1 | Smartphones   |
|  3 | Pixel 6 Pro  |  1 | Smartphones   |
|  2 | Galaxy S22   |  1 | Smartphones   |
|  1 | iPhone 13    |  1 | Smartphones   |
|  4 | Hehe         |  2 | Laptops       |
|  3 | Pixel 6 Pro  |  2 | Laptops       |
|  2 | Galaxy S22   |  2 | Laptops       |
|  1 | iPhone 13    |  2 | Laptops       |
|  4 | Hehe         |  3 | Tablets       |
|  3 | Pixel 6 Pro  |  3 | Tablets       |
|  2 | Galaxy S22   |  3 | Tablets       |
|  1 | iPhone 13    |  3 | Tablets       |
|  4 | Hehe         |  5 | Hehe          |
|  3 | Pixel 6 Pro  |  5 | Hehe          |
|  2 | Galaxy S22   |  5 | Hehe          |
|  1 | iPhone 13    |  5 | Hehe          |
+----+--------------+----+---------------+
16 rows in set (0.00 sec)

mysql> SELECT * FROM products RIGHT JOIN categories;
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near '' at line 1
mysql> SELECT * FROM products LEFT JOIN categories;
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near '' at line 1
mysql> 