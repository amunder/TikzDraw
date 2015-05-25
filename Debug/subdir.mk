################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Coordinate.cpp \
../Element.cpp \
../Figure.cpp \
../Rectangle.cpp \
../Terminal.cpp \
../main.cpp 

OBJS += \
./Coordinate.o \
./Element.o \
./Figure.o \
./Rectangle.o \
./Terminal.o \
./main.o 

CPP_DEPS += \
./Coordinate.d \
./Element.d \
./Figure.d \
./Rectangle.d \
./Terminal.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


