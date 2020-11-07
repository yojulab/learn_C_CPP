#include "stdafx.h"
#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <string>
#include <iostream>

using namespace std;

#define MAX_LETTER 26
char PREV_DRIVE_LIST[MAX_LETTER];
char NEW_DRIVE_LIST[MAX_LETTER];

/* To GET DRIVE LIST in char ARRAY */
void getUSBStorageDeviceList(char drive[])
{

    int count = 0;

    char szLogicalDrives[MAX_PATH];
    size_t size = strlen(szLogicalDrives) + 1;
    wchar_t *text = new wchar_t[size];

    size_t outSize;
    mbstowcs_s(&outSize, text, size, szLogicalDrives, size - 1);

    DWORD dwResult = GetLogicalDriveStrings(MAX_PATH, text); // text = szLogicalDrives
    WCHAR *szSingleDrive = text;

    while (*szSingleDrive)
    {
        UINT nDriveType = GetDriveType(szSingleDrive);

        //  printf("\nFUNC: getRemovableDisk, Drive Name%d= %s", ++count, szSingleDrive);

        if (nDriveType == DRIVE_UNKNOWN)
        {
            //  cout << "\nDrive type : Unknown: The drive type cannot be determined." << endl;
        }
        else if (nDriveType == DRIVE_NO_ROOT_DIR)
        {
            //  cout << "\nDrive type : Invalid Root Directory Media: The root path is invalid." << endl;
        }
        else if (nDriveType == DRIVE_REMOVABLE)
        {
            //  cout << "\nDrive type :  Removable Media:" << endl;
            char letter = szSingleDrive[0];
            drive[letter - 65] = letter;
        }
        else if (nDriveType == DRIVE_FIXED)
        {
            //cout << "\nDrive type : Fixed Media: " << endl;
        }
        else if (nDriveType == DRIVE_REMOTE)
        {
            //cout << "\nDrive type : Remote Media: The drive is a remote (network) drive.." << endl;
        }
        else if (nDriveType == DRIVE_CDROM)
        {
            //cout << "\nDrive type : CD ROM:   The drive is a CD-ROM drive." << endl;
        }
        else if (nDriveType == DRIVE_RAMDISK)
        {
            //cout << "\nDrive type : RAM Disk: The drive is a RAM disk." << endl;
        }

        szSingleDrive += wcslen(szSingleDrive) + 1; // next drive
    }
}

int main(void)
{

    int count = 0;
    for (int i = 0; i < MAX_LETTER; i++)
    {
        PREV_DRIVE_LIST[i] = '0';
        NEW_DRIVE_LIST[i] = '0';
    }
    // initial drive list which is already attached
    getUSBStorageDeviceList(PREV_DRIVE_LIST);

    while (1)
    {

        getUSBStorageDeviceList(NEW_DRIVE_LIST);
        count = 1;

        /* Check for insertion and removabal*/

        for (int i = 0; i < MAX_LETTER; i++)
        {
            // check for new drive
            if ((NEW_DRIVE_LIST[i] >= 65 && NEW_DRIVE_LIST[i] <= 89) && (PREV_DRIVE_LIST[i] == '0'))
            {

                printf("\nNew Device Inserted%d : %c", count++, NEW_DRIVE_LIST[i]);
                PREV_DRIVE_LIST[i] = NEW_DRIVE_LIST[i];
            }
        }
        // fill ALl zero
        for (int i = 0; i < MAX_LETTER; i++)
        {
            NEW_DRIVE_LIST[i] = '0';
        }
        // update NEW drive list
        getUSBStorageDeviceList(NEW_DRIVE_LIST);

        for (int i = 0; i < MAX_LETTER; i++)
        {
            // check for removed drive
            if ((PREV_DRIVE_LIST[i] >= 65 && PREV_DRIVE_LIST[i] <= 89) && (NEW_DRIVE_LIST[i] == '0'))
            {
                printf("\nDevice Removed%d : %c", count++, PREV_DRIVE_LIST[i]);
                PREV_DRIVE_LIST[i] = NEW_DRIVE_LIST[i];
            }
        }
        Sleep(500);
    }

    return 0;
}