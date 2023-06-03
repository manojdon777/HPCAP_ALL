# Three ways to connect to MySQL from Python:
# ## 1. Using MySQL Connector/Python
# MySQL Connector/Python is a pure Python implementation of the MySQL Client/Server protocol. You can install it using pip:
# pip install mysql-connector-python
#following code:

import mysql.connector
cnx = mysql.connector.connect(user='root', 	password='admin',
                              host='localhost',
                              database='mysql')
cursor = cnx.cursor()
query = "SELECT * FROM user"
cursor.execute(query)
for row in cursor.fetchall():
    print(row)
cnx.close()


# Replace `<username>`, `<password>`, `<hostname>`, `<database>`, and `<table>` with your actual values.
## 2. Using PyMySQL
# PyMySQL is a Python library that implements the MySQL protocol. You can install it using pip:
# pip install PyMySQL
#following code:

import pymysql
cnx = pymysql.connect(user='root', 	password='admin',
                              host='localhost',
                              database='mysql')
cursor = cnx.cursor()
query = "SELECT * FROM user"
cursor.execute(query)
for row in cursor.fetchall():
    print(row)
cnx.close()

# Replace `<username>`, `<password>`, `<hostname>`, `<database>`, and `<table>` with your actual values.
## 3. Using SQLAlchemy
# SQLAlchemy is a Python SQL toolkit and Object-Relational Mapping (ORM) library. It provides a way to connect to various databases including MySQL. You can install it using pip:
# pip install SQLAlchemy
# following code:

from sqlalchemy import create_engine, text
engine = create_engine("mysql+pymysql://root:admin@localhost/mysql")
with engine.connect() as connection:
    result = connection.execute(text("SELECT * FROM user"))
    for row in result:
        print(row)
engine.dispose()
# Replace `<username>`, `<password>`, `<hostname>`, `<database>`, and `<table>` with your actual values.

# These are the three most common ways to connect to MySQL from Python. 
