import cv2
import os

def load_images_from_folder():
    images = []
    for filename in os.listdir("*.png"):
        img = cv2.imread(os.path.join(filename))
        if img is not None:
            images.append(img)
    return images
img=load_images_from_folder()

