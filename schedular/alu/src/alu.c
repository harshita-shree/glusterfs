#include "schedular.h"

static struct xlator *
alu_schedular (struct xlator *xl, int size)
{
  /* This file schedules the file in one of the child nodes */
  return NULL;
}

struct sched_struct sched = {
  .schedule = alu_schedular
};
