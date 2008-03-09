/* Do not edit this file. It was automatically generated. */

#ifndef HEADER_UsersTable
#define HEADER_UsersTable
/*
htop - UsersTable.h
(C) 2004-2006 Hisham H. Muhammad
Released under the GNU GPL, see the COPYING file
in the source distribution for its full text.
*/

#include "Hashtable.h"
#include "String.h"

#include <stdio.h>
#include <strings.h>
#include <pwd.h>
#include <sys/types.h>

#include "debug.h"
#include <assert.h>

typedef struct UsersTable_ {
   Hashtable* users;
} UsersTable;

UsersTable* UsersTable_new();

void UsersTable_delete(UsersTable* this);

char* UsersTable_getRef(UsersTable* this, unsigned int uid);

extern void UsersTable_foreach(UsersTable* this, Hashtable_PairFunction f, void* userData);

#endif
