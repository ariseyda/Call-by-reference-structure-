#include<stdio.h>

//Sending Structures with Reference
//We will send the struct pointer as a parameter to a function.
//Call by reference

void show(struct Fruit *p);
struct Fruit change(struct Fruit fruit1);

struct Fruit {
	
	char name[20];
	char color[20];
    char taste[20];
	
};

int main(){

	struct Fruit fruit={"Watermelon","pink","sweet"};
	
	fruit_show(&fruit);
	new(&fruit);
	
	printf("Name of fruit:%s\nColor of fruit:%s\nTaste of fruit:%s",fruit.name,fruit.color,fruit.taste);
	
	return 0;
}

void fruit_show(struct Fruit *p){
	
	printf("Name of fruit:%s\nColor of fruit:%s\nTaste of fruit:%s\n",p->name,p->color,p->taste);
}
void new(struct Fruit *fruit1){
	
	printf("Please enter name of fruit:");
	scanf("%s",&fruit1->name);
	printf("Please enter color of fruit:");
	scanf("%s",&fruit1->color);
	printf("Please enter taste of fruit:");
	scanf("%s",&fruit1->taste);
}





