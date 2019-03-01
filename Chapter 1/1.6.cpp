std::cout << "The sum of " << v1;
          << " and " << v2;
          << " is " << v1 + v2 << std::endl;
//It is not legal because the expression ends with the ; after v1.
//The output operators in the following lines cannot write into std::out.
//Removing the semicolon (;) at the end of line 1 & 2 will solve the problem.