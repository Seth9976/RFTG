// 函数名称: sub_5d1ab0
// 虚拟地址: 0x5d1ab0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5d1ab0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t edx = data_bee778
    int32_t edx = data_bee778
    int32_t eax = 0
    
    if (edx s> 0)
        int32_t* edi_1 = data_3168018
        int32_t* ecx_2 = edi_1
        
        do
            if (*ecx_2 == arg1 && ecx_2[1] == arg2)
                return eax * 0x2028 + edi_1
            
            eax += 1
            ecx_2 = &ecx_2[0x80a]
        while (eax s< edx)
    
    return 0
}
