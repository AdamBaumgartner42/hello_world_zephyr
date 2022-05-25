#include <zephyr.h>

#define SLEEP_TIME_MS   1000

int count = 0;

void main(void)
{
	while (1) {
    printk("Hello World! count: %d, board: %s\n", count++, CONFIG_BOARD);
		k_msleep(SLEEP_TIME_MS);
	}
}