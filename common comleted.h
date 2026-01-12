/**
 * @file     common.h
 * @Author   Michael Kosyakov and Evgeniy Ivanov (ifmo.distributedclass@gmail.com)
 * @date     March, 2014
 * @brief    Common definitions and constants for for programming assignments
 *
 * Students must not modify this file!
 */

#ifndef __IFMO_DISTRIBUTED_CLASS_COMMON__H
#define __IFMO_DISTRIBUTED_CLASS_COMMON__H

// Not extern for simplicity only
static const char * const events_log = "events.log";
static const char * const pipes_log = "pipes.log";


/*тесты программы сдать до 18:00. привязать тесты к блоку и сделать корректные данные
(использумые данные: path, int, massive medoh)*/
# tests for correct retrieval of stock info given a symbol

    def test_1(self):
        op = c.DB_CRUD_ops()
        expected_output = "[METHOD EXECUTED] get_stock_info\n[QUERY] SELECT * FROM stocks WHERE symbol = 'MSFT'\n[RESULT] ('2022-01-06', 'MSFT', 300.0)"
        actual_output = op.get_stock_info('MSFT')
        self.assertEqual(actual_output, expected_output)

    # tests for correct defense against SQLi in the case where a user passes more than one query or restricted characters
    def test_2(self):
        op = c.DB_CRUD_ops()
        expected_output = "[METHOD EXECUTED] get_stock_info\n[QUERY] SELECT * FROM stocks WHERE symbol = 'MSFT'; UPDATE stocks SET price = '500' WHERE symbol = 'MSFT'--'\nCONFIRM THAT THE ABOVE QUERY IS NOT MALICIOUS TO EXECUTE"
        actual_output = op.get_stock_info("MSFT'; UPDATE stocks SET price = '500' WHERE symbol = 'MSFT'--")
        self.assertEqual(actual_output, expected_output)

    # tests for correct retrieval of stock price
    def test_3(self):
        op = c.DB_CRUD_ops()
        expected_output = "[METHOD EXECUTED] get_stock_price\n[QUERY] SELECT price FROM stocks WHERE symbol = 'MSFT'\n[RESULT] (300.0,)\n"
        actual_output = op.get_stock_price('MSFT')
        self.assertEqual(actual_output, expected_output)

    # tests for correct update of stock price given symbol and updated price
    def test_4(self):
        op = c.DB_CRUD_ops()
        expected_output = "[METHOD EXECUTED] update_stock_price\n[QUERY] UPDATE stocks SET price = '300' WHERE symbol = 'MSFT'\n"
        actual_output = op.update_stock_price('MSFT', 300.0)
        self.assertEqual(actual_output, expected_output)
    
    # tests for correct execution of multiple queries
    def test_5(self):
        op = c.DB_CRUD_ops()
        query_1 = "[METHOD EXECUTED] exec_multi_query\n[QUERY]SELECT price FROM stocks WHERE symbol = 'MSFT'\n[RESULT] (300.0,) "
        query_2 = "[QUERY] SELECT * FROM stocks WHERE symbol = 'MSFT'\n[RESULT] ('2022-01-06', 'MSFT', 300.0) "
        expected_output = query_1 + query_2
        actual_output = op.exec_multi_query("SELECT price FROM stocks WHERE symbol = 'MSFT'; SELECT * FROM stocks WHERE symbol = 'MSFT'")
        self.assertEqual(actual_output, expected_output)
    
    # tests for correct execution of user script
    def test_6(self):
        op = c.DB_CRUD_ops()
        expected_output = "[METHOD EXECUTED] exec_user_script\n[QUERY] SELECT price FROM stocks WHERE symbol = 'MSFT'\n[RESULT] (300.0,)"
        actual_output = op.exec_user_script("SELECT price FROM stocks WHERE symbol = 'MSFT'")
        self.assertEqual(actual_output, expected_output)


#endif // __IFMO_DISTRIBUTED_CLASS_COMMON__H

/*блок теста знаков, данных вводимых пользователем, фаерволл знаков, данных.*/
     #a block list (aka restricted characters) that should not exist in user-supplied input 
             restricted_chars = ";%&^!#-"

            #checks if input contains characters from the block list
            has_restricted_char = any([char in query for char in restricted_chars])

            #checks if input contains a wrong number of single quotes against SQL injection
            correct_number_of_single_quotes = query.count("'") == 2

            console.log ('Model response:', modelResponse);