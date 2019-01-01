#include<bits/stdc++.h>
#include<graphics.h>

using namespace std;

void triangle(int x1,int y1,int x2,int y2,int x3,int y3)
{
   line(x1,y1,x2,y2);
   line(x2,y2,x3,y3);
   line(x3,y3,x1,y1);
}

void rotate(int arr[],int Angle)
{
    int a1,b1,a2,b2,a3,b3;
    a1=arr[0]*cos(Angle)-arr[1]*sin(Angle);
    b1=arr[0]*sin(Angle)+arr[1]*cos(Angle);
    a2=arr[2]*cos(Angle)-arr[3]*sin(Angle);
    b2=arr[2]*sin(Angle)+arr[3]*cos(Angle);
    a3=arr[4]*cos(Angle)-arr[5]*sin(Angle);
    b3=arr[4]*sin(Angle)+arr[5]*cos(Angle);
    triangle(a1,b1,a2,b2,a3,b3);
}

int main(){

int gd=DETECT, gm;
initgraph(&gd,&gm,"c:\\turbo3\\bgi");
int arr[8],xt,yt,xs,ys,angle;
for(int i=0;i<6;i+=2){
    cout<<"Enter x coordinate of vertex "<<(i+2)/2<<":";
    cin>>arr[i];
    cout<<"Enter y coordinate of vertex "<<(i+2)/2<<":";
    cin>>arr[i+1];
}

arr[6]=arr[0];
arr[7]=arr[1];

drawpoly(4,arr);

cout<<"Enter x transformation:";
cin>>xt;
cout<<"Enter y transformation:";
cin>>yt;

for(int i=0; i<8; i+=2)
    arr[i]+=xt;
for(int j=1; j<8; j+=2)
    arr[j]+=yt;

cleardevice();
drawpoly(4,arr);

cout<<"Enter scaling factor for x:";
cin>>xs;
cout<<"Enter scaling factor for y:";
cin>>ys;

for(int j=0;j<8; j+=2)
    arr[j]*=xs;
for(int k=0; k<8; k+=2)
    arr[k]*=ys;

cleardevice();
drawpoly(4,arr);



cout<<"Enter angle for rotation in degrees:";
cin>>angle;
angle=(int)((float)(3.14/180)*angle);
rotate(arr,angle);
/*for(int i=0;i<6;i++){
    float temp1=arr[i], temp2=arr[i+1];
    arr[i]=temp1*cos(rad) - temp2*sin(rad);
    arr[i+1]=temp1*sin(rad) + temp2*cos(rad);
}*/

cleardevice();
drawpoly(4,arr);
getch();
closegraph();
return 0;
}

