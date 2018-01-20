# Compiler_Design

This is a compiler design project. The aim of the project is to design and implement various phases of a compiler for the subset of C programming language. The subset includes sufficiently rich collection of data types and control structures.

## What is a compiler?
A compiler is a special program that processes statements written in a high level programming language and turns them into machine language.

The input given to the compiler is a source code written in a high level language. The compiler outputs an equivalent and correct target code in machine level language. The compiler checks and outputs errors, if present. The compiler can check for syntax and semantic errors only. 

Under this project, we are building our compiler which has various functionalities. The compiler building is divided into 4 phases. This includes:
1) Lexical analyser/Scanner
2) Syntax analyser/Parser
3) Semantic analyser
4) intermediate code generator

The structure of the project:
1) The project is built in four phases
2) The input to the compiler is C program
3) The output is a series of identified tokens and the token type. All the tokens are summarized in the symbol and constants table
4) The symbol table is created using hashing and chaining is used to deal with collisions. The hashing is done on the lexeme.
5) For each phase, test cases are made. The description of expected output and what the test case covers is commented in the test case file itself. The test cases cover the various functions of our compiler

## Project - 1 (Scanner)
Lexical analysis is the first phase in a compiler. It converts a sequence of characters into a sequence of tokens.

The input given to the lexical analyser is a source code written in a high level language. It outputs a stream of tokens. It also checks and outputs lexical errors, if present.

The functions of a lexical analyser are:
1) Strips out all the unwanted information from the source program(blank space, comments, tabs, newline character, etc)
2) Reads the source program character by character(from left to right, top to bottom)
3) Group the characters based on regular expressions. It decides tokens based on one character look ahead
4) Insert all the symbols in the source program to a symbol table. 
5) Give lexical errors

The different kinds of lexical errors are:
1) Ill formed tokens
2) Illegal characters
3) Errors due to rule priority
4) Unclosed multiline comments or strings

## Symbol table after lexical analysis
The symbol table consists of three columns after the lexical analysis phase.
1) Index
2) Lexeme
3) Token type

## What out scanner covers
1) Data types - int, float, double, long , short
2) Control structures - while loop, if else
3) Single and multiline comments
4) Identifies functions(NOTE: check the report for more information)
5) Identifies lexical errors that are listed above
