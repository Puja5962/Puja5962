TARGET = Emanager
CC = gcc
CFLAGS = -c -Wall -g

$(TARGET) : Emp_manager.o Increament.o Display_Hsal_emp.o Display_emp.o Delete_emp.o Add_emp.o 
	$(CC) Emp_manager.o Increament.o Display_Hsal_emp.o Display_emp.o Delete_emp.o Add_emp.o -o $(TARGET)
*.o : *.c
	$(CC) $(CFLAGS) $^

clean: 
	rm *.o
	rm $(TARGET)

run: 
	./$(TARGET)
