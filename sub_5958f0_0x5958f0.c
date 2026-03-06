// 函数名称: sub_5958f0
// 虚拟地址: 0x5958f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_5958f0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (*(arg1 + 0x10) != 0)
    if (*(arg1 + 0x10) != 0)
        int32_t esi_1 = *(arg1 + 0xac)
        int32_t ecx_2 = esi_1 - *(arg1 + 0xa8)
        
        if (ecx_2 s< arg2)
            int32_t ecx_3 = *(arg1 + 0x1c)
            int32_t edx_1 = *(arg1 + 0x14)
            *(arg1 + 0xa8) = esi_1
            edx_1(ecx_3, arg2 - ecx_2)
            return 
    
    *(arg1 + 0xa8) += arg2
}
