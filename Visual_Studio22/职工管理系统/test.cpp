#include "worker.h"
#include "test.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

void test() 
{
	Employee * wkr = NULL;
	wkr = new Employee(1, "ÕÅÈý", 1);
	wkr->show_Info();
}