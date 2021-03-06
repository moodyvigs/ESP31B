/*
 * ESPRSSIF MIT License
 *
 * Copyright (c) 2015 <ESPRESSIF SYSTEMS (SHANGHAI) PTE LTD>
 *
 * Permission is hereby granted for use on ESPRESSIF SYSTEMS ESP32 only, in which case,
 * it is free of charge, to any person obtaining a copy of this software and associated
 * documentation files (the "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the Software is furnished
 * to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or
 * substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 */

#ifndef _RMT_REG_H
#define _RMT_REG_H

#define RMT_CH0DATA (DR_REG_RMT_BASE + 0x0000)
#define RMT_CH1DATA (DR_REG_RMT_BASE + 0x0004)
#define RMT_CH2DATA (DR_REG_RMT_BASE + 0x0008)
#define RMT_CH3DATA (DR_REG_RMT_BASE + 0x000c)
#define RMT_CH4DATA (DR_REG_RMT_BASE + 0x0010)
#define RMT_CH5DATA (DR_REG_RMT_BASE + 0x0014)
#define RMT_CH6DATA (DR_REG_RMT_BASE + 0x0018)
#define RMT_CH7DATA (DR_REG_RMT_BASE + 0x001c)

#define RMT_CH0CONF0 (DR_REG_RMT_BASE + 0x0020)
#define RMT_CLK_EN (BIT(31))
#define RMT_MEM_PD (BIT(30))
#define RMT_CARRIER_OUT_LV_CH0 (BIT(29))
#define RMT_CARRIER_EN_CH0 (BIT(28))
#define RMT_MEM_SIZE_CH0 0x0000000F
#define RMT_MEM_SIZE_CH0_S 24
#define RMT_IDLE_THRES_CH0 0x0000FFFF
#define RMT_IDLE_THRES_CH0_S 8
#define RMT_DIV_CNT_CH0 0x000000FF
#define RMT_DIV_CNT_CH0_S 0

#define RMT_CH0CONF1 (DR_REG_RMT_BASE + 0x0024)
#define RMT_REF_CNT_RST_CH0 (BIT(16))
#define RMT_RX_FILTER_THRES_CH0 0x000000FF
#define RMT_RX_FILTER_THRES_CH0_S 8
#define RMT_RX_FILTER_EN_CH0 (BIT(7))
#define RMT_TX_CONTI_MODE_CH0 (BIT(6))
#define RMT_MEM_OWNER_CH0 (BIT(5))
#define RMT_APB_MEM_RST_CH0 (BIT(4))
#define RMT_MEM_RD_RST_CH0 (BIT(3))
#define RMT_MEM_WR_RST_CH0 (BIT(2))
#define RMT_RX_EN_CH0 (BIT(1))
#define RMT_TX_START_CH0 (BIT(0))

#define RMT_CH1CONF0 (DR_REG_RMT_BASE + 0x0028)
#define RMT_CARRIER_OUT_LV_CH1 (BIT(29))
#define RMT_CARRIER_EN_CH1 (BIT(28))
#define RMT_MEM_SIZE_CH1 0x0000000F
#define RMT_MEM_SIZE_CH1_S 24
#define RMT_IDLE_THRES_CH1 0x0000FFFF
#define RMT_IDLE_THRES_CH1_S 8
#define RMT_DIV_CNT_CH1 0x000000FF
#define RMT_DIV_CNT_CH1_S 0

#define RMT_CH1CONF1 (DR_REG_RMT_BASE + 0x002c)
#define RMT_REF_CNT_RST_CH1 (BIT(16))
#define RMT_RX_FILTER_THRES_CH1 0x000000FF
#define RMT_RX_FILTER_THRES_CH1_S 8
#define RMT_RX_FILTER_EN_CH1 (BIT(7))
#define RMT_TX_CONTI_MODE_CH1 (BIT(6))
#define RMT_MEM_OWNER_CH1 (BIT(5))
#define RMT_APB_MEM_RST_CH1 (BIT(4))
#define RMT_MEM_RD_RST_CH1 (BIT(3))
#define RMT_MEM_WR_RST_CH1 (BIT(2))
#define RMT_RX_EN_CH1 (BIT(1))
#define RMT_TX_START_CH1 (BIT(0))

