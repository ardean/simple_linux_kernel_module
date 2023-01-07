#include <linux/init.h>
#include <linux/module.h>

static int test_init(void)
{
  printk(KERN_ALERT "Hello, kernel\n");
  return 0;
}

static void test_exit(void)
{
  printk(KERN_ALERT "Goodbye, kernel\n");
}

module_init(test_init);
module_exit(test_exit);
MODULE_LICENSE("GPL");