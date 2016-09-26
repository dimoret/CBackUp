(define (subtriplicate x)
	
(define  (good-enough? guess x)
		(< (abs (- (cube-square guess) x)) 0.0001))
		
	(define (improve guess x)
		(three-average (* 2 guess) (/ x (square guess))))
		
	(define (three-average x y)
		(/ (+ x y) 3))
		
	(define (cube-square x)
		(* x x x))
		
	(define (abs x)
		(if (< x 0) (- 0 x)
			x))
			
	(define (square x)
		(* x x))
	
	(define (sqrt-iter guess x)
		(if (good-enough? guess x) guess
			(sqrt-iter (improve guess x) x)))
			
	(sqrt-iter 1.0 x))