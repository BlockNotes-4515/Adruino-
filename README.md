<center><h1> My All Adruino Projects</h1></center>
<center><h2> ATAL LAB ❤ ADRUINO</h2></center> 

<center><b> Link: https://www.youtube.com/watch?v=-G-9CUIwk28&list=PLV3C-t_tgjGFyXP_-AF37AoIuxM9jzELM&index=16 🤳 learn from youtube!</b></center>
<br><br>
<center><b> Github Live-Link: https://blocknotes-4515.github.io/Adruino-/</b></center>

# Adruino-
Adruino Projects from (Basics-Advanced) Pro.

<!--<center><img src="radar.jpeg" alt=" " height="50%" width="60%" align="center" border="2"></center>-->
<center><img src="https://brandslogos.com/wp-content/uploads/images/large/arduino-logo-1.png" border="2"></center>

<h1><b><u>RC Obstacle Detection System + Voice Recognizatons Modules!</b></h1>
<h2>Steps for begineers</h2>

<center><i><p>
  <ul>
 <li>1. Install Adruino IDE.</li> 
  <li>2. Connect <u>(Laptop->Adruino)</u> By DTC-(Data- Transfer - Cable).</li>
  <li>3. Open the Adruino IDE.</li>
  <li>4. Select Bard (Tools->Board) My Board is : UNO 🛸</li>
  <li>5. Select Ports (Tools-> Port).</li>
  <li>6. Open and Create Skectch (the Write the Code) in IDE.</li>
  <li>7. Verify & Compile (Ctrl+R) and then Skecth (verify/Compile).</li>
  <li>8. Upload then (Ctrl+U) (Sketch->Upload).</li>
  <li>9. Monitor Serial Output (Optional).</li>
  </ul>
</p></i></center>

<h3><center><p>
  NOTE: IF ANY ERROR (REMEMBER)!<ul>
  <li>--> (i). Check the Connections.</li>
  <li>--> (ii). Board Selections like: UNO.</li>      
   <li>--> (iii). Port Settings.</li>     
</p></center></h3>
<center>
  <center>  
    <p align="center">
  <a href="https://blocknotes-4515.github.io/Adruino-/">
    <img src="Dhruv Dhayal sooftware.jpg" height="60%" width="60%" border="2" alt="This is My Logo!">
  </a>
</p>
  <br><br>
  <h1>OBSTACLE AVOIDING ROBOT</h1>
</center>
<hr>
<p><b>Introduction:</b>  An obstacle avoiding robot is an autonomous robot which is able to 
avoid any obstacle it face when it moves. Simply, when it met an obstacle while it 
moving forward, automatically stop moving forward and makes a step back then it 
takes a little turn and moves forward with the same loop. This obstacle avoiding 
robot we are demonstrating here is very helpful and this is a simple demonstration 
of obstacle avoiding process for sophisticated technologies and machines. It is the 
base of many large projects such as Automatic cars, robots used in Manufacturing 
factories, even in robots used in spacecraft’s or interplanetary robotic missions like 
Mars rover</p>

<hr>
<center><p><b>Components used:</b> In this robotic project we are using following components:
  <ul>
<li> Arduino UNO</li>
<li> 2 Wheel Drive robotic chassis</li>
<li> Two DC BO motors</li>
<li> L293 motor driver</li>
<li> HC-SR04 Ultrasonic sensor</li>
<li> Switch</li>
<li> 9v Batteries and connector</li>
<li> Jumper wires</li>
<li> Caster</li>
<li> Nut-Bolts, Spacer</li>
<li> Other supporting components and tools </li></p></center>

<hr>
<center><p>
  <b>Basic principle:</b> The robot uses Ultrasonic sensor to detect the obstacle and motor 
driver is used to drive the motor according to the ultrasonic signal as per code 
written in the Arduino.
  <br><br>
<b>Ultrasonic sensor:</b> The ultrasonic sensor has a signal generator and a receiver. The 
signal generator generates an ultrasonic wave and transmits in the forward 
direction. The transmitted wave strikes any obstacle in its path and a huge part of it 
gets reflected. The receiver receives the reflected wave.The obtained values from the ultrasonic sensor need to be calibrated in order to get 
a meaningful data (distance). The distance of the object is calculated on the basis of 
the time taken by the wave in the process of transmission, reflection and collection.
</p></center>

<hr>
<center><p>
  <b>Arduino:</b> Arduino is an open-source electronics platform based on easy-to-use 
