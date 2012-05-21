//#line 2 "/opt/ros/electric/stacks/driver_common/dynamic_reconfigure/templates/ConfigType.h"
// *********************************************************
// 
// File autogenerated for the art_teleop package 
// by the dynamic_reconfigure package.
// Please do not edit.
// 
// ********************************************************/

/***********************************************************
 * Software License Agreement (BSD License)
 *
 *  Copyright (c) 2008, Willow Garage, Inc.
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above
 *     copyright notice, this list of conditions and the following
 *     disclaimer in the documentation and/or other materials provided
 *     with the distribution.
 *   * Neither the name of the Willow Garage nor the names of its
 *     contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 *  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 *  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 *  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 *  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 *  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 *  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 ***********************************************************/

// Author: Blaise Gassend


#ifndef __art_teleop__JOYCONFIG_H__
#define __art_teleop__JOYCONFIG_H__

#include <dynamic_reconfigure/config_tools.h>
#include <limits>
#include <ros/node_handle.h>
#include <dynamic_reconfigure/ConfigDescription.h>
#include <dynamic_reconfigure/ParamDescription.h>
#include <dynamic_reconfigure/config_init_mutex.h>

namespace art_teleop
{
  class JoyConfigStatics;
  
  class JoyConfig
  {
  public:
    class AbstractParamDescription : public dynamic_reconfigure::ParamDescription
    {
    public:
      AbstractParamDescription(std::string n, std::string t, uint32_t l, 
          std::string d, std::string e)
      {
        name = n;
        type = t;
        level = l;
        description = d;
        edit_method = e;
      }
      
      virtual void clamp(JoyConfig &config, const JoyConfig &max, const JoyConfig &min) const = 0;
      virtual void calcLevel(uint32_t &level, const JoyConfig &config1, const JoyConfig &config2) const = 0;
      virtual void fromServer(const ros::NodeHandle &nh, JoyConfig &config) const = 0;
      virtual void toServer(const ros::NodeHandle &nh, const JoyConfig &config) const = 0;
      virtual bool fromMessage(const dynamic_reconfigure::Config &msg, JoyConfig &config) const = 0;
      virtual void toMessage(dynamic_reconfigure::Config &msg, const JoyConfig &config) const = 0;
    };

    typedef boost::shared_ptr<AbstractParamDescription> AbstractParamDescriptionPtr;
    typedef boost::shared_ptr<const AbstractParamDescription> AbstractParamDescriptionConstPtr;
    
    template <class T>
    class ParamDescription : public AbstractParamDescription
    {
    public:
      ParamDescription(std::string name, std::string type, uint32_t level, 
          std::string description, std::string edit_method, T JoyConfig::* f) :
        AbstractParamDescription(name, type, level, description, edit_method),
        field(f)
      {}

      T (JoyConfig::* field);

      virtual void clamp(JoyConfig &config, const JoyConfig &max, const JoyConfig &min) const
      {
        if (config.*field > max.*field)
          config.*field = max.*field;
        
        if (config.*field < min.*field)
          config.*field = min.*field;
      }

      virtual void calcLevel(uint32_t &comb_level, const JoyConfig &config1, const JoyConfig &config2) const
      {
        if (config1.*field != config2.*field)
          comb_level |= level;
      }

      virtual void fromServer(const ros::NodeHandle &nh, JoyConfig &config) const
      {
        nh.getParam(name, config.*field);
      }

      virtual void toServer(const ros::NodeHandle &nh, const JoyConfig &config) const
      {
        nh.setParam(name, config.*field);
      }

      virtual bool fromMessage(const dynamic_reconfigure::Config &msg, JoyConfig &config) const
      {
        return dynamic_reconfigure::ConfigTools::getParameter(msg, name, config.*field);
      }

