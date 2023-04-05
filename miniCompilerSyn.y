
%{

    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include <stdbool.h> 

    #define YYSTYPE char*

    int yyparse(void);
    int yyerror(char const *msg);
    int yylex(void);

    extern int yylineno;

    int class_id = 0;
    int level = 0;
    bool isParam = false;
    int method_call_index = -1;
    int expression_level = 0;

    //other

    int address = 0;
    int code_index = -1;
    char* method_name = "";
    char* class_name = "";
    char* math_op = "";
    char* com_op = "";
    int retour = 0;

    #define YYERROR_VERBOSE 1


%}

%token  _PUBLIC
%token  _STATIC
%token  _CLASS
%token  _VOID
%token  _MAIN
%token  _EXTENDS
%token  _RETURN
%token  _SOP
%token  _LENGTH
%token  _THIS
%token  _NEW
%token  _IF
%token  _ELSE
%token  _WHILE
%token  _INTEGER
%token  _STRING
%token  _DATATYPE
%token  _OPENPARENT
%token  _CLOSEPARENT
%token  _OPENSQRBRACK
%token  _CLOSESQRBRACK
%token  _OPENBRAC
%token  _CLOSEBRAC
%token  _AND
%token  _OR
%token  _DOT
%token  _SEMICOLON
%token  _COMMA
%token  _DOUBLEQUOTE
%token  _SINGLEQUOTE
%token  _PLUS
%token  _MINUS
%token  _MULTIPLY
%token  _NOT
%token  _EQUAL
%token  _DIV
%token  _COMPOP
%token  _BOOLVALUE
%token  _INTEGERVALUE
%token  _IDENT
%token  _ABSTRACT
%token  _BREAK
%token  _CONTINUE
%token  _NULL_LITERAL;
%token  _COMMENT
%start program

%%

program              : MainClass ClassDeclaration     { printf("Analyze finished with success \n");}


MainMethodParam      : _STRING _OPENSQRBRACK _CLOSESQRBRACK _IDENT
                        | error _OPENSQRBRACK _CLOSESQRBRACK _IDENT                                 { yyerror (" String is needed  "); YYABORT}
                        | _STRING error _CLOSESQRBRACK _IDENT                                       { yyerror (" Open brackets is needed  "); YYABORT}
                        | _STRING _OPENSQRBRACK error _IDENT                                        { yyerror (" CLose brackets is needed  "); YYABORT}
                        | _STRING _OPENSQRBRACK _CLOSESQRBRACK error                                { yyerror (" Identifier is needed  "); YYABORT}
                        ;

MainClass            : ClassScope _OPENBRAC _PUBLIC _STATIC _VOID _MAIN _OPENPARENT MainMethodParam _CLOSEPARENT _OPENBRAC Statement _CLOSEBRAC _CLOSEBRAC     
                        | ClassScope error _PUBLIC _STATIC _VOID _MAIN _OPENPARENT MainMethodParam _CLOSEPARENT _OPENBRAC Statement _CLOSEBRAC _CLOSEBRAC      { yyerror (" Open brackets is needed  "); YYABORT}
                        | ClassScope _OPENBRAC error _STATIC _VOID _MAIN _OPENPARENT MainMethodParam _CLOSEPARENT _OPENBRAC Statement _CLOSEBRAC _CLOSEBRAC    { yyerror (" Public is needed  "); YYABORT}
                        | ClassScope _OPENBRAC _PUBLIC error _VOID _MAIN _OPENPARENT MainMethodParam _CLOSEPARENT _OPENBRAC Statement _CLOSEBRAC _CLOSEBRAC    { yyerror (" Static is needed  "); YYABORT}
                        | ClassScope _OPENBRAC _PUBLIC _STATIC error _MAIN _OPENPARENT MainMethodParam _CLOSEPARENT _OPENBRAC Statement _CLOSEBRAC _CLOSEBRAC  { yyerror (" Void is needed  "); YYABORT}
                        | ClassScope _OPENBRAC _PUBLIC _STATIC _VOID error _OPENPARENT MainMethodParam _CLOSEPARENT _OPENBRAC Statement _CLOSEBRAC _CLOSEBRAC  { yyerror (" Main is needed  "); YYABORT}
                        | ClassScope _OPENBRAC _PUBLIC _STATIC _VOID _MAIN error MainMethodParam _CLOSEPARENT _OPENBRAC Statement _CLOSEBRAC _CLOSEBRAC        { yyerror (" Open parentheses is needed  "); YYABORT}
                        | ClassScope _OPENBRAC _PUBLIC _STATIC _VOID _MAIN _OPENPARENT MainMethodParam error _OPENBRAC Statement _CLOSEBRAC _CLOSEBRAC         { yyerror (" Close parentheses is needed  "); YYABORT}
                        | ClassScope _OPENBRAC _PUBLIC _STATIC _VOID _MAIN _OPENPARENT MainMethodParam _CLOSEPARENT error Statement _CLOSEBRAC _CLOSEBRAC      { yyerror (" Open brackets is needed  "); YYABORT}
                        | ClassScope _OPENBRAC _PUBLIC _STATIC _VOID _MAIN _OPENPARENT MainMethodParam _CLOSEPARENT _OPENBRAC error _CLOSEBRAC _CLOSEBRAC      { yyerror (" Statement is needed  "); YYABORT}
                        | ClassScope _OPENBRAC _PUBLIC _STATIC _VOID _MAIN _OPENPARENT MainMethodParam _CLOSEPARENT _OPENBRAC Statement error _CLOSEBRAC       { yyerror (" Close brackets is needed  "); YYABORT}
                        | ClassScope _OPENBRAC _PUBLIC _STATIC _VOID _MAIN _OPENPARENT MainMethodParam _CLOSEPARENT _OPENBRAC Statement _CLOSEBRAC error       { yyerror (" close brackets is needed  "); YYABORT}
                        ;

