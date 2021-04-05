#include<iostream>
using namespace std;
#define use_macro 10
int main()
{
	#ifdef use_macro
	cout<<use_macro<<"is defined\n";
	#endif
	#if use_macro < 10
	#undef use_macro
	#define use_macro 20
	#elif use_macro == 20
	#undef use_macro
	#define use_macro 30
	#else
	#undef use_macro
	#endif
	#if !use_macro
	#warning "use_macro was undefined"
	#endif
	cout<<use_macro;
}
//#if   // allows if the defined macro is true into 
//#elif  // allows into this if #if is false
//#ifdef  // allows if the macro is defined 
//#else  // allows into this if #if,#elif become false and this is true
//#ifndef  // allows into this if macro is undefined
//#endif  // written at the end to close #if,#elif,#else
//#warning // produces a warning and goes on for compilation
//#error  // compilation stops here 
//#undef // undefines the defined macro ex: #define yas 10
// #undef yas   will make macro undefined

