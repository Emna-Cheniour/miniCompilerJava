%{	
 #include <stdio.h>	
 #include <stdlib.h>	
 #include <string.h>	
 #include "miniCompilerSyn.tab.h"	    
#include <math.h>	 			
%}

%option yylineno

delim     [ \t]
bl        {delim}+
chiffre   [0-9]
lettre    [a-zA-Z]
string        \"(.)*\"
int	("-")?[1-9]{chiffre}*
id         ({lettre}|"_")({lettre}|{chiffre}|"_")*
iderr  {chiffre}({lettre}|{chiffre})*
nb        ("-")?{chiffre}+("."{chiffre}+)?(("E"|"e")"-"?{chiffre}+)?
par_ouvrante  (\()
par_fermante  (\))
acc_ouvrante  (\{)
acc_fermante  (\})
brack_ouvrante (\[)
brack_fermante (\])
COMMENT_LINE     "//"([^\n])*\n
COMMENT_MULTILIGNES  "/*"([^*]|"*"[^/])*"*/" 
booleanLiteral                    "true"|"false"
%%

{bl}                                     /* no action */
"\n"                                     ++yylineno;

"abstract"      			return _ABSTRACT;
"break"         			return _BREAK;
"class"         			return _CLASS;
"continue"      			return _CONTINUE;
"extends"       			return _EXTENDS;
"if"            			return _IF;
"else"          			return _ELSE;
"length"        			return _LENGTH;
"new"           			return _NEW;
"null"          			return _NULL_LITERAL;
"public"        			return _PUBLIC;
"return"        			return _RETURN;
"static"        			return _STATIC;
"this"          			return _THIS;
"void"          			return _VOID;
"while"         			return _WHILE;
"System.out.println"                    return _SOP;
"="	                                return _EQUAL;
"String"				return _STRING;
{id}					return _IDENT;		
{string}           			return _STRING;
{int}           			return _INTEGERVALUE;
{COMMENT_LINE}         			/* no action */
{COMMENT_MULTILIGNES}         		/* no action */	

{brack_ouvrante}             		return _OPENSQRBRACK;
{brack_fermante}            		return _CLOSESQRBRACK;
{par_ouvrante}             		return _OPENPARENT;
{par_fermante}             		return _CLOSEPARENT;
{acc_ouvrante}             		return _OPENBRAC;
{acc_fermante}            		return _CLOSEBRAC;
{booleanLiteral}			return _BOOLVALUE;
"<"|">"|"<="|">="|"=="|"!="		return _COMPOP;
"&&"            			return _AND; 
"+"             			return _PLUS;
"-"             			return _MINUS;
"*"             			return _MULTIPLY;
"!"             			return _NOT;
","             			return _COMMA;
";"             			return _SEMICOLON;
"."             			return _DOT;

[ \t\n]+        ; 

{iderr}              {fprintf(stderr,"illegal identifier \'%s\' on line %d\n",yytext,yylineno);}

%%

int yywrap()
{
	return(1);
}
 
