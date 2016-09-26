(define (max_two_sum a b c)
  (cond (and (> a b) (> b c)) (+ a b))
  (cond (and (> a b) (> c b)) (+ a c))
  (cond (and (> b a) (> c a)) (+ b c)))