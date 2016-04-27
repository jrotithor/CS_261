/*
  File: game.h
  Interface definition of the animal game
*/
#ifndef __GAME_H
#define __GAME_H
# ifndef TYPE
# define TYPE      char*
# endif
struct BSTree;
struct Node * addNode(TYPE val);
void traverseTree(struct Node * cur);
void search(struct BSTree * tree);


#endif