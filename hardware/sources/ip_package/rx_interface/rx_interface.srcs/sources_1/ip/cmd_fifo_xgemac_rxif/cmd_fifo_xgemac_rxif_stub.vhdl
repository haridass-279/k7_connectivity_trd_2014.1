-- Copyright 1986-2014 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2014.1.0 (lin64) Build 826045 Tue Feb  4 21:41:43 MST 2014
-- Date        : Thu Feb  6 10:06:03 2014
-- Host        : xhd-ips64re11 running 64-bit Red Hat Enterprise Linux Client release 5.6 (Tikanga)
-- Command     : write_vhdl -force -mode synth_stub
--               /proj/xhd_vse_com/users/bokkaab/trd_2014.1_new/k7_connectivity_trd_ipi_2014.1/hardware/sources/ip_package/rx_interface/rx_interface.srcs/sources_1/ip/cmd_fifo_xgemac_rxif/cmd_fifo_xgemac_rxif_stub.vhdl
-- Design      : cmd_fifo_xgemac_rxif
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xc7k325tffg900-2
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity cmd_fifo_xgemac_rxif is
  Port ( 
    clk : in STD_LOGIC;
    rst : in STD_LOGIC;
    din : in STD_LOGIC_VECTOR ( 15 downto 0 );
    wr_en : in STD_LOGIC;
    rd_en : in STD_LOGIC;
    dout : out STD_LOGIC_VECTOR ( 15 downto 0 );
    full : out STD_LOGIC;
    empty : out STD_LOGIC
  );

end cmd_fifo_xgemac_rxif;

architecture stub of cmd_fifo_xgemac_rxif is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
attribute black_box_pad_pin of stub : architecture is "clk,rst,din[15:0],wr_en,rd_en,dout[15:0],full,empty";
attribute x_core_info : string;
attribute x_core_info of stub : architecture is "fifo_generator_v12_0,Vivado 2014.1.0";
begin
end;
