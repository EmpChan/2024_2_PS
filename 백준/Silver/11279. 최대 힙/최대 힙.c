#include<stdio.h>
#include<malloc.h>
struct Heap {
   int* item;
   int size;
};

struct Heap* newheap(int size) {
   struct Heap* heap = (struct Heap*)malloc(sizeof(struct Heap));
   heap->size = 0;
   heap->item = (int*)malloc(sizeof(int) * size);
   return heap;
}

void insert(struct Heap* h,int num) {
   h->item[++h->size] = num;
   int p = h->size;
   while (p > 1 && h->item[p] > h->item[p / 2]) {
      int tmp = h->item[p];
      h->item[p] = h->item[p / 2];
      h->item[p / 2] = tmp;
      p /= 2;
   }
}
void delete(struct Heap* h) {
   if(h->size ==0){
      printf("0\n");
      return;
   }
   printf("%d\n", h->item[1]);
   h->item[1] = h->item[h->size];
   h->size--;
   int p = 1;
   while (p * 2 <= h->size || p * 2 + 1 <= h->size) {
      if (p * 2 + 1 <= h->size && h->item[p * 2 + 1] > h->item[p * 2]) {
         if (h->item[p] < h->item[p * 2 + 1]) {
            int tmp = h->item[p];
            h->item[p] = h->item[p * 2 + 1];
            h->item[p * 2 + 1] = tmp;
            p = p * 2 + 1;
         }
         else break;
      }
      else {
         if (h->item[p] < h->item[p * 2]) {
            int tmp = h->item[p];
            h->item[p] = h->item[p * 2];
            h->item[p * 2] = tmp;
            p = p * 2;
         }
         else break;
      }
   }
}
int main() {
   int n, m;
   scanf("%d", &n);
   struct Heap* h = newheap(n);
   for (int i = 0; i < n; i++) {
      scanf("%d", &m);
      if (m == 0) {
         delete(h);
      }
      else {
         insert(h, m);
      }
   }
   return 0;
}