      virtual void toMessage(dynamic_reconfigure::Config &msg, const JoyConfig &config) const
      {
        dynamic_reconfigure::ConfigTools::appendParameter(msg, name, config.*field);
      }
    };

//#line 50 "../cfg/Joy.cfg"
      double max_accel;
//#line 53 "../cfg/Joy.cfg"
      double limit_forward;
//#line 56 "../cfg/Joy.cfg"
      double limit_reverse;
//#line 59 "../cfg/Joy.cfg"
      bool use_navigator;
//#line 138 "/opt/ros/electric/stacks/driver_common/dynamic_reconfigure/templates/ConfigType.h"

    bool __fromMessage__(dynamic_reconfigure::Config &msg)
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      int count = 0;
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); i++)
        if ((*i)->fromMessage(msg, *this))
          count++;
      if (count != dynamic_reconfigure::ConfigTools::size(msg))
      {
        ROS_ERROR("JoyConfig::__fromMessage__ called with an unexpected parameter.");
        ROS_ERROR("Booleans:");
        for (unsigned int i = 0; i < msg.bools.size(); i++)
          ROS_ERROR("  %s", msg.bools[i].name.c_str());
        ROS_ERROR("Integers:");
        for (unsigned int i = 0; i < msg.ints.size(); i++)
          ROS_ERROR("  %s", msg.ints[i].name.c_str());
        ROS_ERROR("Doubles:");
        for (unsigned int i = 0; i < msg.doubles.size(); i++)
          ROS_ERROR("  %s", msg.doubles[i].name.c_str());
        ROS_ERROR("Strings:");
        for (unsigned int i = 0; i < msg.strs.size(); i++)
          ROS_ERROR("  %s", msg.strs[i].name.c_str());
        // @todo Check that there are no duplicates. Make this error more
        // explicit.
        return false;
      }
      return true;
    }

    // This version of __toMessage__ is used during initialization of
    // statics when __getParamDescriptions__ can't be called yet.
    void __toMessage__(dynamic_reconfigure::Config &msg, const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__) const
    {
      dynamic_reconfigure::ConfigTools::clear(msg);
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); i++)
        (*i)->toMessage(msg, *this);
    }
    
    void __toMessage__(dynamic_reconfigure::Config &msg) const
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      __toMessage__(msg, __param_descriptions__);
    }
    
    void __toServer__(const ros::NodeHandle &nh) const
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); i++)
        (*i)->toServer(nh, *this);
    }

    void __fromServer__(const ros::NodeHandle &nh)
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); i++)
        (*i)->fromServer(nh, *this);
    }

    void __clamp__()
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      const JoyConfig &__max__ = __getMax__();
      const JoyConfig &__min__ = __getMin__();
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); i++)
        (*i)->clamp(*this, __max__, __min__);
    }

    uint32_t __level__(const JoyConfig &config) const
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      uint32_t level = 0;
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); i++)
        (*i)->calcLevel(level, config, *this);
      return level;
    }
    
    static const dynamic_reconfigure::ConfigDescription &__getDescriptionMessage__();
    static const JoyConfig &__getDefault__();
    static const JoyConfig &__getMax__();
    static const JoyConfig &__getMin__();
    static const std::vector<AbstractParamDescriptionConstPtr> &__getParamDescriptions__();
    
  private:
    static const JoyConfigStatics *__get_statics__();
  };
  
  template <> // Max and min are ignored for strings.
  inline void JoyConfig::ParamDescription<std::string>::clamp(JoyConfig &config, const JoyConfig &max, const JoyConfig &min) const
  {
    return;
  }

  class JoyConfigStatics
  {
    friend class JoyConfig;
    
    JoyConfigStatics()
    {
//#line 50 "../cfg/Joy.cfg"
      __min__.max_accel = 0.0;
//#line 50 "../cfg/Joy.cfg"
      __max__.max_accel = 25.0;
//#line 50 "../cfg/Joy.cfg"
      __default__.max_accel = 10.0;
//#line 50 "../cfg/Joy.cfg"
      __param_descriptions__.push_back(JoyConfig::AbstractParamDescriptionConstPtr(new JoyConfig::ParamDescription<double>("max_accel", "double", 0, "Maximum acceleration requested (m/s^2).", "", &JoyConfig::max_accel)));
//#line 53 "../cfg/Joy.cfg"
      __min__.limit_forward = 0.0;
//#line 53 "../cfg/Joy.cfg"
      __max__.limit_forward = 25.0;
//#line 53 "../cfg/Joy.cfg"
      __default__.limit_forward = 6.0;
//#line 53 "../cfg/Joy.cfg"
      __param_descriptions__.push_back(JoyConfig::AbstractParamDescriptionConstPtr(new JoyConfig::ParamDescription<double>("limit_forward", "double", 0, "Maximum speed requested going forward (m/s).", "", &JoyConfig::limit_forward)));
//#line 56 "../cfg/Joy.cfg"
      __min__.limit_reverse = 0.0;
//#line 56 "../cfg/Joy.cfg"
      __max__.limit_reverse = 4.0;
//#line 56 "../cfg/Joy.cfg"
      __default__.limit_reverse = 3.0;
//#line 56 "../cfg/Joy.cfg"
      __param_descriptions__.push_back(JoyConfig::AbstractParamDescriptionConstPtr(new JoyConfig::ParamDescription<double>("limit_reverse", "double", 0, "Maximum speed requested in reverse (m/s).", "", &JoyConfig::limit_reverse)));
//#line 59 "../cfg/Joy.cfg"
      __min__.use_navigator = 0;
//#line 59 "../cfg/Joy.cfg"
      __max__.use_navigator = 1;
//#line 59 "../cfg/Joy.cfg"
      __default__.use_navigator = 1;
//#line 59 "../cfg/Joy.cfg"
      __param_descriptions__.push_back(JoyConfig::AbstractParamDescriptionConstPtr(new JoyConfig::ParamDescription<bool>("use_navigator", "bool", 3, "Send navigator E-stop commands", "", &JoyConfig::use_navigator)));
//#line 239 "/opt/ros/electric/stacks/driver_common/dynamic_reconfigure/templates/ConfigType.h"
    
      for (std::vector<JoyConfig::AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); i++)
        __description_message__.parameters.push_back(**i);
      __max__.__toMessage__(__description_message__.max, __param_descriptions__); 
      __min__.__toMessage__(__description_message__.min, __param_descriptions__); 
      __default__.__toMessage__(__description_message__.dflt, __param_descriptions__); 
    }
    std::vector<JoyConfig::AbstractParamDescriptionConstPtr> __param_descriptions__;
    JoyConfig __max__;
    JoyConfig __min__;
    JoyConfig __default__;
    dynamic_reconfigure::ConfigDescription __description_message__;
    static const JoyConfigStatics *get_instance()
    {
      // Split this off in a separate function because I know that
      // instance will get initialized the first time get_instance is
      // called, and I am guaranteeing that get_instance gets called at
      // most once.
      static JoyConfigStatics instance;
      return &instance;
    }
  };

  inline const dynamic_reconfigure::ConfigDescription &JoyConfig::__getDescriptionMessage__() 
  {
    return __get_statics__()->__description_message__;
  }

  inline const JoyConfig &JoyConfig::__getDefault__()
  {
    return __get_statics__()->__default__;
  }
  
  inline const JoyConfig &JoyConfig::__getMax__()
  {
    return __get_statics__()->__max__;
  }
  
  inline const JoyConfig &JoyConfig::__getMin__()
  {
    return __get_statics__()->__min__;
  }
  
  inline const std::vector<JoyConfig::AbstractParamDescriptionConstPtr> &JoyConfig::__getParamDescriptions__()
  {
    return __get_statics__()->__param_descriptions__;
  }

  inline const JoyConfigStatics *JoyConfig::__get_statics__()
  {
    const static JoyConfigStatics *statics;
  
    if (statics) // Common case
      return statics;

    boost::mutex::scoped_lock lock(dynamic_reconfigure::__init_mutex__);

    if (statics) // In case we lost a race.
      return statics;

    statics = JoyConfigStatics::get_instance();
    
    return statics;
  }


}

#endif // __JOYRECONFIGURATOR_H__
