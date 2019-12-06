/*
 This file is part of ``kdtree'', a library for working with kd-trees.
 Copyright (C) 2007-2011 John Tsiombikas <nuclear@member.fsf.org>

 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions are met:

 1. Redistributions of source code must retain the above copyright notice, this
 list of conditions and the following disclaimer.
 2. Redistributions in binary form must reproduce the above copyright notice,
 this list of conditions and the following disclaimer in the documentation
 and/or other materials provided with the distribution.
 3. The name of the author may not be used to endorse or promote products
 derived from this software without specific prior written permission.

 THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR IMPLIED
 WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO
 EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
 OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY
 OF SUCH DAMAGE.
 */
#ifndef _KDTREE_H_
#define _KDTREE_H_

#ifdef __cplusplus
extern "C" {
#endif

struct kdtree;

/* create a kd-tree for "k"-dimensional data */
struct kdtree *kd_create(int k);

/* free the struct kdtree */
void kd_free(struct kdtree *tree);

/* insert a node, specifying its position, and optional data */
int kd_insert(struct kdtree *tree, const float *pos, void *data);

/* Find the nearest node from a given point */
int kd_nearest(struct kdtree *tree, const float *pos, void **res);

#ifdef __cplusplus
}
#endif

#endif	/* _KDTREE_H_ */