SectionE_I           : _EXTENDS _IDENT
                        | error _IDENT        { yyerror (" Extends is needed  "); YYABORT}
                        | _EXTENDS error      { yyerror (" Identifier is needed  "); YYABORT}
                        |       {level = 0;}
                        ;

ClassScope           : _CLASS _IDENT 
                        | error _IDENT   { yyerror (" Class is needed  "); YYABORT}
                        | _CLASS error   { yyerror (" Identifier is needed  "); YYABORT}
                        ;

ClassDeclaration     : ClassScope  SectionE_I _OPENBRAC VarDeclaration MethodDeclaration _CLOSEBRAC 
                        ClassDeclaration
                        | error SectionE_I _OPENBRAC VarDeclaration MethodDeclaration _CLOSEBRAC ClassDeclaration
                        | ClassScope SectionE_I error VarDeclaration MethodDeclaration _CLOSEBRAC ClassDeclaration    { yyerror (" Open brackets is needed  "); YYABORT}
                        | ClassScope SectionE_I _OPENBRAC VarDeclaration MethodDeclaration error ClassDeclaration     { yyerror (" Close brackets is needed  "); YYABORT}
                        |
                        ;

Type                 : _DATATYPE _IDENT 
                        | _INTEGER _IDENT 
                        | error _IDENT                    { yyerror (" Valid Type is needed  "); YYABORT}
                        //| _IDENT error                    { yyerror (" Identifier is needed  "); YYABORT}
                        | _DATATYPE error                 { yyerror (" Identifier is needed  "); YYABORT}
                        | _INTEGER error                  { yyerror (" Identifier is needed  "); YYABORT}
                        ;

MethodType           : _DATATYPE _IDENT  
                        | _INTEGER _IDENT 
                        | error _IDENT                    { yyerror (" Valid Type is needed  "); YYABORT}
                        //| _IDENT error                    { yyerror (" Identifier is needed "); YYABORT}
                        | _DATATYPE error                 { yyerror (" Identifier is needed  "); YYABORT}
                        | _INTEGER error                  { yyerror (" Identifier is needed  "); YYABORT}
                        ;

VarDeclaration       : Type _SEMICOLON VarDeclaration
                        |
                        | Type error VarDeclaration       { yyerror (" Semi colon is needed  "); YYABORT}
                        ;

SectionC_T           : _COMMA Type SectionC_T
                        | error Type SectionC_T           { yyerror (" Comma is needed  "); YYABORT}
                        |
                        ;

SectionT_SCT         :  Type SectionC_T { isParam = false; level = 1;}
                        |               { isParam = false; level = 1;}
                        ;

