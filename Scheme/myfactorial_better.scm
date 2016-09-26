(define (factorial-better n)	
	(
	define (factorial-iter product counter max-count)
	(
	if (> counter max-count)
	product
	(factorial-iter (* counter product) (+ counter 1) max-count)
	)
	)
(factorial-iter 1 1 n))