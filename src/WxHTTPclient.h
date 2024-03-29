/**
 * @brief           
 * @file            
 * @author           
 * @dependencies    -
 * @compiler        MPLAB C18 v2.10 or higher <br>
 *                  HITECH PICC-18 V8.35PL3 or higher
 
  
 *********************************************************************/


#ifndef _TCPCLIENT_H_
#define _TCPCLIENT_H_
/////////////////////////////////////////////////
//Global defines

extern void HTTP_Client(void);
extern void HTTP_ClientInit( void );

//#define WX_UPLINK_INTERVAL  15   				// in seconds .. Windgust is taken within this periode
//#define AGV_INTERVAL		50					// e.g.  50=  50*15sec/60sec = 12.5min

#define WX_UPLINK_INTERVAL  60   				// in seconds .. Windgust is taken within this periode
#define AGV_INTERVAL		12					// e.g.  12 ==  12*WX_UPLINK_INTERVAL sec/60 sec = 12min


extern BYTE Wind_counts[]; 			// updated by ISR every second  
extern unsigned short Wind_spd;		// in 1/10 Statute Mile  
extern unsigned short Wind_gst;		// in 1/10 Statute Mile 
extern unsigned short Wind_dir;		// in degree 0-359
extern unsigned short Solar_rad;		// estimate of watts per sq meter 
extern unsigned short Baro_Inch;					// Pressure in Kilo Pascal normailzed to sea level
extern unsigned short Temp_F;					// Temp in F
extern unsigned short T_dewptF;
extern unsigned short RH;
extern unsigned short RH_10;
#endif   




