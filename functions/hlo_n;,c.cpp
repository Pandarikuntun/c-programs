// print the hello world without using ";"
//Yep — this is a classic C trick question.
#include<stdio.h>
main(){
//--------method1----------
	
	if(printf("hello world\n")){
	}

	
//-------method2-----------

	switch(printf("hello world\n")){
		
	}
// without using ; print the ;

//---------method1---------
	if(printf(";\n")){
	}
	
//------method2-------
	switch(printf(";\n")){
	}
	
	
}