#define RMT_CH2CONF0 (DR_REG_RMT_BASE + 0x0030)
#define RMT_CARRIER_OUT_LV_CH2 (BIT(29))
#define RMT_CARRIER_EN_CH2 (BIT(28))
#define RMT_MEM_SIZE_CH2 0x0000000F
#define RMT_MEM_SIZE_CH2_S 24
#define RMT_IDLE_THRES_CH2 0x0000FFFF
#define RMT_IDLE_THRES_CH2_S 8
#define RMT_DIV_CNT_CH2 0x000000FF
#define RMT_DIV_CNT_CH2_S 0

#define RMT_CH2CONF1 (DR_REG_RMT_BASE + 0x0034)
#define RMT_REF_CNT_RST_CH2 (BIT(16))
#define RMT_RX_FILTER_THRES_CH2 0x000000FF
#define RMT_RX_FILTER_THRES_CH2_S 8
#define RMT_RX_FILTER_EN_CH2 (BIT(7))
#define RMT_TX_CONTI_MODE_CH2 (BIT(6))
#define RMT_MEM_OWNER_CH2 (BIT(5))
#define RMT_APB_MEM_RST_CH2 (BIT(4))
#define RMT_MEM_RD_RST_CH2 (BIT(3))
#define RMT_MEM_WR_RST_CH2 (BIT(2))
#define RMT_RX_EN_CH2 (BIT(1))
#define RMT_TX_START_CH2 (BIT(0))

#define RMT_CH3CONF0 (DR_REG_RMT_BASE + 0x0038)
#define RMT_CARRIER_OUT_LV_CH3 (BIT(29))
#define RMT_CARRIER_EN_CH3 (BIT(28))
#define RMT_MEM_SIZE_CH3 0x0000000F
#define RMT_MEM_SIZE_CH3_S 24
#define RMT_IDLE_THRES_CH3 0x0000FFFF
#define RMT_IDLE_THRES_CH3_S 8
#define RMT_DIV_CNT_CH3 0x000000FF
#define RMT_DIV_CNT_CH3_S 0

#define RMT_CH3CONF1 (DR_REG_RMT_BASE + 0x003c)
#define RMT_REF_CNT_RST_CH3 (BIT(16))
#define RMT_RX_FILTER_THRES_CH3 0x000000FF
#define RMT_RX_FILTER_THRES_CH3_S 8
#define RMT_RX_FILTER_EN_CH3 (BIT(7))
#define RMT_TX_CONTI_MODE_CH3 (BIT(6))
#define RMT_MEM_OWNER_CH3 (BIT(5))
#define RMT_APB_MEM_RST_CH3 (BIT(4))
#define RMT_MEM_RD_RST_CH3 (BIT(3))
#define RMT_MEM_WR_RST_CH3 (BIT(2))
#define RMT_RX_EN_CH3 (BIT(1))
#define RMT_TX_START_CH3 (BIT(0))

#define RMT_CH4CONF0 (DR_REG_RMT_BASE + 0x0040)
#define RMT_CARRIER_OUT_LV_CH4 (BIT(29))
#define RMT_CARRIER_EN_CH4 (BIT(28))
#define RMT_MEM_SIZE_CH4 0x0000000F
#define RMT_MEM_SIZE_CH4_S 24
#define RMT_IDLE_THRES_CH4 0x0000FFFF
#define RMT_IDLE_THRES_CH4_S 8
#define RMT_DIV_CNT_CH4 0x000000FF
#define RMT_DIV_CNT_CH4_S 0

