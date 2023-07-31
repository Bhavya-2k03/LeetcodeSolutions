import smtplib
from email.mime.multipart import MIMEMultipart
from email.mime.text import MIMEText
from email.mime.base import MIMEBase
from email import encoders
fromaddr = "predict.io.2k22@gmail.com"
toaddr = "bhavya.2k03@gmail.com"   

msg = MIMEMultipart() 
msg['From'] = fromaddr

# storing the receivers email address 
msg['To'] = toaddr

# storing the subject 
msg['Subject'] = "Thank you for using our website, here is your personalized news summary :)"

# string to store the body of the mail
body = '''
Celebrity:
Not ashamed of anything, I love my body: Apte on doing bold scenes
Actress Radhika Apte said she feels "very liberated" to be able to express herself using her body, "whether it's clothed or not clothed, doesn't matter". "Our body is our instrument...I'm not ashamed of anything...My parents have supported me all the time...They always praise my work...I love my body," Apte told Shehnaaz Gill on her talk show.

Cricket:
RCB record their lowest powerplay total of IPL 2023
Royal Challengers Bangalore (RCB) on Monday recorded their lowest powerplay total of IPL 2023 against Lucknow Super Giants (LSG). RCB scored 42/0 in their first six overs. Their previous lowest powerplay total in the tournament was 47/1 which came against Delhi Capitals (DC) on April 15.

Happy reading :)
'''

# attach the body with the msg instance
msg.attach(MIMEText(body, 'plain'))

# open the file to be sent 
# filename = f"{Workbookname}.xlsx"
# attachment = open(f'{Workbookname}.xlsx', "rb")

# instance of MIMEBase and named as p
# p = MIMEBase('application', 'octet-stream')

# To change the payload into encoded form
# p.set_payload((attachment).read())

# encode into base64
# encoders.encode_base64(p)
    
# p.add_header('Content-Disposition', "attachment; filename= %s" % filename)

# attach the instance 'p' to instance 'msg'
# msg.attach(p)

# creates SMTP session
s = smtplib.SMTP('smtp.gmail.com', 587)

# start TLS for security
s.starttls()

# Authentication
s.login(fromaddr, "merwuzzcsxlpzjve")

# Converts the Multipart msg into a string
text = msg.as_string()

# sending the mail
s.sendmail(fromaddr, toaddr, text)

# terminating the session
s.quit()
print("done")