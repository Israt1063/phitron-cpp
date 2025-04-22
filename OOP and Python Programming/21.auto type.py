import pyautogui
from time import sleep

sleep(2)  # wait 2 seconds before typing
pyautogui.write('Hello world!', interval=0.25)  # type 'Hello world!' with interval
pyautogui.press('enter')  # press 'Enter'
