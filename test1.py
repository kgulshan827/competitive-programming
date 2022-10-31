from selenium import webdriver
from time import sleep
from selenium.webdriver.chrome.service import Service
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.common.by import By

from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC

import os
from webdriver_manager.chrome import ChromeDriverManager
from selenium.webdriver.chrome.options import Options


class MainTest():
    
    def __init__(self):
        options = Options()
        options.add_argument('--headless')
        options.add_argument('--no-sandbox')
        options.add_argument('--disable-dev-shm-usage')
        self.driver = webdriver.Chrome(service=Service(ChromeDriverManager().install()), options=options)

    
    def main_method(self):
        self.driver.get("https://www.tourism.rajasthan.gov.in/tourist-destinations.html")
        touristlist=[]
        for i in range(1,11):
            x=(self.driver.find_element(By.XPATH,"/html/body/div[3]/div[1]/div/div/div[3]/ul/li["+str(i)+"]/div/div/div[2]/div/div/p")).text
            touristlist.append(x)

        self.driver.get("https://www.tourism.rajasthan.gov.in/content/rajasthan-tourism/en/museums-to-visit.html")
        mueseumlist=[]
        for i in range(1,8):
            x=(self.driver.find_element(By.XPATH,"/html/body/div[3]/div[1]/div/div/div[3]/ul/li["+str(i)+"]/div/div/div[2]/div/div/h2")).text
            mueseumlist.append(x)
        
        data={
        "countrylist":touristlist,
        "mueseumlist":mueseumlist,
        }
        return data
    
        
    def main_method1(self):        
        self.driver.get("https://codeforces.com/contest/1672")
        questionlist=[]
        for i in range(1,11):
            x=(self.driver.find_element(By.XPATH,"/html/body/div[6]/div[5]/div[2]/div[2]/div[6]/table/tbody/tr["+str(i+1)+"]/td[2]/div/div[1]/a")).text
            # /html/body/div[2]/div/main/section/div[2]/div/div/div[2]/div[2]/table/tbody/tr[2]/td[1]/div/span/a
            questionlist.append(x)
        data={
        "questionlist":questionlist
        }
        return data
    

