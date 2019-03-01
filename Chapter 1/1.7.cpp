/*
* comment pairs /* */ cannot nest.
* ''cannot nest'' is considered source code,
* as is the rest of the program
*/
int main()
{
return 0;
}
// error: empty character constant
// * ''cannot nest'' is considered source code,
//   ^~~~~~~~
// error: empty character constant
// * ''cannot nest'' is considered source code,
//                ^~
// error: 'cannot' does not name a type
// * comment pairs /* */ cannot nest.
//                       ^~~~~~