#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

static void __exit sude_exit(void){
	pr_info("---Goodbye---\n");
 
}

module_exit(sude_exit);
MODULE_DESCRIPTION("My Kernel Module");
MODULE_AUTHOR("sude");
MODULE_LICENSE("GPL");
