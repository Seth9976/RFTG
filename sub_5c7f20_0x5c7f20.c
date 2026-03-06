// 函数名称: sub_5c7f20
// 虚拟地址: 0x5c7f20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c7f20(int32_t arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t __saved_ebx = 0x2c
    int32_t __saved_esi = arg1
    int32_t eax_1 = sub_5cd400()
    
    if (eax_1 != 0)
        int32_t __saved_ebx_1 = 0x2c
        int32_t __saved_esi_1 = eax_1 + 1
        int32_t eax_4 = sub_5cd400()
        
        if (eax_4 != 0)
            int32_t ebx_1 = eax_4 - eax_1
            int32_t var_18 = ebx_1
            int32_t result = sub_5d0ac0()
            
            if (result == 0)
                sub_5cd050(result)
                return 0
            
            int32_t var_18_2 = ebx_1
            int32_t var_1c = eax_1 + 1
            int32_t result_1 = result
            sub_5cd110()
            *(result - eax_1 + eax_4 - 1) = 0
            return result
    
    return 0
}
