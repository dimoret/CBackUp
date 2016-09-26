(define (good-enough? guess x)
		(< (abs(- (sqaure guess) x)) 0.001))