#define RMT_CH4CONF1 (DR_REG_RMT_BASE + 0x0044)
#define RMT_REF_CNT_RST_CH4 (BIT(16))
#define RMT_RX_FILTER_THRES_CH4 0x000000FF
#define RMT_RX_FILTER_THRES_CH4_S 8
#define RMT_RX_FILTER_EN_CH4 (BIT(7))
#define RMT_TX_CONTI_MODE_CH4 (BIT(6))
#define RMT_MEM_OWNER_CH4 (BIT(5))
#define RMT_APB_MEM_RST_CH4 (BIT(4))
#define RMT_MEM_RD_RST_CH4 (BIT(3))
#define RMT_MEM_WR_RST_CH4 (BIT(2))
#define RMT_RX_EN_CH4 (BIT(1))
#define RMT_TX_START_CH4 (BIT(0))

#define RMT_CH5CONF0 (DR_REG_RMT_BASE + 0x0048)
#define RMT_CARRIER_OUT_LV_CH5 (BIT(29))
#define RMT_CARRIER_EN_CH5 (BIT(28))
#define RMT_MEM_SIZE_CH5 0x0000000F
#define RMT_MEM_SIZE_CH5_S 24
#define RMT_IDLE_THRES_CH5 0x0000FFFF
#define RMT_IDLE_THRES_CH5_S 8
#define RMT_DIV_CNT_CH5 0x000000FF
#define RMT_DIV_CNT_CH5_S 0

#define RMT_CH5CONF1 (DR_REG_RMT_BASE + 0x004c)
#define RMT_REF_CNT_RST_CH5 (BIT(16))
#define RMT_RX_FILTER_THRES_CH5 0x000000FF
#define RMT_RX_FILTER_THRES_CH5_S 8
#define RMT_RX_FILTER_EN_CH5 (BIT(7))
#define RMT_TX_CONTI_MODE_CH5 (BIT(6))
#define RMT_MEM_OWNER_CH5 (BIT(5))
#define RMT_APB_MEM_RST_CH5 (BIT(4))
#define RMT_MEM_RD_RST_CH5 (BIT(3))
#define RMT_MEM_WR_RST_CH5 (BIT(2))
#define RMT_RX_EN_CH5 (BIT(1))
#define RMT_TX_START_CH5 (BIT(0))

#define RMT_CH6CONF0 (DR_REG_RMT_BASE + 0x0050)
#define RMT_CARRIER_OUT_LV_CH6 (BIT(29))
#define RMT_CARRIER_EN_CH6 (BIT(28))
#define RMT_MEM_SIZE_CH6 0x0000000F
#define RMT_MEM_SIZE_CH6_S 24
#define RMT_IDLE_THRES_CH6 0x0000FFFF
#define RMT_IDLE_THRES_CH6_S 8
#define RMT_DIV_CNT_CH6 0x000000FF
#define RMT_DIV_CNT_CH6_S 0

#define RMT_CH6CONF1 (DR_REG_RMT_BASE + 0x0054)
#define RMT_REF_CNT_RST_CH6 (BIT(16))
#define RMT_RX_FILTER_THRES_CH6 0x000000FF
#define RMT_RX_FILTER_THRES_CH6_S 8
#define RMT_RX_FILTER_EN_CH6 (BIT(7))
#define RMT_TX_CONTI_MODE_CH6 (BIT(6))
#define RMT_MEM_OWNER_CH6 (BIT(5))
#define RMT_APB_MEM_RST_CH6 (BIT(4))
#define RMT_MEM_RD_RST_CH6 (BIT(3))
#define RMT_MEM_WR_RST_CH6 (BIT(2))
#define RMT_RX_EN_CH6 (BIT(1))
#define RMT_TX_START_CH6 (BIT(0))

#define RMT_CH7CONF0 (DR_REG_RMT_BASE + 0x0058)
#define RMT_CARRIER_OUT_LV_CH7 (BIT(29))
#define RMT_CARRIER_EN_CH7 (BIT(28))
#define RMT_MEM_SIZE_CH7 0x0000000F
#define RMT_MEM_SIZE_CH7_S 24
#define RMT_IDLE_THRES_CH7 0x0000FFFF
#define RMT_IDLE_THRES_CH7_S 8
#define RMT_DIV_CNT_CH7 0x000000FF
#define RMT_DIV_CNT_CH7_S 0

