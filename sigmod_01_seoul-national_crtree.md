# Optimizing multidimensional index trees for main memory access

🔎    **Tags**                 <span style="background-color:  #e0b0ff;border-radius:5px;">Cache-conscious Index</span>    <span style="background-color:  #e0b0ff;border-radius:5px;"> In-memory Index </span>   
🧟    **Authors**              Kihong Kim, Sang k. Cha, Keunjoo Kwon      
🚏    **Venue**               SIGMOD   
📅    **Year**                 2001   
🕦    **Created**              March 15, 2022  
⏳    **Status**                Not Complete  
🔗    **Paper**                https://dl.acm.org/doi/abs/10.1145/376284.375679   



# What?
They propose **CRTree**: a cache-conscious R Tree, which utilizes **QRMBR**: a compression scheme (proposed by them) which represents the MBR of a child node with respect to its parent node (this is called RMBR) and quantizes the resultant RMBR using a fixed number of bits. 

# Why?
For in-memory indexes memory access is the new bottleneck because of the gap between the CPU and DRAM speed. Each memory (DRAM) access costs 10x processor cycles, whereas each cache (SRAM) access costs 1/2 processor cycles.

# Gist
Pack as many nodes as you can in cache to reduce the number of memory accesses, i.e., cache miss

# Takeaways
* To improve the cache behavior of an index, reduce the height of thre tree, i.e., increase the fan out of thre tree. (not applicable for R-tree since the keys of a R-tree node is much larger: eliminating only chlid pointers will not be able to free up enough space to pack more entries in a node)
    * eliminate child pointers from a node
    * set node size = n * cache block size  


# Details
Desiderata for MBR compression:

- Overlap check without decompression: To check the overlap between the query rectangle and a MBR, DO NOT DECOMPRESS the compressed MBR. Rather COMPRESS the query rectangle ONE-TIME for all overlap checks
- Simplicity: It should be computationally LIGHTWEIGHT and shold be performed with the CACHED data

RMBR (Relative MBR):  

Find the coordinates of the lower and higher corner of the child MBR (C)with respect to the lower corner of the parent MBR (P). (It cuts off the leading zeros) 

Parameters: 
- Parent MBR: $P= (P.xl, P.yl, P.xh, P.xl)$
- Child MBR: $C= (C.xl, C.yl, C.xh, C.xl)$   

$$RMBR_P(C) = (C.xl – P.xl, C.yl – P.yl, C.xh – P.xl, C.yh – P.yl)$$

QRMBR (Qunatized Relative MBR):  

Take the higher corner of the parent MBR (P) in contention as well while calculating the coordinates of the child MBR (C). (It cuts off the trailing zeros)

One thing to notice: for calculating the lower corner of the child MBR it uses $\phi$ and for calculating the higher corner it uses $\Phi$. Hence, for extreme cases such as $r\le a$ or $r\ge b$ the difference between the 2 corner along any dimension will be at least $1$ (check the otherwise case as well: one uses ceiling, another uses floor) 

Parameters: 
- Parent MBR: $P= (P.xl, P.yl, P.xh, P.xl)$
- Child MBR: $C= (C.xl, C.yl, C.xh, C.xl)$   
- $\phi_{a, b, l}: \R \to [0, l-1]$
- $\Phi_{a, b, l}: \R \to [1, l]$
- Quantization Level: $l$

![equation](https://latex.codecogs.com/svg.image?QRMBR_P(C)&space;=&space;(\phi_{P.xl,&space;P.xh,&space;l}(C.xl),&space;&space;\phi_{P.yl,&space;P.yh,&space;l}(C.yl),\Phi_{P.xl,&space;P.xh,&space;l}(C.xh),&space;&space;&space;\Phi_{P.xl,&space;P.xh,&space;l}(C.yh)))

$$
QRMBR_P(C) = (\phi_{P.xl, P.xh, l}(C.xl),  
\phi_{P.yl, P.yh, l}(C.yl),   \\
\Phi_{P.xl, P.xh, l}(C.xh),   
\Phi_{P.xl, P.xh, l}(C.yh))
$$ 

$$
\phi_{a, b, l}(r) = 
\begin{cases}
      0 & r \le a\\
      l-1 & r \ge b\\
    \lfloor\frac{l(r-a)}{b-a}\rfloor & \text{otherwise}
\end{cases}
$$  

$$\Phi_{a, b, l}(r) = 
\begin{cases}
      1 & r \le a\\
      l & r \ge b\\
    \lceil\frac{l(r-a)}{b-a}\rceil & \text{otherwise}
\end{cases}
$$  