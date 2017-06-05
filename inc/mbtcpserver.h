/******************************************************************************/
/** 模块名称：Modbus通讯                                                     **/
/** 文件名称：mbtcpserver.h                                                  **/
/** 版    本：V1.0.0                                                         **/
/** 简    介：用于实现Modbus TCP服务器端的相关属性及方法                     **/
/**           1、初始化作为Server的相关参数，如存储域等                      **/
/**           2、解析接收到的消息，并对数据对象进行相应操作，返回响应消息    **/
/**--------------------------------------------------------------------------**/
/** 修改记录：                                                               **/
/**     版本      日期              作者              说明                   **/
/**     V1.0.0  2016-04-17          尹家军            创建文件               **/
/**                                                                          **/
/******************************************************************************/ 

#ifndef __mbtcpserver_h
#define __mbtcpserver_h

#include "mbtcp.h"
#include "dataobject.h"
#include "mbcommon.h"


/*解析接收到的信息，返回响应命令的长度*/
uint16_t ParsingClientAccessCommand(uint8_t *receivedMessage,uint8_t *respondBytes);

#endif
/*********** (C) COPYRIGHT 1999-2016 Moonan Technology *********END OF FILE****/