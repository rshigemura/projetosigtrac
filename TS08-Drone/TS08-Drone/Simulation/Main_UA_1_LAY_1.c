/*********************************************************
 **
 ** File  Main_UA_1_LAY_1.c
 **
 ** Automatically generated by SCADE Suite UA Adaptor
 ** Version R17 (build i15)
 ** 
 ** Date of generation: 2016-11-22T21:53:44
 ** Command line: C:/Program Files/Esterel Technologies/SCADE R17/SCADE/bin/uaadaptor.exe -sdy C:\Users\SHIGEMURA-PC\TS08-Drone\TS08-Drone\TS08-Drone.sdy -n C:\Program Files\Esterel Technologies\SCADE R17\SCADE Display\config\a661_description\a661.xml -outdir C:/Users/SHIGEMURA-PC/TS08-Drone/TS08-Drone/Simulation -k C:/Users/SHIGEMURA-PC/TS08-Drone/TS08-Drone/Simulation/kcg_trace.xml -o Main_UA_1 -i TS08-Drone_interface.h -encoding ASCII C:\Users\SHIGEMURA-PC\TS08-Drone\UADF.sgfx
 *********************************************************/
#include "kcg_sensors.h"
#include "Main_UA_1.h"
#include "Main_UA_1_constants.h"
#include "Main_UA_1_private.h"

/* Perform UA Request for layer 1 */
A661_INTERNAL uaa_size a661_com_A661_CMD_UA_REQUEST_layer_1(buffer_el msg[], 
  outC_Main* scade_ctx,  extern_out_ctx_t * extern_ctx){
  uaa_size offset = 0;
  if (scade_ctx->LayerVisible ||
  scade_ctx->LayerActive){
    
    if (scade_ctx->LayerVisible){
      offset = offset + a661_com_A661_CMD_UA_REQUEST_8(msg + offset,
        A661_REQ_LAYER_VISIBLE, 0);
    }
    if (scade_ctx->LayerActive){
      offset = offset + a661_com_A661_CMD_UA_REQUEST_8(msg + offset,
        A661_REQ_LAYER_ACTIVE, 0);
    }
  }
  return offset ;
}

/* Pack messages for layer 1 */
 uaa_size a661_com_layer_1(buffer_el msg[], 
  outC_Main* scade_ctx,  extern_out_ctx_t* extern_ctx){
  uaa_size offset = 0;
  if (scade_ctx->Emit ||
  scade_ctx->LayerActive ||
  scade_ctx->LayerVisible){
    LAYER("a661_layer#1");
    offset = 8;
    a661_msg_cmd_header(msg, 1, Main_UA_1_DEFAULT_CONTEXT_NUMBER);
    if (scade_ctx->Emit){
      WIDGET("StatusVal#33");
      offset = offset + a661_com_csp_widget_Label(msg + offset, 33,
        scade_ctx->Emit, scade_ctx->StatusButtonColor, scade_ctx->Emit, 10,
        scade_ctx->StatusButtonText, scade_ctx->Str_size);
    }
    if (scade_ctx->Emit){
      WIDGET("OnOffBut#68");
      offset = offset + a661_com_csp_widget_PushButton(msg + offset, 68,
        scade_ctx->Emit, 10, scade_ctx->ButtonText, scade_ctx->Str_size);
    }
    if (scade_ctx->Emit){
      WIDGET("TakeoffLandBut#69");
      offset = offset + a661_com_csp_widget_PushButton(msg + offset, 69,
        scade_ctx->Emit, 10, scade_ctx->TkoffText, scade_ctx->Str_size);
    }
    if (scade_ctx->Emit){
      WIDGET("LatReadout#79");
      offset = offset + a661_com_csp_widget_NumericReadout(msg + offset, 79,
        scade_ctx->Emit, scade_ctx->Latitude);
    }
    if (scade_ctx->Emit){
      WIDGET("AltReadout#80");
      offset = offset + a661_com_csp_widget_NumericReadout(msg + offset, 80,
        scade_ctx->Emit, scade_ctx->AltitudeOut);
    }
    if (scade_ctx->Emit){
      WIDGET("HSpdReadout#82");
      offset = offset + a661_com_csp_widget_NumericReadout(msg + offset, 82,
        scade_ctx->Emit, scade_ctx->HorSpeedOutput);
    }
    if (scade_ctx->Emit){
      WIDGET("VSpdReadout#83");
      offset = offset + a661_com_csp_widget_NumericReadout(msg + offset, 83,
        scade_ctx->Emit, scade_ctx->VertSpeedOutput);
    }
    if (scade_ctx->Emit){
      WIDGET("DirReadout#84");
      offset = offset + a661_com_csp_widget_NumericReadout(msg + offset, 84,
        scade_ctx->Emit, scade_ctx->DirOutput);
    }
    if (scade_ctx->Emit){
      WIDGET("YawReadout#93");
      offset = offset + a661_com_csp_widget_NumericReadout(msg + offset, 93,
        scade_ctx->Emit, scade_ctx->YawOut);
    }
    if (scade_ctx->Emit){
      WIDGET("LongReadout#96");
      offset = offset + a661_com_csp_widget_NumericReadout(msg + offset, 96,
        scade_ctx->Emit, scade_ctx->Longitude);
    }
    if (scade_ctx->Emit){
      WIDGET("Symbol#101");
      offset = offset + a661_com_csp_widget_Symbol(msg + offset, 101,
        scade_ctx->Emit, scade_ctx->CompassDir);
    }
    if (scade_ctx->LayerActive ||
    scade_ctx->LayerVisible){
      offset = offset + a661_com_A661_CMD_UA_REQUEST_layer_1(msg + offset,
        scade_ctx, extern_ctx);
    }
    WRITE_ULONG(msg + offset, A661_END_BLOCK);
    offset = offset + 4;
    WRITE_ULONG(msg + 4, offset);
  }
  return offset ;
}

/*********************************************************
 ** End of file
 ** End of generation: 2016-11-22T21:53:44
 *********************************************************/

