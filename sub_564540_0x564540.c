// 函数名称: sub_564540
// 虚拟地址: 0x564540
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_564540(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: char* ecx = arg1[4]
    char* ecx = arg1[4]
    int32_t* eax = arg1[0xf]
    
    if (ecx != 8)
        int32_t edx_1 = eax[1]
        int32_t var_2c_1 = 1
        int32_t var_30_1 = edx_1
        char result = sub_551f30(*eax, arg2, edx_1, ecx, ecx)
        
        if (result == 0)
            return result
    else
        int32_t edi_1 = *arg1
        int32_t var_18 = eax[1]
        int32_t var_14_1 = edi_1
        int32_t var_10_1 = arg1[1]
        int32_t var_c_1 = sub_5540b0(arg1[5], edi_1)
        int32_t var_8_1 = arg1[5]
        sub_554750(arg2)
    
    return 1
}
