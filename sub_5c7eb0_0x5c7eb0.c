// 函数名称: sub_5c7eb0
// 虚拟地址: 0x5c7eb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c7eb0(int32_t arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t __saved_esi = 0x2c
    int32_t __saved_edi = arg1
    int32_t eax = sub_5cd400()
    
    if (eax == 0)
        return 0
    
    int32_t edi_1 = eax - arg1
    int32_t var_18 = edi_1 + 1
    int32_t result = sub_5d0ac0()
    
    if (result == 0)
        sub_5cd050(result)
        return 0
    
    int32_t var_18_2 = edi_1
    int32_t var_1c = arg1
    int32_t result_1 = result
    sub_5cd110()
    (result - arg1)[eax] = 0
    return result
}
