def is_leap(year):
    
    # variable to check the leap year
    leap = False
    
    # One if statement that contains multiple conditions
    if ((year % 400 == 0) and (year % 100 == 0)) | ((year % 4 ==0) and (year % 100 != 0)):
        
       # change leap to True
        leap = True

    
    return leap