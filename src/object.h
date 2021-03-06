/*************************************************************************
    > File Name: object.h
  > Author:perrynzhou 
  > Mail:perrynzhou@gmail.com 
  > Created Time: Tuesday, August 11, 2020 PM07:00:34
 ************************************************************************/

#ifndef _OBJECT_H
#define _OBJECT_H
#include <stdint.h>
typedef enum object_type_t
{
  OBJECT_LIST = 0,
  OBJECT_STRING,
  OBJECT_HASHTABLE,
  OBJECT_SKIPLIST,
} object_type;
typedef struct object_t
{
  uint8_t type;
  char *key;
  void *value;
  size_t value_len;
} object;
object *object_create(const char *key, void *value, uint8_t type);
const char *object_key(object *obj);
uint8_t object_type(object *obj);
void *object_value(object *obj);
object *object_destroy(const char *key, void *value, uint8_t type);
#endif
