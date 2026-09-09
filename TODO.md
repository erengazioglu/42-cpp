# TODO

- cpp00: 100/100
- cpp01: 100/100
- cpp02: 95/100
- cpp03: _waiting eval_
- cpp04: _not finished_
- cpp05: _next circle_
- cpp06: _next circle_
- cpp07: _next circle_
- cpp08: _next circle_
- cpp09: _next circle_

# cpp04

## ex01

- [x] finish writing `Brain.cpp`
- [x] write constructor announcements for testing
- [x] add private `_brain` member to `Cat` and `Dog`
- [ ] update constructor and destructor to create and delete `_brain`
- [ ] update copy constructor and assignment to deep copy the `_brain`
- [ ] add `self != &src` check for copies, to not leak extra brains
- [ ] make main tests with array of 10? but make it parametric (`count = 10, while for i < count / 2`)
- [ ] check leaks with `valgrind`