hardware and software. Arduino boards are able to read inputs (Like-light on a 
sensor, a signal of a button, or a signal from sensor etc) and turn it into an output 
(Like- activating a motor, turning on an LED, publishing something online etc). We 
can tell our board what to do by sending a set of instructions to the microcontroller 
on the board. To do so we use the Arduino programming language and the Arduino 
Software (IDE).
In this project, to avoid the obstacle in the path, a condition is put in the system 
which says: if the distance between the robot and the object gets below a certain 
level, stop the robot and take a backward motion and then turn the robot into other 
direction and continue the loop. This logic is applied to the system by writing the 
code in the arduino.
</p></center>

<hr>
 <p align="center">
  <a href="https://blocknotes-4515.github.io/Adruino-/">
    <img src="adruino2.jpeg" height="60%" width="60%" border="2" alt="This is My Logo!">
  </a>
</p>
<center><p>
  <b>L293 motor driver:</b> We now have the conditions set up for the robot car but it needs 
to be executed/implemented on the hardware. The hardware used is the DC motor.
To drive these DC BO Motors, we need motor driver. In this project we are using 
L293 motor driver. Motor driver is used to send the commands to motors according 
to signal received from Arduino.
  <br><br>
<b>BO Motors:</b> Two motors are used in this process: left motor and right motor. To 
move the robot car forward, both the motors are turned on. For backward step, 
both motors need to run in opposite direction. To turn the robot car to avoid 
obstacle, one of the motor is reversed for a while, keeping the other motor forward.</p></center>

<hr>
<center><p>
  <ul>
   <b> Connections: </b>
<li>Motor Driver connection: </li>
<li>Vin → 9v Battery (+)ve</li>
<li>GND → 9v Battery (-)ve</li>
<li>M1 → Left Motor connection</li>
<li>M2 → Right Motor connection</li>
<li>IN1 and IN2 → Arduino 4 and 5 (If motor runs in wrong direction, connection is 
swapped)</li>
<li>IN3 and IN4 → Arduino 6 and 7 (If motor runs in wrong direction, connection is 
swapped)</li>
  </ul>
</p></center>

<hr>
<center>
  <ul>
   <b> Ultrasonic connection:</b>
<li></li>Gnd: Arduino GND</li>
<li></li>Echo: Arduino A2</li>
<li></li>Trig: Arduino A1</li>
<li></li>Vcc: Arduino 5V</li>
  </ul>

  </ul>
</center>

<hr>
<center>
  <p>
    <b>Power the Robot </b>
We will use pack of 9V batteries to power our robot and Arduino.
    <br><br>
<b>Demonstration:</b> When we put the robot and turn ON the switch, it goes forward. The 
robot detects the obstacle in its path and takes a backward step and then takes a 
turn and then moves forward with the same loop.
  </p>
</center>


<hr>
<center><b><i><h1>Main Source Reference Links</h1></i></b>
<center><img src="teslas.jpg" height="100%" width="100%" border="4"></center>
<u><b> Developed and Created by @DhruvDhayal from DDCo. head and I Like 🍔☕ foodie nature wants more in my life 🤑❤
  <br><br>
<center>
  <p><i> Live - Link:https://drive.google.com/file/d/1WRn4E9pzs4am8OEEquejK64aezOb8qmQ/view?usp=sharing<br><br>
         Project-Link: https://drive.google.com/file/d/1E5YAV2lSrqtxsZIVGegoI3TLbigUvWTc/view?usp=sharing<br><br>
         Canva-Link: https://www.canva.com/design/DAF_OSmpnOw/Ihi-0KM1KNQhWlLbJK3aAQ/edit?utm_content=DAF_OSmpnOw&utm_campaign=designshare&utm_medium=link2&utm_source=sharebutton<br><br>
         Public-Link: https://www.canva.com/design/DAF_OSmpnOw/55Wi6RAAqsNxgYSt0yr9bA/view?utm_content=DAF_OSmpnOw&utm_campaign=share_your_design&utm_medium=link&utm_source=shareyourdesignpanel</i></p>
         Documentaion: https://drive.google.com/file/d/1bH0qh7V0K7hLXVGRfbUGHXnPMyGBclov/view?usp=sharing 🤑<br><br>
         Project Reports (Search-Gate)/(Google Scholars): https://docs.google.com/document/d/1StLLD12zOxFbyoz13unVac0lp7VgWlaU/edit? 
        usp=sharing&ouid=117969705994841390256&rtpof=true&sd=true ✔🌐❤🤑😍<br><br>
         Techno-Sapiens Winners: https://drive.google.com/file/d/13DHvzNAmuAgjnw75iKoDYkeHX-uSoiHj/view?usp=sharing
