#ifndef _ROS_mower_msgs_Power_h
#define _ROS_mower_msgs_Power_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "ros/time.h"

namespace mower_msgs
{

  class Power : public ros::Msg
  {
    public:
      typedef ros::Time _stamp_type;
      _stamp_type stamp;
      typedef float _charge_voltage_adc_type;
      _charge_voltage_adc_type charge_voltage_adc;
      typedef float _charge_voltage_chg_type;
      _charge_voltage_chg_type charge_voltage_chg;
      typedef float _charge_current_type;
      _charge_current_type charge_current;
      typedef float _battery_voltage_adc_type;
      _battery_voltage_adc_type battery_voltage_adc;
      typedef float _battery_voltage_chg_type;
      _battery_voltage_chg_type battery_voltage_chg;
      typedef float _battery_voltage_bms_type;
      _battery_voltage_bms_type battery_voltage_bms;
      typedef float _battery_current_type;
      _battery_current_type battery_current;
      typedef float _battery_pct_type;
      _battery_pct_type battery_pct;
      typedef float _battery_soc_type;
      _battery_soc_type battery_soc;
      typedef float _battery_temp_type;
      _battery_temp_type battery_temp;
      typedef float _dcdc_input_current_type;
      _dcdc_input_current_type dcdc_input_current;
      typedef float _charger_input_current_type;
      _charger_input_current_type charger_input_current;
      typedef const char* _charger_status_type;
      _charger_status_type charger_status;
      typedef bool _charger_enabled_type;
      _charger_enabled_type charger_enabled;
      typedef const char* _bms_status_type;
      _bms_status_type bms_status;
      typedef const char* _bms_extra_data_type;
      _bms_extra_data_type bms_extra_data;

