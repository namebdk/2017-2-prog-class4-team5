# README file for TEAM[4,5]:

This text file describes brief but precise and complete specification of project including:
- funtion descriptions: name, input/output parameters
- declaration of important data and data types to be included in user header file
- your team's brief ideas of implementations

--------------------------------------------------------------------------------------------------
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

--------------------------------------------------------------------------------------------------
<Declaration of important data and data types in user header file>

	a. name: linkedlist.h
	b. Headers included
   	   - stdio.h 
   	   - stdlib.h
  	   - string.h 
	c. struct name: node
	d. Data type included in struct
    	   - int value
    	   - struct node *next
	e. stuct pointer name: link
	f. ownership: Jeon Hyunuk 

--------------------------------------------------------------------------------------------------
<Function descriptions>

1. create node
	a. name: createNode
	b. input parameter: int value (struct-> int value에 들어가게 됨)
	c. output parameter: cur 
	d. file name: createNode.c 
	e. ownership: Hoseong You

2. append node
	a. function name: append
	b. input parameter: link head, link cur
	c. output parameter: head
	d. file name: appendnode.c 
	e. ownership: Hoseong You

3. reversing liked list
	a. name: reverse
	b. input parameter: link head
	c. output parameter: link temp_2 (reverse linked list의 새로운 head 역할)
	d. file name: reverse.c 
	e. ownership: Hoseong You

4. printlist
	a. name: printList
	b. input parameter: link head
	c. output parameter: cnt
	d. file name: printlist.c 
	e. ownership: YoonHee Kim

5. printing middle value
	a. name: middle 
	b. input parameter: link head, int cnt
	c. output parameter: [void]
	d. file name: middle.c 
	e. ownership: Yunho Choi
	
6. remove odd value (Include Two functions)
	a. name: remove_node
	b. input parameter: link *head, link p, link removed
	c. output parameter: [void]
	d. file name: remove_node.c
	e. ownership: SiHyun Park

	a. name: node_which
	b. input parameter: link *head, link h
	c. output parameter: [void]
	d. file name: node_which.c
	e. ownership: SiHyun Park

--------------------------------------------------------------------------------------------------
<team 5's idea>

1. create node
	a. 만들고자 하는 노드에 들어 갈 value 값을 매개변수로 받는다.
	b. 구조체 포인터(cur)를 선언하고, 동적할당을 하여 포인터가 노드를 가리키게끔 한다.
	c. 동적할당이 제대로 되었는지 검사한다.
	d. 노드를 가리키는 포인터(cur)를 반환한다.

2. append node
	a. head와 cur을 매개변수로 받는다.
	b. 노드의 next가 null을 가리킬 때 까지 traverse한다.
	c. next가 null이면 마지막 노드이므로 생성된 노드를 마지막 노드와 연결한다.
	d. head를 반환한다. 

3. reversing liked list
	a. 연결리스트의 방향을 전부 뒤집어서 역방향 연결리스트로 수정한다.
	b. 임시 구조체 포인터 두 개를 이용하여 반복문을 통해 연결리스트를 뒤집는다. 
	c. 최종적으로 기존 연결리스트의 마지막노드를 가리키는 구조체 포인터를 새로운 헤드로 반환한다. 

4. printlist
	a. head를 가리키는 포인터를 매개변수로 받는다. 
	b. 첫 번째 노드의 value부터 출력하고, 다음 노드로 이동한다.
	c 노드의 next가 null을 가리킬 때 까지 반복한다.
	d. 노드의 개수를 반환한다.

5. printing middle value
	a. 노드의 개수와 head를 매개변수로 받는다.
	b. 입력 자료의 개수가 홀수인지, 짝수인지에 따라 출력할 중간값의 개수를 나눈다.
	c. 홀수이면 node를 중간까지 이동하고 value를 출력하고,
 짝수이면 중간까지 이동해서 value를 출력하고 한 번 더 이동하여 출력한다.
	
6. remove odd value (Include Two functions)



<목표>
기본 header 파일을 먼저 작성하여 github에 올리고 각자 맡은 함수를 header파일을 이용해서 구현한다.
