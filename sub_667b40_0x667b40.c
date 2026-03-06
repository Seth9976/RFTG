// 函数名称: sub_667b40
// 虚拟地址: 0x667b40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_667b40(char* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t ebx
    int32_t var_c = ebx
    int32_t eax = *(arg1 + 0xb4)
    int32_t i
    
    for (i = arg2; i u> eax; i -= eax)
        int32_t ebx_2 = *(arg1 + 0xb4)
        char* eax_1 = *(arg1 + 0xb0)
        sub_664410(arg1, eax_1, ebx_2)
        sub_662280(arg1, eax_1, ebx_2)
    
    if (i != 0)
        char* ebx_3 = *(arg1 + 0xb0)
        sub_664410(arg1, ebx_3, i)
        sub_662280(arg1, ebx_3, i)
    
    if (sub_666820(arg1) != 0)
        int32_t eax_5 = *(arg1 + 0x70)
        int32_t eax_8
        
        if ((*(arg1 + 0x100) & 0x20000000) == 0)
            eax_8 = eax_5 & 0x400
        else
            eax_8 = not.d(eax_5 u>> 9) & 1
        
        if (eax_8 != 0)
            sub_664270(arg1, "CRC error")
            return 1
        
        sub_6643b0(arg1, "CRC error")
    
    return 0
}