MethodDeclaration    : _PUBLIC MethodType _OPENPARENT SectionT_SCT _CLOSEPARENT _OPENBRAC VarDeclaration Statement _RETURN Expression _SEMICOLON _CLOSEBRAC 
                        MethodDeclaration
                        | error MethodType _OPENPARENT SectionT_SCT _CLOSEPARENT _OPENBRAC VarDeclaration Statement _RETURN Expression _SEMICOLON _CLOSEBRAC MethodDeclaration   { yyerror (" Public is needed  "); YYABORT}
                        | _PUBLIC error error SectionT_SCT _CLOSEPARENT _OPENBRAC VarDeclaration Statement _RETURN Expression _SEMICOLON _CLOSEBRAC MethodDeclaration       { yyerror (" Open parentheses is needed  "); YYABORT}
                        | _PUBLIC MethodType _OPENPARENT SectionT_SCT error _OPENBRAC VarDeclaration Statement _RETURN Expression _SEMICOLON _CLOSEBRAC MethodDeclaration        { yyerror (" Close parentheses is needed  "); YYABORT}
                        | _PUBLIC MethodType _OPENPARENT SectionT_SCT _CLOSEPARENT error VarDeclaration Statement _RETURN Expression _SEMICOLON _CLOSEBRAC MethodDeclaration     { yyerror (" Open brackets is needed  "); YYABORT}
                        | _PUBLIC MethodType _OPENPARENT SectionT_SCT _CLOSEPARENT _OPENBRAC VarDeclaration Statement error Expression _SEMICOLON _CLOSEBRAC MethodDeclaration   { yyerror (" Return is needed  "); YYABORT}
                        | _PUBLIC MethodType _OPENPARENT SectionT_SCT _CLOSEPARENT _OPENBRAC VarDeclaration Statement _RETURN Expression error _CLOSEBRAC MethodDeclaration      { yyerror (" Semi colon is needed  "); YYABORT}
                        | _PUBLIC MethodType _OPENPARENT SectionT_SCT _CLOSEPARENT _OPENBRAC VarDeclaration Statement _RETURN Expression _SEMICOLON error MethodDeclaration      { yyerror (" Close brackets is needed  "); YYABORT}
                        |
                        ;

Statement            : _OPENBRAC Statement Statement _CLOSEBRAC
                        | error Statement Statement _CLOSEBRAC                                               { yyerror (" Open brackets is needed  "); YYABORT}
                        | _OPENBRAC Statement Statement error                                                { yyerror (" Close brackets is needed  "); YYABORT}
                        | _IF _OPENPARENT Expression _CLOSEPARENT Statement Statement 
                        _ELSE Statement Statement 
                        | error _OPENPARENT Expression _CLOSEPARENT Statement _ELSE Statement               { yyerror (" If brackets is needed  "); YYABORT}
                        | _IF error Expression _CLOSEPARENT Statement _ELSE Statement                       { yyerror (" Open parentheses brackets is needed  "); YYABORT}
                        | _IF _OPENPARENT Expression error Statement _ELSE Statement                        { yyerror (" Close parentheses is needed  "); YYABORT}
                        | _IF _OPENPARENT Expression _CLOSEPARENT Statement error Statement                 { yyerror (" Else is needed  "); YYABORT}
                        | _WHILE _OPENPARENT Expression _CLOSEPARENT 
                        Statement 
                        | error _OPENPARENT Expression _CLOSEPARENT Statement                               { yyerror (" While is needed  "); YYABORT}
                        | _WHILE error Expression _CLOSEPARENT Statement                                    { yyerror (" Open parentheses is needed  "); YYABORT}
                        | _WHILE _OPENPARENT Expression error Statement                                     { yyerror (" Close parentheses is needed  "); YYABORT}
                        | _SOP _OPENPARENT Expression _CLOSEPARENT _SEMICOLON Statement
                        | error _OPENPARENT Expression _CLOSEPARENT _SEMICOLON Statement                              { yyerror (" System.out.println is needed  "); YYABORT}
                        | _SOP error Expression _CLOSEPARENT _SEMICOLON Statement                                     { yyerror (" Open parentheses is needed  "); YYABORT}
                        | _SOP _OPENPARENT Expression error _SEMICOLON Statement                                      { yyerror (" Close parentheses is needed  "); YYABORT}
                        | _SOP _OPENPARENT Expression _CLOSEPARENT error Statement                                    { yyerror (" Semi colon is needed  "); YYABORT}
                        | _IDENT _EQUAL Expression _SEMICOLON 
                        Statement
                        | error _EQUAL Expression _SEMICOLON Statement                                      { yyerror (" Identifier is needed  "); YYABORT}
                        | _IDENT error Expression _SEMICOLON Statement                                      { yyerror (" Equal operator is needed  "); YYABORT}
                        | _IDENT _EQUAL Expression error Statement                                          { yyerror (" Semi colon is needed  "); YYABORT}
                        | _IDENT _OPENSQRBRACK Expression _CLOSESQRBRACK _EQUAL Expression _SEMICOLON Statement 
                        | error _OPENSQRBRACK Expression _CLOSESQRBRACK _EQUAL Expression _SEMICOLON Statement        { yyerror (" Identifier is needed  "); YYABORT}
                        | _IDENT error Expression _CLOSESQRBRACK _EQUAL Expression _SEMICOLON Statement               { yyerror (" Open brackets is needed  "); YYABORT}
                        | _IDENT _OPENSQRBRACK Expression error _EQUAL Expression _SEMICOLON  Statement               { yyerror (" Close brackets is needed  "); YYABORT}
                        | _IDENT _OPENSQRBRACK Expression _CLOSESQRBRACK error Expression _SEMICOLON  Statement       { yyerror (" Equal operator is needed  "); YYABORT}
                        | _IDENT _OPENSQRBRACK Expression _CLOSESQRBRACK _EQUAL Expression error  Statement           { yyerror (" Semi colon is needed  "); YYABORT}
                        |
                        ;

