#include <linux/module.h>
#include <linux/printk.h>

int init_module(void) {
	pr_info("Starting this now\n");
	return 0;
}

void cleanup_module(void) {
	pr_info("Bye\n");
}

MODULE_LICENSE("GPL");
