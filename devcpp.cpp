#include <stdio.h>
#include <string.h>
int main(){
	char qualifications[50];
	char result[50];
	printf("Enter your Qualification : ");
	scanf("%s",qualifications);
	if(strcmp(qualifications, "Masters")==0){
		printf("Enter your result : ");
		scanf("%s", result);
		if (strcmp(result, "Pass")==0){
			printf("congratulations you are Selected");
		} else {
			printf("you are rejected");
		}
	} else {
		printf("Not Eligible for Interview");
	}
	return 0;
}