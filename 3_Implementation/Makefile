PROJ_NAME =M1_application_candidatepoll
TEST_PROJ_NAME = Test_$(PROJ_NAME)

SRC = src/generateBillHeader.c\
src/generateBillBody.c\
src/generateBillFooter.c\


INC_H = inc
INC_T = unity

idef OS
   RM = del
   FixPath = $(subst/,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
           EXEC = out
    endif
endif

all:
       gcc -I $(INC_H) $(SRC) main.c -o $(call FixPath,$(PROJ_NAME).$(EXEC))
       
run:
       $(call FixPath,$(PROJ_NAME).$(EXEC))
test:
       gcc -I $(INC_H) -I $(INC_T) $(TEST_SRC) $(SRC) -O $(call FixPath,$(TEST_PROJ_NAME).$(EXEC))
       ./$(call FixPath,$(TEST_PROJ_NAME).$(EXEC))
       
clean:
       $(RM) *.$(EXEC)
