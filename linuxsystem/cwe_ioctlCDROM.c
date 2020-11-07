#include <sys/ioctl.h> /* call for ioctl */
#include <fcntl.h> /* for O_RDONLY, O_NONBLOCK */
#include <stdio.h>/* call for printf */
#include <stdlib.h> /* call for exit */
#include <unistd.h> /* call for close */
#include <linux/cdrom.h> /* call for linux/cdrom */

#define CDROMDEVICE "/dev/cdrom"
/* CDROM device file in GNU/linux */

int open_or_close(int cdrom)
{
	int cdrom_stat;
/*
* cdrom_stat :- store the status returned from ioctl.
*/
	if ((cdrom_stat = ioctl(cdrom, CDROM_DRIVE_STATUS, 0)) < 0){
/*
* Use ioctl to send the CDROM_DRIVE_STATUS command to the 
* device to get the current status of the device.
*/
		perror("ioctl : ");
		close(cdrom);
		exit(1);
	}
	if (cdrom_stat == CDS_TRAY_OPEN){
/*
* Use ioctl to send the CDROMCLOSETRAY command to 
* the device close the device.
*/
		if (ioctl(cdrom,CDROMCLOSETRAY,0) < 0){
			perror("ioctl close : ");
			return 0;
		}
	}else if (cdrom_stat != CDS_TRAY_OPEN){
/*
* Use ioctl to send the CDROMEJECT command to the device
* open the device.
*/
		if (ioctl(cdrom, CDROMEJECT, 0) < 0) {
			perror("ioctl eject : ");
			return 0;
		}
	}
	return 1;
}

int main(int argc,char **argv)
{
	int cdrom, ret;
/*
* cdrom :- store CDROM device file descriptor.
* ret :- store return value form function open_or_close.
*/

	if ((cdrom = open(CDROMDEVICE,O_RDONLY | O_NONBLOCK)) < 0) {
/* Open the CDROM device. The linux/cdrom.h header 
* file specifies that it must be given the O_NONBLOCK 
* flag when opening.
*/
	perror("open : ");
	exit(1);
	}
/*
*call the function to open or close the cdrom.
*/
	ret = open_or_close(cdrom);

	if(ret)
		printf("Success...\n");

	close(cdrom);
	return 0;
}
