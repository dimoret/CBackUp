(define (sqrt-three guess x)
		(if(good-enough? guess x)
			guess
			(sqrt-three (improve guess x) x)))