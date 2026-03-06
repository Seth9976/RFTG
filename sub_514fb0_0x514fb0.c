// 函数名称: sub_514fb0
// 虚拟地址: 0x514fb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_514fb0(void* arg1)
{
    // 第一条实际指令: if (data_27e7fcc == 0)
    if (data_27e7fcc == 0)
        return 
    
    int32_t* esi_1 = *(arg1 + 0xc)
    
    if (esi_1 != 0)
        sub_508cd0(esi_1)
        *(arg1 + 0xc) = 0
    
    int32_t* esi_2 = *(arg1 + 0x10)
    
    if (esi_2 != 0)
        sub_508cd0(esi_2)
        *(arg1 + 0x10) = 0
}
