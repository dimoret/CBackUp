(define (exp a n)
(define (exp-iter a counter product)(if (= counter 0)
 product (exp-iter a (- counter 1) (* a product))))(exp-iter a n 1))