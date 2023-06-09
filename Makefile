# Makefile
CC = gcc
CFLAGS = -Wall -Wextra -Isrc -Itest/unity -Itest/unity/src -Irsrc
LDFLAGS =

SRC_DIR = src
TEST_DIR = test
UNITY_DIR = $(TEST_DIR)/unity
RSRC_DIR = rsrc

SRCS = $(wildcard $(SRC_DIR)/*.c)
TEST_SRCS = $(wildcard $(TEST_DIR)/*.c) $(UNITY_DIR)/src/unity.c

OBJS = $(SRCS:.c=.o)
TEST_OBJS = $(filter-out $(SRC_DIR)/qmk_textflow.o, $(OBJS)) $(TEST_SRCS:.c=.o)

TARGET = textflow
TEST_TARGET = test_$(TARGET)

.PHONY: all clean test

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

$(TEST_TARGET): $(UNITY_DIR)/src/unity.o $(TEST_DIR)/test_qmk_textflow.o $(SRC_DIR)/qmk_textflow.o
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

test: $(TEST_TARGET)
	./$(TEST_TARGET)

clean:
	rm -f $(OBJS) $(TEST_OBJS) $(TARGET) $(TEST_TARGET)
