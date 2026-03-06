// 函数名称: sub_611d00
// 虚拟地址: 0x611d00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_611d00(int32_t arg1, int32_t arg2, int16_t* arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t result
    int32_t result
    
    while (true)
        int32_t ecx_1 = arg6
        result = arg6 - 1
        arg6 = result
        
        if (ecx_1 == 0)
            break
        
        int32_t ebx_1 = arg5
        int16_t* eax_1 = arg3
        void* edi_1 = eax_1
        
        if (ebx_1 s> 1)
            if ((eax_1.b & 2) != 0)
                *eax_1 = arg2.w
                edi_1 = &eax_1[1]
                ebx_1 -= 1
            
            int32_t ecx_3 = ebx_1 s>> 1
            uint32_t esi_2 = (ecx_3 + 3) u>> 2
            void* eax_2 = edi_1
            
            if (ecx_3 != 0)
                switch (ecx_3 & 3)
                    case 0
                        goto label_611d52
                    case 1
                        goto label_611d4a
                    case 2
                        while (true)
                            *eax_2 = arg2
                            eax_2 += 4
                        label_611d4a:
                            *eax_2 = arg2
                            eax_2 += 4
                            uint32_t temp0_1 = esi_2
                            esi_2 -= 1
                            
                            if (temp0_1 == 1)
                                break
                            
                        label_611d52:
                            *eax_2 = arg2
                            eax_2 += 4
                        label_611d57:
                            *eax_2 = arg2
                            eax_2 += 4
                    case 3
                        goto label_611d57
            
            eax_1 = arg3
        
        if ((ebx_1.b & 1) != 0)
            *(edi_1 + (ebx_1 << 1) - 2) = arg2.w
        
        arg3 = eax_1 + arg4
    
    return result
}