#define RMT_CH7CONF1 (DR_REG_RMT_BASE + 0x005c)
#define RMT_REF_CNT_RST_CH7 (BIT(16))
#define RMT_RX_FILTER_THRES_CH7 0x000000FF
#define RMT_RX_FILTER_THRES_CH7_S 8
#define RMT_RX_FILTER_EN_CH7 (BIT(7))
#define RMT_TX_CONTI_MODE_CH7 (BIT(6))
#define RMT_MEM_OWNER_CH7 (BIT(5))
#define RMT_APB_MEM_RST_CH7 (BIT(4))
#define RMT_MEM_RD_RST_CH7 (BIT(3))
#define RMT_MEM_WR_RST_CH7 (BIT(2))
#define RMT_RX_EN_CH7 (BIT(1))
#define RMT_TX_START_CH7 (BIT(0))

#define RMT_CH0STATUS (DR_REG_RMT_BASE + 0x0060)
#define RMT_STATUS_CH0 0xFFFFFFFF
#define RMT_STATUS_CH0_S 0

#define RMT_CH1STATUS (DR_REG_RMT_BASE + 0x0064)
#define RMT_STATUS_CH1 0xFFFFFFFF
#define RMT_STATUS_CH1_S 0

#define RMT_CH2STATUS (DR_REG_RMT_BASE + 0x0068)
#define RMT_STATUS_CH2 0xFFFFFFFF
#define RMT_STATUS_CH2_S 0

#define RMT_CH3STATUS (DR_REG_RMT_BASE + 0x006c)
#define RMT_STATUS_CH3 0xFFFFFFFF
#define RMT_STATUS_CH3_S 0

#define RMT_CH4STATUS (DR_REG_RMT_BASE + 0x0070)
#define RMT_STATUS_CH4 0xFFFFFFFF
#define RMT_STATUS_CH4_S 0

#define RMT_CH5STATUS (DR_REG_RMT_BASE + 0x0074)
#define RMT_STATUS_CH5 0xFFFFFFFF
#define RMT_STATUS_CH5_S 0

#define RMT_CH6STATUS (DR_REG_RMT_BASE + 0x0078)
#define RMT_STATUS_CH6 0xFFFFFFFF
#define RMT_STATUS_CH6_S 0

#define RMT_CH7STATUS (DR_REG_RMT_BASE + 0x007c)
#define RMT_STATUS_CH7 0xFFFFFFFF
#define RMT_STATUS_CH7_S 0

#define RMT_CH0ADDR (DR_REG_RMT_BASE + 0x0080)
#define RMT_APB_MEM_ADDR_CH0 0xFFFFFFFF
#define RMT_APB_MEM_ADDR_CH0_S 0

#define RMT_CH1ADDR (DR_REG_RMT_BASE + 0x0084)
#define RMT_APB_MEM_ADDR_CH1 0xFFFFFFFF
#define RMT_APB_MEM_ADDR_CH1_S 0

#define RMT_CH2ADDR (DR_REG_RMT_BASE + 0x0088)
#define RMT_APB_MEM_ADDR_CH2 0xFFFFFFFF
#define RMT_APB_MEM_ADDR_CH2_S 0

#define RMT_CH3ADDR (DR_REG_RMT_BASE + 0x008c)
#define RMT_APB_MEM_ADDR_CH3 0xFFFFFFFF
#define RMT_APB_MEM_ADDR_CH3_S 0

#define RMT_CH4ADDR (DR_REG_RMT_BASE + 0x0090)
#define RMT_APB_MEM_ADDR_CH4 0xFFFFFFFF
#define RMT_APB_MEM_ADDR_CH4_S 0

#define RMT_CH5ADDR (DR_REG_RMT_BASE + 0x0094)
#define RMT_APB_MEM_ADDR_CH5 0xFFFFFFFF
#define RMT_APB_MEM_ADDR_CH5_S 0

