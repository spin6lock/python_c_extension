/*
 * =====================================================================================
 *
 *       Filename:  ext1.c
 *
 *    Description:  hello world in c extend
 *
 *        Version:  1.0
 *        Created:  2012年07月30日 09时47分48秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *        Company:  
 *
 * =====================================================================================
 */

#include "Python.h"

static PyObject*
hello_world(PyObject* self, PyObject* args){
	return Py_BuildValue("s", "hello, world!");
}

static PyMethodDef
module_functions[] = {
	{ "hello_world", hello_world, METH_VARARGS, "Say hello."},
	{ NULL }
};

void
initext1(void){
	Py_InitModule3("ext1", module_functions, "A minimal module.");
}
