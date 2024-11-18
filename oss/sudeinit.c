#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

static int __init sude_init(void){
	pr_info("---Hello---\n");
	return 0;
}

module_init(sude_init);
MODULE_DESCRIPTION("My Kernel Module");
MODULE_AUTHOR("sude");
MODULE_LICENSE("GPL");
