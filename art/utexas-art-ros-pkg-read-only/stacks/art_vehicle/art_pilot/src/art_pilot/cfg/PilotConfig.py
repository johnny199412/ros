## *********************************************************
## 
## File autogenerated for the art_pilot package 
## by the dynamic_reconfigure package.
## Please do not edit.
## 
## ********************************************************/

##**********************************************************
## Software License Agreement (BSD License)
##
##  Copyright (c) 2008, Willow Garage, Inc.
##  All rights reserved.
##
##  Redistribution and use in source and binary forms, with or without
##  modification, are permitted provided that the following conditions
##  are met:
##
##   * Redistributions of source code must retain the above copyright
##     notice, this list of conditions and the following disclaimer.
##   * Redistributions in binary form must reproduce the above
##     copyright notice, this list of conditions and the following
##     disclaimer in the documentation and/or other materials provided
##     with the distribution.
##   * Neither the name of the Willow Garage nor the names of its
##     contributors may be used to endorse or promote products derived
##     from this software without specific prior written permission.
##
##  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
##  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
##  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
##  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
##  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
##  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
##  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
##  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
##  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
##  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
##  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
##  POSSIBILITY OF SUCH DAMAGE.
##**********************************************************/

config_description = [{'srcline': 60, 'description': 'Acceleration controller.', 'max': 2147483647, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '../cfg/Pilot.cfg', 'name': 'acceleration_controller', 'edit_method': "{'enum_description': 'Acceleration controller options', 'enum': [{'srcline': 50, 'description': 'Plan-based controller', 'srcfile': '../cfg/Pilot.cfg', 'cconsttype': 'const int', 'value': 0, 'ctype': 'int', 'type': 'int', 'name': 'Accel_Plan'}, {'srcline': 51, 'description': 'Acceleration control example', 'srcfile': '../cfg/Pilot.cfg', 'cconsttype': 'const int', 'value': 1, 'ctype': 'int', 'type': 'int', 'name': 'Accel_Example'}, {'srcline': 52, 'description': 'Speed control PID', 'srcfile': '../cfg/Pilot.cfg', 'cconsttype': 'const int', 'value': 2, 'ctype': 'int', 'type': 'int', 'name': 'Speed_PID'}, {'srcline': 53, 'description': 'Speed control matrix', 'srcfile': '../cfg/Pilot.cfg', 'cconsttype': 'const int', 'value': 3, 'ctype': 'int', 'type': 'int', 'name': 'Speed_Matrix'}, {'srcline': 54, 'description': 'Learned speed control', 'srcfile': '../cfg/Pilot.cfg', 'cconsttype': 'const int', 'value': 4, 'ctype': 'int', 'type': 'int', 'name': 'Speed_Learned'}]}", 'default': 0, 'level': 3, 'min': -2147483648, 'type': 'int'}, {'srcline': 63, 'description': 'Brake hold command when stopped.', 'max': 1.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '../cfg/Pilot.cfg', 'name': 'brake_hold', 'edit_method': '', 'default': 0.69999999999999996, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 67, 'description': 'Allow human driver to steer (otherwise pilot steers the car).', 'max': True, 'cconsttype': 'const bool', 'ctype': 'bool', 'srcfile': '../cfg/Pilot.cfg', 'name': 'human_steering', 'edit_method': '', 'default': False, 'level': 0, 'min': False, 'type': 'bool'}, {'srcline': 70, 'description': 'Speed limit going forward (m/s).', 'max': 25.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '../cfg/Pilot.cfg', 'name': 'limit_forward', 'edit_method': '', 'default': 14.0, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 73, 'description': 'Speed limit going in reverse (m/s).', 'max': 4.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '../cfg/Pilot.cfg', 'name': 'limit_reverse', 'edit_method': '', 'default': 3.0, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 76, 'description': 'Device message timeout (s).', 'max': 1.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '../cfg/Pilot.cfg', 'name': 'timeout', 'edit_method': '', 'default': 0.5, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 79, 'description': 'Brake PID proportional gain (Kp).', 'max': 0.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '../cfg/Pilot.cfg', 'name': 'brake_kp', 'edit_method': '', 'default': -0.20000000000000001, 'level': 0, 'min': -10.0, 'type': 'double'}, {'srcline': 82, 'description': 'Brake PID integral gain (Ki).', 'max': 0.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '../cfg/Pilot.cfg', 'name': 'brake_ki', 'edit_method': '', 'default': -0.00020000000000000001, 'level': 0, 'min': -10.0, 'type': 'double'}, {'srcline': 85, 'description': 'Brake PID derivative gain (Kd).', 'max': 0.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '../cfg/Pilot.cfg', 'name': 'brake_kd', 'edit_method': '', 'default': -1.6000000000000001, 'level': 0, 'min': -10.0, 'type': 'double'}, {'srcline': 88, 'description': 'Throttle PID proportional gain (Kp).', 'max': 10.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '../cfg/Pilot.cfg', 'name': 'throttle_kp', 'edit_method': '', 'default': 0.12, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 91, 'description': 'Throttle PID integral gain (Ki).', 'max': 10.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '../cfg/Pilot.cfg', 'name': 'throttle_ki', 'edit_method': '', 'default': 0.001, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 94, 'description': 'Throttle PID derivative gain (Kd).', 'max': 10.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '../cfg/Pilot.cfg', 'name': 'throttle_kd', 'edit_method': '', 'default': 0.54000000000000004, 'level': 0, 'min': 0.0, 'type': 'double'}]

min = {}
max = {}
defaults = {}
level = {}
type = {}
all_level = 0

for param in config_description:
    min[param['name']] = param['min']
    max[param['name']] = param['max']
    defaults[param['name']] = param['default']
    level[param['name']] = param['level']
    type[param['name']] = param['type']
    all_level = all_level | param['level']

Pilot_Accel_Plan = 0
Pilot_Accel_Example = 1
Pilot_Speed_PID = 2
Pilot_Speed_Matrix = 3
Pilot_Speed_Learned = 4