#define RMT_CH6ADDR (DR_REG_RMT_BASE + 0x0098)
#define RMT_APB_MEM_ADDR_CH6 0xFFFFFFFF
#define RMT_APB_MEM_ADDR_CH6_S 0

#define RMT_CH7ADDR (DR_REG_RMT_BASE + 0x009c)
#define RMT_APB_MEM_ADDR_CH7 0xFFFFFFFF
#define RMT_APB_MEM_ADDR_CH7_S 0

#define RMT_INT_RAW (DR_REG_RMT_BASE + 0x00a0)
#define RMT_RMT_CH7_ERR_INT_RAW (BIT(23))
#define RMT_RMT_CH7_RX_END_INT_RAW (BIT(22))
#define RMT_RMT_CH7_TX_END_INT_RAW (BIT(21))
#define RMT_RMT_CH6_ERR_INT_RAW (BIT(20))
#define RMT_RMT_CH6_RX_END_INT_RAW (BIT(19))
#define RMT_RMT_CH6_TX_END_INT_RAW (BIT(18))
#define RMT_RMT_CH5_ERR_INT_RAW (BIT(17))
#define RMT_RMT_CH5_RX_END_INT_RAW (BIT(16))
#define RMT_RMT_CH5_TX_END_INT_RAW (BIT(15))
#define RMT_RMT_CH4_ERR_INT_RAW (BIT(14))
#define RMT_RMT_CH4_RX_END_INT_RAW (BIT(13))
#define RMT_RMT_CH4_TX_END_INT_RAW (BIT(12))
#define RMT_RMT_CH3_ERR_INT_RAW (BIT(11))
#define RMT_RMT_CH3_RX_END_INT_RAW (BIT(10))
#define RMT_RMT_CH3_TX_END_INT_RAW (BIT(9))
#define RMT_RMT_CH2_ERR_INT_RAW (BIT(8))
#define RMT_RMT_CH2_RX_END_INT_RAW (BIT(7))
#define RMT_RMT_CH2_TX_END_INT_RAW (BIT(6))
#define RMT_RMT_CH1_ERR_INT_RAW (BIT(5))
#define RMT_RMT_CH1_RX_END_INT_RAW (BIT(4))
#define RMT_RMT_CH1_TX_END_INT_RAW (BIT(3))
#define RMT_RMT_CH0_ERR_INT_RAW (BIT(2))
#define RMT_RMT_CH0_RX_END_INT_RAW (BIT(1))
#define RMT_RMT_CH0_TX_END_INT_RAW (BIT(0))

#define RMT_INT_ST (DR_REG_RMT_BASE + 0x00a4)
#define RMT_RMT_CH7_ERR_INT_ST (BIT(23))
#define RMT_RMT_CH7_RX_END_INT_ST (BIT(22))
#define RMT_RMT_CH7_TX_END_INT_ST (BIT(21))
#define RMT_RMT_CH6_ERR_INT_ST (BIT(20))
#define RMT_RMT_CH6_RX_END_INT_ST (BIT(19))
#define RMT_RMT_CH6_TX_END_INT_ST (BIT(18))
#define RMT_RMT_CH5_ERR_INT_ST (BIT(17))
#define RMT_RMT_CH5_RX_END_INT_ST (BIT(16))
#define RMT_RMT_CH5_TX_END_INT_ST (BIT(15))
#define RMT_RMT_CH4_ERR_INT_ST (BIT(14))
#define RMT_RMT_CH4_RX_END_INT_ST (BIT(13))
#define RMT_RMT_CH4_TX_END_INT_ST (BIT(12))
#define RMT_RMT_CH3_ERR_INT_ST (BIT(11))
#define RMT_RMT_CH3_RX_END_INT_ST (BIT(10))
#define RMT_RMT_CH3_TX_END_INT_ST (BIT(9))
#define RMT_RMT_CH2_ERR_INT_ST (BIT(8))
#define RMT_RMT_CH2_RX_END_INT_ST (BIT(7))
#define RMT_RMT_CH2_TX_END_INT_ST (BIT(6))
#define RMT_RMT_CH1_ERR_INT_ST (BIT(5))
#define RMT_RMT_CH1_RX_END_INT_ST (BIT(4))
#define RMT_RMT_CH1_TX_END_INT_ST (BIT(3))
#define RMT_RMT_CH0_ERR_INT_ST (BIT(2))
#define RMT_RMT_CH0_RX_END_INT_ST (BIT(1))
#define RMT_RMT_CH0_TX_END_INT_ST (BIT(0))

