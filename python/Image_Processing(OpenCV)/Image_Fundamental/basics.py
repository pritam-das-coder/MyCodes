import numpy as np
import cv2
img=cv2.imread('G:\My Drive\MyCodes\python\Image_Processing(OpenCV)\Image_Fundamental\flower.jpg')
img=cv2.imwrite('G:\My Drive\MyCodes\python\Image_Processing(OpenCV)\Image_Fundamental\flower.png',img)
cv2.imshow('original',img)
cv2.waitKey(0)
cv2.destroyAllWindows()