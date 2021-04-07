/*                                                                                                                                                                                    
 * str2int.h - a utility function to take a string and attempt to make it into an integer
 
 * Safely translate a string into a single integer, if possible.                                                                                                                
 
 *                                                                                                                                                                                    
 * Gui Marinho, Apr 7 2021
                                                                                                                        
 */

#ifndef __STR2INT_H__
#define __STR2INT_H__

#include <stdbool.h>

/* str2int - Safely translate a string into an integer.
                                                                                                                                 
 *                                                                                                                                                                                    
 * We assume:                                                                                                                                                                         
 *   Caller provides valid string of characters.
                                                                                                             
 * We return                                                                                                                                                                          
 * Ture if the operation was succesful, false if not, and integer is stored in provided number parameter
                                                            
 * We guarantee:                                                                                                                                                                      
 *   we won't over-run the end of the string;                                                                                                                                                                                                                                                                                                 
 * We return:                                                                                                                                                                         
 *   true if success and false if any error.
                                                                                                                                   
 * Notes:                                                                                                                                                                             
 *   If the user enters more than one continuous integer, that is considered an error.                                                                                                       
 */
extern bool str2int(const char string[], int * number);

#endif //  __STR2INT_H__     
