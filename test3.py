import unittest
from selenium import webdriver
from selenium.webdriver.chrome.service import Service
from main import MainTest
from selenium import webdriver
from time import sleep
from selenium.webdriver.chrome.service import Service
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.common.by import By
import json
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC

import os
from webdriver_manager.chrome import ChromeDriverManager
from selenium.webdriver.chrome.options import Options

# cmd - pytest test.py -v --junitxml="result.xml"
def crypto(x):
        return (x*x-x+1)
 
class TestSimpleTest(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        options = Options()
        cls.main_test = MainTest() 
        cls.data = cls.main_test.main_method() 




        ##cls.data1=cls.main_test.second_method()
    

        
    def test_get_country(self):   
        self.assertEqual(self.data["countrylist"][0], "DAUSA")
        self.assertEqual(self.data["countrylist"][4], "HANUMANGARH")
    
    def test_get_country2(self):   
        self.assertEqual(self.data["countrylist"][1], "DHOLPUR")
        self.assertEqual(self.data["countrylist"][8], "BARAN")
    
    def test_get_country(self):   
        self.assertEqual(self.data["mueseumlist"][0], "AHAR MUSEUM")
        self.assertEqual(self.data["mueseumlist"][4], "BAGORE KI HAVELI")
    
    def test_get_country2(self):   
        self.assertEqual(self.data["mueseumlist"][1], "AJMER GOVERNMENT MUSEUM")
        self.assertEqual(self.data["mueseumlist"][3], "ANOKHI MUSEUM OF HAND PRINTING")
    



class TestSimpleTest1(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.main_test = MainTest() 
        cls.data = cls.main_test.main_method1() 




        ##cls.data1=cls.main_test.second_method()
    

        

    
    def test_get_question(self):   
        self.assertEqual(self.data["questionlist"][0], "Log Chopping")
        self.assertEqual(self.data["questionlist"][4], "notepad.exe")
    
    def test_get_question2(self):   
        self.assertEqual(self.data["questionlist"][2], "Unequal Array")
        self.assertEqual(self.data["questionlist"][5], "Array Shuffling")

   

    

    
        

  
if __name__ == '__main__':
    unittest.main()
