/* 다음 시에 나타난 알파벳 대소문자의 출현 횟수를 출력하시오.

In the clear morning, I transplant a tree from the yard to a forest.
I am writing a letter with dew drops in selected, treasured words,
wiping my hands with an apron, the deep mind concentrated.
As a river cannot fill the sea even if it reached there, so is my thought.
Long accumulated times form dew in the eye, drop by drop.
It feels like yesterday when I innocently sown seed; yet it has been
twenty-eight years for its budding and growing in all seasons.
It grew with branches and flowers to be a pride and joy of the garden;
it endured the scorching summer and severe cold winter every year.
When the tree stands in the forest, it may get weary, but I move it
with a joyful heart. I know how all other trees were like, for I believe
in the big hands that raised them, blocking the storm, covering the frost.
The hands convince me of their protection, flowering, and fruitfulness.
I can see two trees standing side by side on one hill, blooming fruitfully.
As singing flowers bloom and the sound of bells ring,
I pray for plentiful bearing of fruits.
Let us all stand as majestic trees every time in the eyes of love.
*/

#include <stdio.h>
#include <ctype.h>

char str[] = "In the clear morning, I transplant a tree from the yard to a forest."
"I am writing a letter with dew drops in selected, treasured words,"
"wiping my hands with an apron, the deep mind concentrated."
"As a river cannot fill the sea even if it reached there, so is my thought."
"Long accumulated times form dew in the eye, drop by drop."
"It feels like yesterday when I innocently sown seed; yet it has been"
"twenty - eight years for its budding and growing in all seasons."
"It grew with branches and flowers to be a pride and joy of the garden;"
"it endured the scorching summer and severe cold winter every year."
"When the tree stands in the forest, it may get weary, but I move it"
"with a joyful heart. I know how all other trees were like, for I believe"
"in the big hands that raised them, blocking the storm, covering the frost."
"The hands convince me of their protection, flowering, and fruitfulness."
"I can see two trees standing side by side on one hill, blooming fruitfully."
"As singing flowers bloom and the sound of bells ring,"
"I pray for plentiful bearing of fruits."
"Let us all stand as majestic trees every time in the eyes of love.";

struct char_data {
	char c;
	int n;
} data[52];   // 알파벳 대문자 26자 + 소문자 26자

int count = 0;

void push_ch(char c)
{
	int i;

	for (i = 0; i < count; i++)		// 이전에 저장된 문자/숫자면...
		if (isalpha(c) && c == data[i].c) {
			data[i].n++;
			return;
		}

	if (isalpha(c)) {				// 새로운 문자/숫자면...
		data[count].c = c;
		data[count].n = 1;
		count++;		
	}
}

int main(void)
{
	int i;

	for (i = 0; str[i]; i++)
		push_ch(str[i]);

	for (i = 0; i < count; i++)
		printf("%c: %i\n", data[i].c, data[i].n);

	return 0;
}
