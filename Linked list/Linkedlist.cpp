#include "Linkedlist.h"
#include<iostream>
using namespace std;
linked_list::linked_list() :head(NULL)
{}
void linked_list::createnode(int value)
{
	node* new_node = new node;
	new_node->data = value;
	new_node->next = NULL;
}
void linked_list::insert_start(int value)
{
	node* new_node = new node;
	new_node->data = value;
	if (head == NULL)
		new_node->next = NULL;
	else
		new_node->next = head;
	head = new_node;
}
void linked_list::insert_last(int value)
{
	node* new_node = new node;
	new_node->data = value;
	new_node->next = NULL;
	if (head == NULL)
		head = new_node;
	else
	{
		node* Temp = head;
		while (Temp->next != NULL)
		{
			Temp = Temp->next;
		}
		Temp->next = new_node;
	}
}
void linked_list::insert_position(int pos, int value)
{
	node* pre = new node;
	node* cur = new node;
	node* temp = new node;
	cur = head;
	for (int i = 1; i < pos; i++)
	{
		pre = cur;
		cur = cur->next;
	}
	temp->data = value;
	pre->next = temp;
	temp->next = cur;
}
void linked_list::delete_first()
{
	node* temp = new node;
	temp = head;
	head = head->next;
	delete temp;
}
void linked_list::delete_last()
{
	node* current = new node;
	node* previous = new node;
	current = head;
	while (current->next != NULL)
	{
		previous = current; current = current->next;
	}
	previous->next = NULL;
	delete current;
}
void linked_list::delete_position(int pos)
{
	node* current = new node;
	node* previous = new node;
	current = head;
	for (int i = 1; i < pos; i++)
	{
		previous = current; current = current->next;
	}
	previous->next = current->next;
}
void linked_list::display()
{
	node* temp = new node;
	temp = head;
	while (temp != NULL)
	{
		cout << temp->data << "\t";
		temp = temp->next;
	}
}