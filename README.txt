# README file for TEAM[4,5]:

This text file describes brief but precise and complete specification of project including:
- funtion descriptions: name, input/output parameters
- declaration of important data and data types to be included in user header file
- your team's brief ideas of implementations

- - -
<프로그램 개요>
 - 사용자로부터 정수값을 입력받는다.(CTRL+Z가 입력될 때까지) 
 - 입력되는 정수값은 linked list를 구성하면서 node에 저장한다.


<역할분담>
-header 파일: 전현욱

-입력된 자료의 개수를 출력, 입력자료를 입력 역순으로 출력, append node, create node: 유호성

-입력자료의 중간위치에 있는 자료의 값 출력, 입력자료를 입력 순으로 출력 : 최윤호

-입력자료에서 홀수번째 자료를 모두 삭제 : 박시현

-남은 자료를 순서대로 출력 : 김윤희

-Readme 파일 : 모두



<function descriptions>

1. reversing liked list :
	a. name : reverse
	b. input parameter : head
	c. output parameter : temp_2 (reverse linked list의 새로운 head 역할)
	d. file name : reverse.c 
	e. ownership : Hoseong You

2. create node : 
	a. name : createNode
	b. input parameter : N (struct-> int value에 들어가게 됨)
	c. output parameter : cur 
	d. file name : createNode.c 
	e. ownership : Hoseong You

3. append node :
	a. function name : append
	b. input parameter : head, cur
	c. output parameter : head
	d. file name : appendnode.c 
	e. ownership : Hoseong You

4. printlist
	a. name : printList 
	b. input parameter : head
	c. output parameter : cnt
	d. file name : printList.c 
	e. ownership : 

5. printing middle value
	a. name : middle 
	b. input parameter : head, cnt
	c. output parameter : [void]
	d. file name : middle.c 
	e. ownership : Yunho Choi



<declaration of important data and data types>

1. header file name: linkedlist.h

2. struct name: node
 - struct node includes:
   int value, struct node *next

3. struct pointer name: link



<team 5's idea>



<목표>
기본 header 파일을 먼저 작성하여 github에 올리고 각자 맡은 함수를 header파일을 이용해서 구현한다.
