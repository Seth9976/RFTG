// 函数名称: sub_5c9060
// 虚拟地址: 0x5c9060
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c9060(void* arg1 @ esi)
{
    // 第一条实际指令: if (*(arg1 + 8) == 0)
    if (*(arg1 + 8) == 0)
        void* ecx_1 = data_bed820
        int32_t eax_1 = *(ecx_1 + 0x10)
        
        if (eax_1 != 0)
            eax_1(ecx_1, arg1)
            uint32_t (* var_c_1)(void* arg1, void* arg2) = sub_5c8d00
            int32_t var_10_1 = 0x14
            int32_t var_14_1 = *(arg1 + 8)
            int32_t var_18_1 = *(arg1 + 0xc)
            sub_5d4d10()
    
    return *(arg1 + 8)
}
