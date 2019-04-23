#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	int buttons[10] = { 1,1,1,1,1,1,1,1,1,1 };
	int nowChannel = 100;
	int breakButtons;
	char targetChannel[7];
	char pressedChannel[7];
	pressedChannel[6] = NULL;
	scanf("%s %d", &targetChannel, &breakButtons);

	for (int i = 0; i < breakButtons; i++) {
		int temp;
		scanf("%d", &temp);
		buttons[temp] = 0;
	}

	int first = atoi(targetChannel) - nowChannel;
	first = first > 0 ? first : -first;
	int second = 0;

	for (int i = 0; i < strlen(targetChannel); i++) {
		int min = 100;
		short pressedButton = 0;
		second += 1;
		for (int k = 0; k < 10; k++) {
			int temp = targetChannel[i] - '0';
			int lowTemp;
			int on = buttons[k];
			int button = k;
			if (on) {
				lowTemp = (button - temp) >= 0 ? (button - temp) : (temp - button);
				if (min > lowTemp) {
					min = lowTemp;
					pressedButton = button;
				}
			}
			
		}
		//printf("min 값 : %d, 누른버튼 : %d \n", min,pressedButton);
		pressedChannel[i] = pressedButton + '0';
	}
	//printf("일단 총 누른 횟수 : %d\n", second);
	pressedChannel[strlen(targetChannel)] = NULL;
	printf("현재 채널 : %s\n", pressedChannel);
	int temp = atoi(targetChannel) - atoi(pressedChannel);
	temp = temp > 0 ? temp : -temp;
	second += temp;
	int finish = second > first ? first : second;
	printf("%d", finish);
	
}

// 123  2 2 3 입력시 반레가 존재한다.
