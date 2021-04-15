#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "functions.h"
#include "unity.h"
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}
void test_receive(void)
{
  TEST_ASSERT_EQUAL(0,receive());
  //TEST_ASSERT_EQUAL(0, div(10, 0));
}
void test_display(void)
{
    TEST_ASSERT_EQUAL(0,display());

}

int main()
{UNITY_BEGIN();
    //int order_count = 0, served_count =0, waiting_now = 0;
    printf ("\t\t     Welcome To Cafe Aroma\n");
    while (1){
        printf ("1. menu\n2. Order\n3. Serve\n4. Display \n5. Exit the program\n");
        int in;
        scanf ("%d", &in);
        getchar ();
        switch (in){
        
            case 1:{
                items();
                break;
        }
            case 2: {
                order();
                break;
            }
            case 3: {
                receive();
                break;
            }
            case 4: {
                display();
                break;
            }
            case 5: {
                return 0;
            }
            
        }break;
    }
    RUN_TEST(test_receive);
    RUN_TEST(test_display);
 // RUN_TEST(test_delete);
  //RUN_TEST(test_enterinfo);
 
  /* Close the Unity Test Framework */
  return UNITY_END(); 
}