# # example of reading the lists from the HTML document 
# from bs4 import BeautifulSoup

# # Read in the HTML document
# with open('example.html', 'r') as file:
#     html = file.read()
# # print ('String ===> \n' , html, '\n <====== String ')

# # Parse the HTML with Beautiful Soup
# soup = BeautifulSoup(html, 'html.parser')
# # print ('Parsed Tree ===> \n' , html, '\n <====== Parsed Tree  ')

# # Find all the links in the unordered list
# links = soup.find('ul').find_all('a')
# print('Links received ', links)
# # Print the links
# for link in links:
#     print(link.contents[0] , ' : ', link['href'])

# # example of Finding elements by tag name < text > 
# from bs4 import BeautifulSoup

# # Read in the HTML document
# with open('example.html', 'r') as file:
#     html = file.read()

# # Parse the HTML with Beautiful Soup
# soup = BeautifulSoup(html, 'html.parser')

# # Find all the paragraphs in the document
# paragraphs = soup.find_all('p')

# # Print the text of each paragraph
# for paragraph in paragraphs:
#     print(paragraph.text)


# # Example of Finding elements by CSS selector

# from bs4 import BeautifulSoup

# # Read in the HTML document
# with open('example.html', 'r') as file:
#     html = file.read()

# # Parse the HTML with Beautiful Soup
# soup = BeautifulSoup(html, 'html.parser')

# # Find all the links in the document
# links = soup.select('a')
# # links = soup.find_all('a') # same as select above 
# print(links)
# # Print the text and href attributes of each link
# for link in links:
#     print(link.text, link['href'])


#Modifying the HTML

# from bs4 import BeautifulSoup

# # Read in the HTML document
# with open('example.html', 'r') as file:
#     html = file.read()

# # Parse the HTML with Beautiful Soup
# soup = BeautifulSoup(html, 'html.parser')

# # Change the text of the h1 element
# soup.h1.string = 'New Page Title'

# # Add a new paragraph to the document
# new_paragraph = soup.new_tag('p')
# new_paragraph.string = 'This is a new paragraph.'
# soup.body.append(new_paragraph)

# # Save the modified HTML to a file
# with open('modified.html', 'w') as file:
#     file.write(str(soup))


# complete example 
from bs4 import BeautifulSoup

# Sample HTML document
html = """
<html>
    <head>
        <title>Example HTML Page</title>
    </head>
    <body>
        <h1>Welcome to the Example HTML Page</h1>
        <div id="content">
            <p>This is a paragraph1.</p>
            <p>This is a paragraph2.</p>
            <ul>
                <li>Item 1</li>
                <li>Item 2</li>
                <li>Item 3</li>
            </ul>
<table>
                <thead>
					<tr>
						<th>Name</th>
						<th>Age</th>
					</tr>
				</thead>
                <tbody>
					<tr>
						<td>John</td>
						<td>25</td>
					</tr>
					<tr>
						<td>Jane</td>
						<td>30</td>
					</tr>
				</tbody>	
            </table>
            <a href="https://www.example.com">Click here for an example link</a>
        </div>
    </body>
</html>
"""

# Parse the HTML document
soup = BeautifulSoup(html, 'html.parser')

# Find the title tag
title_tag = soup.title
print(title_tag)

# # Find the title string
# title_string = soup.title.string
# print(title_string)

# # Find all the paragraph tags
# paragraph_tags = soup.find_all('p')
# for i in paragraph_tags:
#     print(i.string)


# # Find the first paragraph tag
# first_paragraph_tag = soup.find('p')
# print(first_paragraph_tag)

# #Find the contents of the div tag
# div_contents = soup.find('div').contents
# print(div_contents)

# # Find the href attribute of the link
# link_href = soup.find('a').get('href')
# print(link_href)

# # Create a new tag
# new_tag = soup.new_tag('b')
# new_tag.string = 'New bold text'
# print(new_tag)

# # Add a new tag to the document
# soup.find('p').append(new_tag)
# print(soup)

# # Find all the table rows
# table_rows = soup.find_all('tr')
# print(table_rows)

# # Find the text of the first table row
# first_table_row_text = soup.find('tr').text
# print(first_table_row_text)

# # Find all the table cells
# table_cells = soup.find_all('td')
# print(table_cells)

# # Find the text of the first table cell
# first_table_cell_text = soup.find('td').text
# print(first_table_cell_text)

# # Find all the links
# links = soup.find_all('a')
# print(links)

# # Find the text of the first link
# first_link_text = soup.find('a').text
# # first_link_text = soup.find('a').contents[0]
# print(first_link_text)

# # Find all the headers
# headers = soup.find_all(['h1', 'h2', 'h3'])
# print(headers)

# # Find all the elements with a "content" ID
# content_elements = soup.find_all(id='content')
# print(content_elements)

# # Find all the list items
# list_items = soup.select('ul li')
# print(list_items)

# # Find all the table cells using a CSS selector
# table_cells = soup.select('td')
# print(table_cells)
# table_cells = soup.select('table td')
# print(table_cells)

# # Find all the links using a CSS selector
# links = soup.select('a')
# print(links)
