import serial
import matplotlib.pyplot as plt
a=[]
cnt=0
myData=0
val=0
arduinoData=0
def com() :
    comPort=str(input("Com Port :- "))
    comPort="com"+comPort
    try:
        arduinoData=serial.Serial(comPort,230400)
        print "Com Port access"
    except serial.SerialException:
        print "Can't open Com Port"
        com()
    

def is_Int(s):
    try: 
        int(s)
        return True
    except ValueError:
        return False


com()
while(True):
    while(arduinoData.inWaiting==0): 
        pass
    myData=arduinoData.readline()
    print myData
    if(myData=="stop"):
        break
    #print 'a'
    #if(myData[-1]=='\n'):
    myData=myData[:-2:]
    if(is_Int(myData)) :
       myData=float(myData)
       myData=(myData*5)/1023
       myData=myData-2.1
       myData=(myData*9.6)/1.5
       if(cnt==0) :
           val=myData
           myData=myData-val
       else:
           myData=myData-val
       a.append(myData)
       #print cnt
       #cnt=cnt+1
plt.plot(a,'y-')
plt.grid(True)
plt.ylabel('Voltage (in V)')
plt.show()
