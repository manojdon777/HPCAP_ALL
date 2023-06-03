# a full fledged example doing all the CRUD operations
import mysql.connector

# Connect to the MySQL database
cnx = mysql.connector.connect(user='root',  password='admin',
                              host='localhost',
                              database='mydb')
# Create a cursor object to execute SQL queries
cursor = cnx.cursor()

# CREATE TABLE command - create a new table in the database
create_table_query = "CREATE TABLE emp (id int, name VARCHAR(255), salary int)"
cursor.execute(create_table_query)

# INSERT command - insert a new record into the table
insert_query = "INSERT INTO emp (id, name, salary) VALUES (%s, %s, %s)"
record_to_insert = (101, "AAA", 22000)
cursor.execute(insert_query, record_to_insert)
cnx.commit()

# SELECT command - select records from the table
select_query = "SELECT * FROM emp WHERE id = %s"
value = ('101',)
cursor.execute(select_query, value)
result_set = cursor.fetchall()
for row in result_set:
    print(row)

# UPDATE command - update a record in the table
update_query = "UPDATE emp SET name = %s WHERE id = %s"
values = ('ZZZ', 101)
cursor.execute(update_query, values)
cnx.commit()

# DELETE command - delete a record from the table
delete_query = "DELETE FROM emp WHERE id = %s"
value = (101,)
cursor.execute(delete_query, value)
cnx.commit()

# DROP TABLE command - drop the table from the database
drop_table_query = "DROP TABLE emp"
cursor.execute(drop_table_query)

# Close the cursor and database connections
cursor.close()
cnx.close()


