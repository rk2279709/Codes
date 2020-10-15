#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41
box is_lower_than_max_height(box);
typedef struct
{
    int length;
    int width;
    int height;
}box;



box is_lower_than_max_height(box max[n])
{
    for(i=0;i<n;i++)
    printf("%d",max[i].height);

}


int main()
{
	int n;
	scanf("%d", &n);\\no of boxes\\


	box *boxes = malloc(n * sizeof(box));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for (int i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])) {
			printf("%d\n", get_volume(boxes[i]));
		}
	}
	return 0;
}
