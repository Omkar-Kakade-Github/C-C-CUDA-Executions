.PHONY: 01 01_obj 01_obj_exe_run 02 03 clean

GCC = gcc -g -Wall
NVCC = nvcc -g
CUDA_FLAGS = -arch=sm_75

01: 01.c
	@$(GCC) -o 01 01.c

01_obj: 01.c
	@$(GCC) -c 01.c -o 01.o

01_obj_exe_run: 01_obj
	@$(GCC) 01.o -o 01
	@./01

02: 02.c
	@$(GCC) -o 02 02.c

03: 03.cu
	@$(NVCC) $(CUDA_FLAGS) -o 03_cu 03.cu

clean: 
	rm -f 01 02 03_cu *.o
