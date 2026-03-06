// 函数名称: sub_5a96de
// 虚拟地址: 0x5a96de
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5a96de(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t esi = arg2
    int32_t esi = arg2
    
    if ((esi & (esi - 1)) != 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        return 0
    
    int32_t edi
    int32_t var_c_1 = edi
    int32_t result
    
    if (arg3 == 0 || arg3 u< arg1)
        if (esi u<= 4)
            esi = 4
        
        int32_t edi_3 = neg.d(arg3) & 3
        uint32_t eax_3 = edi_3 + esi - 1 + 4 + arg1
        
        if (arg1 u<= eax_3)
            int32_t eax_5 = sub_5a881a(eax_3)
            
            if (eax_5 != 0)
                result = ((eax_5 + edi_3 + esi - 1 + 4 + arg3) & not.d(esi - 1)) - arg3
                *(result - edi_3 - 4) = eax_5
            else
                result = 0
        else
            *__errno() = 0xc
            result = 0
    else
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = 0
    
    return result
}
