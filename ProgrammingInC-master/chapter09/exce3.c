// 接受两个struct time 参数，返回一个struct time 类型的参数，表示这两个参数之间流逝的时间
// 注意穿越午夜的特殊情况。
#include <stdio.h>

struct time{
	int hours;
	int minutes;
	int seconds;
};

struct time elapsed_time(struct time time1, struct time time2){
	struct time time3;
	
	if(time2.hours >= time1.hours){
		time3.hours = time2.hours - time1.hours - 1;
		time3.minutes = time2.minutes + (59 - time1.minutes);
		time3.seconds = time2.seconds + (60 - time1.seconds);
	
		if(time3.seconds >= 60){
			time3.seconds -= 60;
			time3.minutes += 1;
			if(time3.minutes >=60){
				time3.minutes -= 60;
				time3.hours += 1;
			}
		}
		
		return time3;
	}
	// 穿越午夜的情况
	else{
		time3.hours = time2.hours + (24 - time1.hours);
		time3.minutes = time2.minutes + (59 - time1.minutes);
		time3.seconds = time2.seconds + (60 - time1.seconds);
	
		if(time3.seconds >= 60){
			time3.seconds -= 60;
			time3.minutes += 1;
			if(time3.minutes >=60){
				time3.minutes -= 60;
				time3.hours += 1;
			}
		}
		
		return time3;
	}
};

void printTime(struct time t){
		printf("流逝的时间为%i小时%i分%i秒。\n", t.hours, t.minutes, t.seconds);
}

int main(void){
	struct time time1, time2, time3;
	struct time elapsed_time(struct time time1, struct time time2);
	
	printf("请输入第一个时间: (24:59:59) \n");
	scanf("%i :%i :%i", &time1.hours, &time1.minutes, &time1.seconds);
	printf("请输入第二个时间: (24:59:59) \n");
	scanf("%i :%i :%i", &time2.hours,&time2.minutes, &time2.seconds);
	
	time3 = elapsed_time(time1, time2);
	
	printTime(time3);
	
	return 0;
}
