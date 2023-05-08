# creating a dictionary 
d = {'name': 'Gaurav' , 'rollno' : 1 ,'rollno' : 2}
d= dict(name = 'Sagar' , rollno = 2 )
d= dict([('name','Deepak') ,( 'rollno' , 3 )])
d= dict({'name': 'Gaurav' , 'rollno' : 1 ,'rollno' : 2})

# adding to a blank dictionary ## recommended 
# d= {}
# no_of_items = int(input("How many items you want to add"))
# for i in range(0,no_of_items,1):
#     key = input('Please enter the key ')    
#     value = input('Please enter the value ')    
#     d[key] = value

# adding to a blank dictionary
# d= {}
# string_input = "'name': 'Gaurav' , 'rollno' : 1 ,'rollno' : 2"
# for elem in string_input.split(','):
#     key,value = elem.split(':')
#     key = key.replace("'",'').strip()
#     value = value.replace("'",'').strip()
#     d[key] = value

# print(d)

# # adding to a blank dictionary ## recommended 
# d= {}
# keys = ['name','rollno']
# values= ['Gaurav',1]

# for i in range(0,len(keys)) :
#     d[keys[i]] = values[i]

# print(d)

# ## adding to a blank dictionary ## recommended 
# d= {}
# keys = ['name','rollno']
# values= ['Gaurav',1]

# for i in range(0,len(keys)) :
#     d.update({keys[i]:values[i]})

# print(d)

# print(list(zip([1,2,3],['one','two','three'])))


## adding to a blank dictionary ## recommended 
keys = ['name','rollno']
values= ['Gaurav',1]
d = dict(list(zip([1,2,3],['one','two','three'])))
print(d)


# Create a dictionary like this :

# {
# 'employee_id' : 1,
# 'employee_name' : 'Sarwesh'
# 'account_number' : 829389283982839,
# 'salary' : 1000
# }

def menu(elem):
    print(f'Please choose a datatype for the {elem} from below')
    print('1: Integer')
    print('2: Float')
    print('3: String')
    print('4: Tuple')
    print('5: List')
    print('6: Dictionary')
    print('7: Set')
    print('8: Frozenset')
    
    dt= int(input())
    if dt != 6 :
        raw_string = input(f"Please enter value for {elem}")
    if dt ==1 :
        return int(raw_string)
    elif dt ==2 :
        return float(raw_string)
    elif dt ==3 :
        return raw_string
    elif dt ==4 :
        return tuple(raw_string.split(','))
    elif dt ==5 :
        return raw_string.split(',')
    elif dt ==6 :
        d = {}
        keys = []
        for i in range(int(input('How many keys'))):
            keys.append(input("Key_name"))
        for elem in keys :
            d[elem] = menu(elem)    
        return d     
    elif dt ==7 :
        return set(raw_string.split(','))
    elif dt ==8 :
        return frozenset(raw_string.split(','))


d = {}
keys = ['employee_id','employee_name','account_number','salary','address']
for elem in keys :
    d[elem] = menu(elem)

print(d)