#define RMT_INT_ENA (DR_REG_RMT_BASE + 0x00a8)
#define RMT_RMT_CH7_ERR_INT_ENA (BIT(23))
#define RMT_RMT_CH7_RX_END_INT_ENA (BIT(22))
#define RMT_RMT_CH7_TX_END_INT_ENA (BIT(21))
#define RMT_RMT_CH6_ERR_INT_ENA (BIT(20))
#define RMT_RMT_CH6_RX_END_INT_ENA (BIT(19))
#define RMT_RMT_CH6_TX_END_INT_ENA (BIT(18))
#define RMT_RMT_CH5_ERR_INT_ENA (BIT(17))
#define RMT_RMT_CH5_RX_END_INT_ENA (BIT(16))
#define RMT_RMT_CH5_TX_END_INT_ENA (BIT(15))
#define RMT_RMT_CH4_ERR_INT_ENA (BIT(14))
#define RMT_RMT_CH4_RX_END_INT_ENA (BIT(13))
#define RMT_RMT_CH4_TX_END_INT_ENA (BIT(12))
#define RMT_RMT_CH3_ERR_INT_ENA (BIT(11))
#define RMT_RMT_CH3_RX_END_INT_ENA (BIT(10))
#define RMT_RMT_CH3_TX_END_INT_ENA (BIT(9))
#define RMT_RMT_CH2_ERR_INT_ENA (BIT(8))
#define RMT_RMT_CH2_RX_END_INT_ENA (BIT(7))
#define RMT_RMT_CH2_TX_END_INT_ENA (BIT(6))
#define RMT_RMT_CH1_ERR_INT_ENA (BIT(5))
#define RMT_RMT_CH1_RX_END_INT_ENA (BIT(4))
#define RMT_RMT_CH1_TX_END_INT_ENA (BIT(3))
#define RMT_RMT_CH0_ERR_INT_ENA (BIT(2))
#define RMT_RMT_CH0_RX_END_INT_ENA (BIT(1))
#define RMT_RMT_CH0_TX_END_INT_ENA (BIT(0))

#define RMT_INT_CLR (DR_REG_RMT_BASE + 0x00ac)
#define RMT_RMT_CH7_ERR_INT_CLR (BIT(23))
#define RMT_RMT_CH7_RX_END_INT_CLR (BIT(22))
#define RMT_RMT_CH7_TX_END_INT_CLR (BIT(21))
#define RMT_RMT_CH6_ERR_INT_CLR (BIT(20))
#define RMT_RMT_CH6_RX_END_INT_CLR (BIT(19))
#define RMT_RMT_CH6_TX_END_INT_CLR (BIT(18))
#define RMT_RMT_CH5_ERR_INT_CLR (BIT(17))
#define RMT_RMT_CH5_RX_END_INT_CLR (BIT(16))
#define RMT_RMT_CH5_TX_END_INT_CLR (BIT(15))
#define RMT_RMT_CH4_ERR_INT_CLR (BIT(14))
#define RMT_RMT_CH4_RX_END_INT_CLR (BIT(13))
#define RMT_RMT_CH4_TX_END_INT_CLR (BIT(12))
#define RMT_RMT_CH3_ERR_INT_CLR (BIT(11))
#define RMT_RMT_CH3_RX_END_INT_CLR (BIT(10))
#define RMT_RMT_CH3_TX_END_INT_CLR (BIT(9))
#define RMT_RMT_CH2_ERR_INT_CLR (BIT(8))
#define RMT_RMT_CH2_RX_END_INT_CLR (BIT(7))
#define RMT_RMT_CH2_TX_END_INT_CLR (BIT(6))
#define RMT_RMT_CH1_ERR_INT_CLR (BIT(5))
#define RMT_RMT_CH1_RX_END_INT_CLR (BIT(4))
#define RMT_RMT_CH1_TX_END_INT_CLR (BIT(3))
#define RMT_RMT_CH0_ERR_INT_CLR (BIT(2))
#define RMT_RMT_CH0_RX_END_INT_CLR (BIT(1))
#define RMT_RMT_CH0_TX_END_INT_CLR (BIT(0))

