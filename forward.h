/* $Id$ 
 * (c) 2000-2001 IC&S, The Netherlands */

#ifndef FORWARD_H_
#define FORWARD_H_

#define FW_SENDMAIL SENDMAIL

int pipe_forward(FILE *instream, struct list *targets, char *from,  char *header, unsigned long databasemessageid);

#endif