    Power():
      stamp(),
      charge_voltage_adc(0),
      charge_voltage_chg(0),
      charge_current(0),
      battery_voltage_adc(0),
      battery_voltage_chg(0),
      battery_voltage_bms(0),
      battery_current(0),
      battery_pct(0),
      battery_soc(0),
      battery_temp(0),
      dcdc_input_current(0),
      charger_input_current(0),
      charger_status(""),
      charger_enabled(0),
      bms_status(""),
      bms_extra_data("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->stamp.sec >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->stamp.sec >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->stamp.sec >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->stamp.sec >> (8 * 3)) & 0xFF;
      offset += sizeof(this->stamp.sec);
      *(outbuffer + offset + 0) = (this->stamp.nsec >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->stamp.nsec >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->stamp.nsec >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->stamp.nsec >> (8 * 3)) & 0xFF;
      offset += sizeof(this->stamp.nsec);
      union {
        float real;
        uint32_t base;
      } u_charge_voltage_adc;
      u_charge_voltage_adc.real = this->charge_voltage_adc;
      *(outbuffer + offset + 0) = (u_charge_voltage_adc.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_charge_voltage_adc.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_charge_voltage_adc.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_charge_voltage_adc.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->charge_voltage_adc);
      union {
        float real;
        uint32_t base;
      } u_charge_voltage_chg;
      u_charge_voltage_chg.real = this->charge_voltage_chg;
      *(outbuffer + offset + 0) = (u_charge_voltage_chg.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_charge_voltage_chg.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_charge_voltage_chg.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_charge_voltage_chg.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->charge_voltage_chg);
      union {
        float real;
        uint32_t base;
      } u_charge_current;
      u_charge_current.real = this->charge_current;
      *(outbuffer + offset + 0) = (u_charge_current.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_charge_current.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_charge_current.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_charge_current.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->charge_current);
      union {
        float real;
        uint32_t base;
      } u_battery_voltage_adc;
      u_battery_voltage_adc.real = this->battery_voltage_adc;
      *(outbuffer + offset + 0) = (u_battery_voltage_adc.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_battery_voltage_adc.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_battery_voltage_adc.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_battery_voltage_adc.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->battery_voltage_adc);
      union {
        float real;
        uint32_t base;
      } u_battery_voltage_chg;
      u_battery_voltage_chg.real = this->battery_voltage_chg;
      *(outbuffer + offset + 0) = (u_battery_voltage_chg.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_battery_voltage_chg.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_battery_voltage_chg.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_battery_voltage_chg.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->battery_voltage_chg);
      union {
        float real;
        uint32_t base;
      } u_battery_voltage_bms;
      u_battery_voltage_bms.real = this->battery_voltage_bms;
      *(outbuffer + offset + 0) = (u_battery_voltage_bms.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_battery_voltage_bms.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_battery_voltage_bms.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_battery_voltage_bms.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->battery_voltage_bms);
      union {
        float real;
        uint32_t base;
      } u_battery_current;
      u_battery_current.real = this->battery_current;
      *(outbuffer + offset + 0) = (u_battery_current.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_battery_current.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_battery_current.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_battery_current.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->battery_current);
      union {
        float real;
        uint32_t base;
      } u_battery_pct;
      u_battery_pct.real = this->battery_pct;
      *(outbuffer + offset + 0) = (u_battery_pct.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_battery_pct.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_battery_pct.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_battery_pct.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->battery_pct);
      union {
        float real;
        uint32_t base;
      } u_battery_soc;
      u_battery_soc.real = this->battery_soc;
      *(outbuffer + offset + 0) = (u_battery_soc.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_battery_soc.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_battery_soc.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_battery_soc.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->battery_soc);
      union {
        float real;
        uint32_t base;
      } u_battery_temp;
      u_battery_temp.real = this->battery_temp;
      *(outbuffer + offset + 0) = (u_battery_temp.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_battery_temp.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_battery_temp.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_battery_temp.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->battery_temp);
      union {
        float real;
        uint32_t base;
      } u_dcdc_input_current;
      u_dcdc_input_current.real = this->dcdc_input_current;
      *(outbuffer + offset + 0) = (u_dcdc_input_current.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_dcdc_input_current.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_dcdc_input_current.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_dcdc_input_current.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->dcdc_input_current);
      union {
        float real;
        uint32_t base;
      } u_charger_input_current;
      u_charger_input_current.real = this->charger_input_current;
      *(outbuffer + offset + 0) = (u_charger_input_current.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_charger_input_current.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_charger_input_current.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_charger_input_current.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->charger_input_current);
      uint32_t length_charger_status = strlen(this->charger_status);
      varToArr(outbuffer + offset, length_charger_status);
      offset += 4;
      memcpy(outbuffer + offset, this->charger_status, length_charger_status);
      offset += length_charger_status;
      union {
        bool real;
        uint8_t base;
      } u_charger_enabled;
      u_charger_enabled.real = this->charger_enabled;
      *(outbuffer + offset + 0) = (u_charger_enabled.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->charger_enabled);
      uint32_t length_bms_status = strlen(this->bms_status);
      varToArr(outbuffer + offset, length_bms_status);
      offset += 4;
      memcpy(outbuffer + offset, this->bms_status, length_bms_status);
      offset += length_bms_status;
      uint32_t length_bms_extra_data = strlen(this->bms_extra_data);
      varToArr(outbuffer + offset, length_bms_extra_data);
      offset += 4;
      memcpy(outbuffer + offset, this->bms_extra_data, length_bms_extra_data);
      offset += length_bms_extra_data;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      this->stamp.sec =  ((uint32_t) (*(inbuffer + offset)));
      this->stamp.sec |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->stamp.sec |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->stamp.sec |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->stamp.sec);
      this->stamp.nsec =  ((uint32_t) (*(inbuffer + offset)));
      this->stamp.nsec |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->stamp.nsec |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->stamp.nsec |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->stamp.nsec);
      union {
        float real;
        uint32_t base;
      } u_charge_voltage_adc;
      u_charge_voltage_adc.base = 0;
      u_charge_voltage_adc.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_charge_voltage_adc.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_charge_voltage_adc.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_charge_voltage_adc.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->charge_voltage_adc = u_charge_voltage_adc.real;
      offset += sizeof(this->charge_voltage_adc);
      union {
        float real;
        uint32_t base;
      } u_charge_voltage_chg;
      u_charge_voltage_chg.base = 0;
      u_charge_voltage_chg.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_charge_voltage_chg.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_charge_voltage_chg.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_charge_voltage_chg.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->charge_voltage_chg = u_charge_voltage_chg.real;
      offset += sizeof(this->charge_voltage_chg);
      union {
        float real;
        uint32_t base;
      } u_charge_current;
      u_charge_current.base = 0;
      u_charge_current.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_charge_current.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_charge_current.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_charge_current.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->charge_current = u_charge_current.real;
      offset += sizeof(this->charge_current);
      union {
        float real;
        uint32_t base;
      } u_battery_voltage_adc;
      u_battery_voltage_adc.base = 0;
      u_battery_voltage_adc.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_battery_voltage_adc.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_battery_voltage_adc.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_battery_voltage_adc.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->battery_voltage_adc = u_battery_voltage_adc.real;
      offset += sizeof(this->battery_voltage_adc);
      union {
        float real;
        uint32_t base;
      } u_battery_voltage_chg;
      u_battery_voltage_chg.base = 0;
      u_battery_voltage_chg.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_battery_voltage_chg.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_battery_voltage_chg.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_battery_voltage_chg.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->battery_voltage_chg = u_battery_voltage_chg.real;
      offset += sizeof(this->battery_voltage_chg);
      union {
        float real;
        uint32_t base;
      } u_battery_voltage_bms;
      u_battery_voltage_bms.base = 0;
      u_battery_voltage_bms.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_battery_voltage_bms.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_battery_voltage_bms.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_battery_voltage_bms.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->battery_voltage_bms = u_battery_voltage_bms.real;
      offset += sizeof(this->battery_voltage_bms);
      union {
        float real;
        uint32_t base;
      } u_battery_current;
      u_battery_current.base = 0;
      u_battery_current.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_battery_current.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_battery_current.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_battery_current.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->battery_current = u_battery_current.real;
      offset += sizeof(this->battery_current);
      union {
        float real;
        uint32_t base;
      } u_battery_pct;
      u_battery_pct.base = 0;
      u_battery_pct.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_battery_pct.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_battery_pct.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_battery_pct.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->battery_pct = u_battery_pct.real;
      offset += sizeof(this->battery_pct);
      union {
        float real;
        uint32_t base;
      } u_battery_soc;
      u_battery_soc.base = 0;
      u_battery_soc.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_battery_soc.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_battery_soc.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_battery_soc.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->battery_soc = u_battery_soc.real;
      offset += sizeof(this->battery_soc);
      union {
        float real;
        uint32_t base;
      } u_battery_temp;
      u_battery_temp.base = 0;
      u_battery_temp.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_battery_temp.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_battery_temp.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_battery_temp.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->battery_temp = u_battery_temp.real;
      offset += sizeof(this->battery_temp);
      union {
        float real;
        uint32_t base;
      } u_dcdc_input_current;
      u_dcdc_input_current.base = 0;
      u_dcdc_input_current.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_dcdc_input_current.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_dcdc_input_current.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_dcdc_input_current.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->dcdc_input_current = u_dcdc_input_current.real;
      offset += sizeof(this->dcdc_input_current);
      union {
        float real;
        uint32_t base;
      } u_charger_input_current;
      u_charger_input_current.base = 0;
      u_charger_input_current.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_charger_input_current.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_charger_input_current.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_charger_input_current.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->charger_input_current = u_charger_input_current.real;
      offset += sizeof(this->charger_input_current);
      uint32_t length_charger_status;
      arrToVar(length_charger_status, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_charger_status; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_charger_status-1]=0;
      this->charger_status = (char *)(inbuffer + offset-1);
      offset += length_charger_status;
      union {
        bool real;
        uint8_t base;
      } u_charger_enabled;
      u_charger_enabled.base = 0;
      u_charger_enabled.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->charger_enabled = u_charger_enabled.real;
      offset += sizeof(this->charger_enabled);
      uint32_t length_bms_status;
      arrToVar(length_bms_status, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_bms_status; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_bms_status-1]=0;
      this->bms_status = (char *)(inbuffer + offset-1);
      offset += length_bms_status;
      uint32_t length_bms_extra_data;
      arrToVar(length_bms_extra_data, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_bms_extra_data; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_bms_extra_data-1]=0;
      this->bms_extra_data = (char *)(inbuffer + offset-1);
      offset += length_bms_extra_data;
     return offset;
    }

    virtual const char * getType() override { return "mower_msgs/Power"; };
    virtual const char * getMD5() override { return "64a452515e8f6248a493e3b38041388f"; };

  };

}
#endif