SectionC_E           : _COMMA Expression SectionC_E
                        | error Expression SectionC_E            { yyerror (" Comma is needed  "); YYABORT}
                        |
                        ;

LogicOperator        : _AND                      {com_op = "&&";}
                        | _COMPOP                {com_op = "$1";}
                        ;

MathOperator         : _PLUS                    { math_op = "+";}
                        | _MINUS                { math_op = "-";}
                        | _MULTIPLY             { math_op = "*";}
                        | _DIV                  { math_op = "/";}
                        ;

SectionE_SCE         : Expression SectionC_E  
                        ;

UseFunction          : _DOT _IDENT 
                        | error _IDENT                                                                   { yyerror (" Dot is needed  "); YYABORT}
                        | _DOT  error                                                                    { yyerror (" Identifier is needed  "); YYABORT}
                        ;

Expression           : Expression 
                        MathOperator Expression 
                        | Expression 
                        LogicOperator Expression 
                        | Expression error Expression                                                    { yyerror (" Comparison operator is needed  "); YYABORT}
                        | Expression _OPENSQRBRACK Expression _CLOSESQRBRACK 
                        | Expression error Expression _CLOSESQRBRACK                                     { yyerror (" Open brackets is needed  "); YYABORT}
                        | Expression _OPENSQRBRACK Expression error                                      { yyerror (" Close brackets is needed  "); YYABORT}
                        | Expression _DOT _LENGTH 
                        | Expression error _LENGTH                                                       { yyerror (" Dot is needed  "); YYABORT}
                        | Expression _DOT error                                                          { yyerror (" Length is needed  "); YYABORT}
                        | Expression UseFunction _OPENPARENT SectionE_SCE _CLOSEPARENT
                        | Expression UseFunction error SectionE_SCE _CLOSEPARENT                         { yyerror (" Open parentheses is needed  "); YYABORT}
                        | Expression UseFunction _OPENPARENT SectionE_SCE error                          { yyerror (" Close parentheses is needed  "); YYABORT}
                        | _INTEGERVALUE 
                        | _MINUS _INTEGERVALUE 
                        | _BOOLVALUE  
                        | _IDENT
                        | _THIS
                        | _NEW _INTEGER _OPENSQRBRACK Expression _CLOSEBRAC
                        | error _INTEGER _OPENSQRBRACK Expression _CLOSEBRAC                             { yyerror (" New is needed  "); YYABORT}
                        | _NEW error _OPENSQRBRACK Expression _CLOSEBRAC                                 { yyerror (" Integer type is needed  "); YYABORT}
                        | _NEW _INTEGER error Expression _CLOSEBRAC                                      { yyerror (" Open brackets is needed  "); YYABORT}
                        | _NEW _INTEGER _OPENSQRBRACK Expression error                                   { yyerror (" Close brackets is needed  "); YYABORT}
                        | _NEW _IDENT _OPENPARENT _CLOSEPARENT
                        | error _IDENT _OPENPARENT _CLOSEPARENT                                          { yyerror (" New is needed  "); YYABORT}
                        | _NEW error _OPENPARENT _CLOSEPARENT                                            { yyerror (" Identifier is needed  "); YYABORT}
                        | _NEW _IDENT error _CLOSEPARENT                                                 { yyerror (" Open parentheses is needed  "); YYABORT}
                        | _NEW _IDENT _OPENPARENT error                                                  { yyerror (" Close parentheses is needed  "); YYABORT}
                        | _NOT Expression
                        | error Expression                                                               { yyerror (" Not operator is needed  "); YYABORT}
                        | _OPENPARENT Expression _CLOSEPARENT
                        | error Expression _CLOSEPARENT                                                  { yyerror (" open parentheses is needed  "); YYABORT}
                        | _OPENPARENT Expression error                                                   { yyerror (" Close parentheses is needed  "); YYABORT}
                        | error                                                                          { yyerror (" Integer Value or boolean value or identifier or this   is needed  "); YYABORT}
                        ;

%%

    int yyerror(char const *msg) {

        fprintf(stderr, "%s hii%d\n", msg,yylineno);
        return 0;
    }

    extern FILE *yyin;

    int main()
    {
        yyparse();
    }