from PIL import Image
im=Image.open('wafer_image_1.png','r')
pix_val=list(im.getdata())
print(pix_val)