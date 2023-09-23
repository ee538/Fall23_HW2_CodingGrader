#ifndef SOL_7_Q
#define SOL_7_Q
#include <iostream>
#include <map>
#include <string>
#include <vector>
// TODO: Don't modify this file. Your implementation should go in q.cc file.
//

//  Given an expression string, find if the input has valid brackets (i.e. { }
//  or [ ] or ( ) ).
// An input expression is valid if:
// Open brackets are closed by the same type of brackets. Open brackets must
// be closed in the correct order. An empty string is also considered valid.
// You should only check for the validity of brackets based on the above
// rules, i.e. ‘(‘, ‘)’, ‘[‘, ‘]’, ‘{‘, ‘}’, not the rest of the expression.
// Example 1: Input: "(a+b)" Output: true
// Example 2: Input: "(a+b)[c*d]{5g+h}" Output: true
// Example 3: Input: "(a+b]" Output: false
// Example 4: Input: "(7h+[5c)+7]" Output: false
// Example 5: Input: "{2k+[5j]}" Output: true
// Example 6: Input: "{2k++[5--*j]}" Output: true
bool CheckValidExpression(const std::string& input);

#endif /* SOL_7_Q */