</center>
  
<hr>
<center><h1>CYBER GEEKS (IOT Based Obstacle Detection System ROBO-CAR) Ver.1</h1></center>
<div style="overflow: hidden; background-color: #f0f0f0;">
    <div style="float: left; width: 45%;">
        <img src="img1.jpeg" alt="Image 1" style="width: 100%;">
        <p>"CYBER GEEKS" at TECHNO SAPIENS</p>
    </div>
    <div style="float: right; width: 45%;">
        <img src="champions.jpeg" alt="Image 2" style="width: 100%;">
        <p>Getting 1st Position in Project Exhibition & Demonsteration Competition.</p>
    </div>
</div>
<hr>
<center><h1><b><i><u> PHOTO GALLERY </u></i></b></h1></center>
<div style="overflow: hidden; align:center;background-image: url('images/hexagon.jpg');">
    <img src="img1.jpeg" alt="Image 1" style="float: left; width: 35%;">
    <img src="champions1.jpeg" alt="Image 2" style="float: right; width: 35%; margin-left: 5px;">
</div>
<br>
<div style="overflow: hidden; align:center; background-image: url('images/hexagon.jpg');">
    <img src="images/sheep3.jpeg" alt="Image 3" style="float: left; width: 35%;">
    <img src="images/sheep7.jpeg" alt="Image 4" style="float: right; width: 35%; margin-left: 5px;">
</div>
<br>
<div style="overflow: hidden; align: center; background-image: url('images/hexagon.jpg');">
    <img src="images/sheep2.jpeg" alt="Image 5" style="float: left; width: 35%;">
    <img src="images/sheep8.jpeg" alt="Image 6" style="float: right; width: 35%; margin-left: 5px;">
</div>
<br>
<div style="overflow: hidden; align: center; background-image: url('images/hexagon.jpg');">
    <img src="images/sheep4.jpeg" alt="Image 7" style="float: left; width: 35%;">
    <img src="images/sheep5.jpeg" alt="Image 8" style="float: right; width: 35%; margin-left: 5px;">
</div>
<br>


 
<hr>
<center><p>
 <u> Follow for more: </u>
 <a href="https://www.instagram.com/dhayaldhruv271/" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/instagram.svg" alt="Dhruv_Dhayal" height="30" width="40" /></a>  <a href="https://www.facebook.com/profile.php?id=100093404899326" target="blank"><img align="center" src="https://cdn.iconscout.com/icon/free/png-512/free-facebook-74-189794.png?f=webp&w=256" alt="Dhruv_Dhayal" height="30" width="40" /></a>  <a href="https://twitter.com/DhayalDhruv" target="blank"><img align="center" src="https://img.freepik.com/free-vector/new-2023-twitter-logo-x-icon-design_1017-45418.jpg?w=740&t=st=1709450663~exp=1709451263~hmac=92a36ca26d0652a186358c0390208e12630bfcddd7e805ac6f39f446f9ca9d8f" alt="Dhruv_Dhayal" height="30" width="40" /></a>  <a href="https://www.linkedin.com/in/dhruv-dhayal-9568b7262/" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/linked-in-alt.svg" alt="Dhruv_Dhayal-4515" height="30" width="40" /></a>
</p></center>
<hr>
<center><h1>TechnoSapiens Competition Winners</h1></center>
<center><img src="winners.jpeg" alt="Congratulations to all Winners!" border="2" height="100%" width="100%"></center>
<div align="center">
  <img src="https://camo.githubusercontent.com/2e3a321d070ca6eba6b552ae4a80da73054a7c631205e4fe3b19e0a5b7cf5847/68747470733a2f2f692e696d6775722e636f6d2f6f7a45776248732e676966" alt="Centered Image">
  <img src="https://raw.githubusercontent.com/trinib/trinib/a5f17399d881c5651a89bfe4a621014b08346cf0/images/marquee2.svg">
</div>
<img src="https://raw.githubusercontent.com/trinib/trinib/82213791fa9ff58d3ca768ddd6de2489ec23ffca/images/footer.svg">
