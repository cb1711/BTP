#ifndef _lineSearch_h
#define _lineSearch_h

#define SIGMA 0.8
#define BETA 0.5
#define LAMBDA 5.0
#define CLUSTERS 200

/*Returns the inner product of the given arrays A and B of size size*/
float innerProduct(float *A, float *B, int size);

/*Returns value of likelihood*/
void likelihood(float *Q, bool *selected, float *user_sum, float **items, float **users, int numItems, int *item_sparse_csr_r, int *user_sparse_csr_c, int start_index, int totalItems, bool flag);

/*Function for linesearch */
void linesearch(float **items, float *user_sum, float **users, float **gradient, int numItems, int start_index, int totalItems, int *item_sparse_csr_r, int *user_sparse_csr_c);

#endif
