// 函数名称: sub_56c450
// 虚拟地址: 0x56c450
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_56c450(int32_t* arg1)
{
    // 第一条实际指令: int32_t* eax = data_315f8c8
    int32_t* eax = data_315f8c8
    int32_t* eax_1
    char* ecx
    int32_t ecx_1
    int32_t edx
    eax_1, ecx_1 = sub_504e50(eax, edx, ecx, eax)
    
    if (eax_1 == 0)
        eax_1.b = 0
        return 
    
    int32_t* esi = *eax_1
    int32_t eax_2 = *esi
    *arg1 = eax_2
    int32_t eax_4 = eax_2 * 0x140
    
    if (eax_4 != 0)
        eax_4, ecx_1 = sub_4cce80(eax_4)
    
    arg1[1] = eax_4
    int32_t i = 0
    
    if (*esi s> 0)
        int32_t var_8_1 = 0
        int32_t ebx_1 = 0
        
        do
            int32_t* edx_2 = esi[1] + var_8_1
            int16_t x87control
            int80_t st0_1
            st0_1, eax_4, x87control = sub_56c080(eax_4, edx_2, arg1[1] + ebx_1, x87control, edx_2)
            var_8_1 += 0x18
            i += 1
            ebx_1 += 0x140
        while (i s< *esi)
    
    if ((eax_1[2].b & 1) == 0)
        sub_4fed40(*eax_1, eax_1[3])
        *eax_1 = 0
    
    int32_t* eax_6 = eax_1[1]
    
    if (eax_6 != 0)
        sub_500770(eax_6)
        eax_1[1] = 0
    
    _aligned_free_base(eax_1)
    int32_t eax_7
    eax_7.b = 1
}
