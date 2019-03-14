/* 
    Manual memory management is difficult:
    * pointers created using `new` must eventually be deleted, otherwise can cause memory leaks
    * copies must be handled correctly
    * pointer to something created in the heap can be lost before getting a chance to delete
    * possibility to accidently delete from pointer more than once if it has a copy
*/



int main()
{
    return 0;
}