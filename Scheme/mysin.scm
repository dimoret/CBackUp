(define (cube x)
(* x x x))

(define (transform x)
(- (* 3 x) (* 4 (cube x))))

(define (abs x)
(if (< x 0)
(- 0 x)
x))

(define (sin x)
(if (< (abs x) 0.1)
	x
	(transform (sin (/ x 3)))))