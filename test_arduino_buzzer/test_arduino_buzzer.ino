#include "test_arduino_buzzer.h"


int length;//这里定义一个变量，后面用来表示共有多少个音符

int tonePin=3;//蜂鸣器的pin 


void setup() 
{  
  pinMode(tonePin,OUTPUT);//设置蜂鸣器的pin为输出模式
  length = sizeof(tune)/sizeof(tune[0]);//这里用了一个sizeof函数， 可以查出tone序列里有多少个音符
} 

void loop() 
{  
  for(int x=0;x<length;x++)//循环音符的次数
  {  
    tone(tonePin,tune[x]);//此函数依次播放tune序列里的数组，即每个音符
    delay(400*duration[x]);//每个音符持续的时间，即节拍duration，是调整时间的越大，曲子速度越慢，越小曲子速度越快，自己掌握吧
    noTone(tonePin);//停止当前音符，进入下一音符
  } 

  delay(5000);//等待5秒后，循环重新开始
}
