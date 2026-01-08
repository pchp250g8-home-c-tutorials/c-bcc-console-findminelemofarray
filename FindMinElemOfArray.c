#include <stdio.h>
#include <tchar.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int _tmain(int argc, _TCHAR* argv[]) 
{
	int nElems, *iNumbers;
    int iMin, nIndex;
    printf("Input a count of elements in array\r\n");
    scanf("%d", &nElems);
    if (nElems == 0)
    {
        printf("Empty arrays not allowed\r\n");
        getchar();
        getc(stdin);
        return 1;
    }
    iNumbers = (int*)calloc(nElems, sizeof(int));
    if (iNumbers == NULL)
    {
        printf("Out of memory\r\n");
        getchar();
        getc(stdin);
        return 2;
    }
    srand(time(NULL));
    printf("Generating array by filling %d elements\r\n", nElems);
    for (int i = 0; i < nElems; i++)
    {
        iNumbers[i] = 1 + rand() % 100;
        printf("%d ", iNumbers[i]);
    }
    iMin = iNumbers[0];
    nIndex = 0;
    for (int i = 1; i < nElems; i++)
    {
        if (iNumbers[i] < iMin)
        {
            iMin = iNumbers[i];
            nIndex = i;
        }
    }
    printf("\r\nFound minimum element: %d with index %d\r\n", iMin, nIndex);
    getchar();
    getc(stdin);
    return 0;
}
