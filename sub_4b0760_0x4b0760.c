// 函数名称: sub_4b0760
// 虚拟地址: 0x4b0760
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4b0760(void* arg1)
{
    // 第一条实际指令: void* edi = arg1
    void* edi = arg1
    char* var_8 = nullptr
    
    if (*(edi + 0x458) s> 0)
        char* ebx_1 = edi + 0x3c
        
        do
            void* eax = &ebx_1[0xfffffff0]
            ebx_1[0x76] = 0
            void* var_c_1 = eax
            int32_t j_1 = 2
            int32_t j
            
            do
                if (*eax != 0xffffffff)
                    int32_t ecx_2 = *eax & 0x7f
                    *(ecx_2 + edi + 0x1eb6) = 1
                    
                    if ((*eax & 0x80) != 0)
                        *ebx_1 = 1
                        ebx_1[0x67] -= 1
                        int32_t edx_2 = sub_4ae7d0(ecx_2, var_8, 0x12, edi)
                        
                        if (*(edi + 0x18) == 0)
                            int32_t var_20_1 = 1
                            sub_49ba20(var_8, edx_2)
                        
                        eax = var_c_1
                    
                    if (*eax == 0)
                        *ebx_1 = 1
                
                eax += 4
                j = j_1
                j_1 -= 1
                var_c_1 = eax
            while (j != 1)
            arg1 = &var_8[1]
            ebx_1 = &ebx_1[0xb4]
            var_8 = arg1
        while (arg1 s< sx.d(*(edi + 0x458)))
    
    if (*(edi + 0x1eb8) != 0)
        *(edi + 0x1eb7) = 1
    
    if (*(edi + 0x1ebe) != 0)
        *(edi + 0x1ebd) = 1
}