#define RMT_CH0CARRIER_DUTY (DR_REG_RMT_BASE + 0x00b0)
#define RMT_CARRIER_HIGH_CH0 0x0000FFFF
#define RMT_CARRIER_HIGH_CH0_S 16
#define RMT_CARRIER_LOW_CH0 0x0000FFFF
#define RMT_CARRIER_LOW_CH0_S 0

#define RMT_CH1CARRIER_DUTY (DR_REG_RMT_BASE + 0x00b4)
#define RMT_CARRIER_HIGH_CH1 0x0000FFFF
#define RMT_CARRIER_HIGH_CH1_S 16
#define RMT_CARRIER_LOW_CH1 0x0000FFFF
#define RMT_CARRIER_LOW_CH1_S 0

#define RMT_CH2CARRIER_DUTY (DR_REG_RMT_BASE + 0x00b8)
#define RMT_CARRIER_HIGH_CH2 0x0000FFFF
#define RMT_CARRIER_HIGH_CH2_S 16
#define RMT_CARRIER_LOW_CH2 0x0000FFFF
#define RMT_CARRIER_LOW_CH2_S 0

#define RMT_CH3CARRIER_DUTY (DR_REG_RMT_BASE + 0x00bc)
#define RMT_CARRIER_HIGH_CH3 0x0000FFFF
#define RMT_CARRIER_HIGH_CH3_S 16
#define RMT_CARRIER_LOW_CH3 0x0000FFFF
#define RMT_CARRIER_LOW_CH3_S 0

#define RMT_CH4CARRIER_DUTY (DR_REG_RMT_BASE + 0x00c0)
#define RMT_CARRIER_HIGH_CH4 0x0000FFFF
#define RMT_CARRIER_HIGH_CH4_S 16
#define RMT_CARRIER_LOW_CH4 0x0000FFFF
#define RMT_CARRIER_LOW_CH4_S 0

#define RMT_CH5CARRIER_DUTY (DR_REG_RMT_BASE + 0x00c4)
#define RMT_CARRIER_HIGH_CH5 0x0000FFFF
#define RMT_CARRIER_HIGH_CH5_S 16
#define RMT_CARRIER_LOW_CH5 0x0000FFFF
#define RMT_CARRIER_LOW_CH5_S 0

#define RMT_CH6CARRIER_DUTY (DR_REG_RMT_BASE + 0x00c8)
#define RMT_CARRIER_HIGH_CH6 0x0000FFFF
#define RMT_CARRIER_HIGH_CH6_S 16
#define RMT_CARRIER_LOW_CH6 0x0000FFFF
#define RMT_CARRIER_LOW_CH6_S 0

#define RMT_CH7CARRIER_DUTY (DR_REG_RMT_BASE + 0x00cc)
#define RMT_CARRIER_HIGH_CH7 0x0000FFFF
#define RMT_CARRIER_HIGH_CH7_S 16
#define RMT_CARRIER_LOW_CH7 0x0000FFFF
#define RMT_CARRIER_LOW_CH7_S 0

#define RMT_DATE (DR_REG_RMT_BASE + 0x00fc)
#define RMT_RMT_DATE 0xFFFFFFFF
#define RMT_RMT_DATE_S 0
#define RMT_RMT_DATE_VERSION 0x15012300

#endif
