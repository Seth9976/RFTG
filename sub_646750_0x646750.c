// 函数名称: sub_646750
// 虚拟地址: 0x646750
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_646750(int32_t* arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: char* eax = arg2
    char* eax = arg2
    int32_t var_8 = 0
    void* edx = &eax[1]
    char i
    
    do
        i = *eax
        eax = &eax[1]
    while (i != 0)
    __alloca_probe_16(eax - edx + 2)
    int32_t __saved_edi
    int32_t* esi = &__saved_edi
    int32_t* var_10 = &__saved_edi
    char* eax_3 = arg2
    void* ebx_1 = eax - edx + 1
    int32_t ecx
    
    do
        ecx.b = *eax_3
        *(&__saved_edi - arg2 + eax_3) = ecx.b
        eax_3 = &eax_3[1]
    while (ecx.b != 0)
    int32_t var_24
    void* edi_1 = &var_24:3
    
    do
        eax_3.b = *(edi_1 + 1)
        edi_1 += 1
    while (eax_3.b != 0)
    
    int32_t* ecx_2 = arg1
    *edi_1 = 0x3d
    char* i_1 = nullptr
    arg2 = nullptr
    
    if (ecx_2[2] s> 0)
        do
            int32_t edi_3 = 0
            
            if (ebx_1 s> 0)
                void* eax_5 = *(*ecx_2 + (i_1 << 2)) - esi
                void* var_14_1 = eax_5
                
                while (true)
                    var_24 = sx.d(*(eax_5 + esi))
                    ebx_1 = eax - edx + 1
                    
                    if (sub_5a757a(var_24) != sub_5a757a(sx.d(*esi)))
                        ecx_2 = arg1
                        esi = var_10
                        i_1 = arg2
                        goto label_64681b
                    
                    edi_3 += 1
                    esi += 1
                    
                    if (edi_3 s>= ebx_1)
                        ecx_2 = arg1
                        esi = var_10
                        i_1 = arg2
                        break
                    
                    eax_5 = var_14_1
            
            if (arg3 == var_8)
                return *(*ecx_2 + (i_1 << 2)) + ebx_1
            
            var_8 += 1
        label_64681b:
            i_1 = &i_1[1]
            arg2 = i_1
        while (i_1 s< ecx_2[2])
    
    return 0
}
