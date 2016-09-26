(define (exp a n)
	(if (= n 0) 1
		(* a (exp a (- n 1)))))