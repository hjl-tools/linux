#include <linux/module.h>
#include <linux/init.h>
#include <linux/printk.h>

static int __init module_a_init(void)
{
    printk(KERN_INFO "Module A init\n");
    return 0;
}
int module_a_function(void) 
{
       printk(KERN_INFO "Module A function\n");
       return 0;
}
EXPORT_SYMBOL_GPL(module_a_function);
static void __exit module_a_exit(void)
{
       printk(KERN_INFO "Module A exit\n");
}
module_init(module_a_init);
module_exit(module_a_exit);
MODULE_LICENSE("GPL");
