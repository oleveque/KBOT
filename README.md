# KBOT

Un KBOT est un petit "robot sandwich" doté de deux roues motrices (moteurs+codeurs), d'une Arduino Méga 2560, d'un écran LCD 16x2, d'une batterie 3S… C'est une fabrication maison que réalise les premières années du club de robotique de l'ENS Paris-Saclay pour acquérir les bases de la robotique & se familiariser avec la programmation à travers l'IDE Arduino.
Pour plus d'information consultez notre site [[Kro]bot](https://wiki.crans.org/ClubKrobot).

![KBOT_V2](IMG_20171019_004054_02.jpg)

## Informations générales :
* *Mode de déplacement du robot :* entraînement différenciel
* *Moyens de communication :* USB, Bluetooth
* *Version actuelle :* 2.0 (Révisé par Y. Labbe & O. Lévêque - Sept. 2017)

## Ports I/O :
* 1 module Bluetooth (HC-06) ;
* 1 port SHARP (GP2D12) ;
* 1 port Servo (SG90) ;
* 1 port pour controler le niveau de charge de la batterie ;
* 1 Buzzer ;
* 1 port extension pour 5 Boutons ;
* 1 port extension pour 10 Leds.

## Amélioration pour la version 2.1 :
* CAO -> simplifier les entretoises des roues + ajuster l'empreinte de l'écran LCD + ajouter un système de fixations pour les cales avant/arrière
* PCB -> corriger l'agencement buzzer/bluetooth + corriger les couleurs des fils des encoders + changer le sens de la nappe PowerDistributor-PropulsionShield + changer le sens de connecteur batterie + amener la led 13 sur le UI
* Arduino -> Ajouter 1 exemple du bluetooth / du monitoring battery / de l'Asserv / des encoders
