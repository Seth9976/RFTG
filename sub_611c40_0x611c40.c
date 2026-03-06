// 函数名称: sub_611c40
// 虚拟地址: 0x611c40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_611c40(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t result
    int32_t result
    
    while (true)
        int32_t ecx_1 = arg6
        result = arg6 - 1
        arg6 = result
        
        if (ecx_1 == 0)
            break
        
        int32_t edi_1 = arg5
        char* ecx_2 = arg3
        int32_t* esi_1 = ecx_2
        
        if (edi_1 s> 3)
            void* eax_2 = ecx_2 & 3
            
            if (eax_2 == 1)
                *ecx_2 = arg2.b
                esi_1 = &ecx_2[1]
                edi_1 -= 1
            label_611c7a:
                *esi_1 = arg2.b
                esi_1 += 1
                edi_1 -= 1
            label_611c7e:
                *esi_1 = arg2.b
                esi_1 += 1
                edi_1 -= 1
            else
                if (eax_2 == 2)
                    goto label_611c7a
                
                if (eax_2 == 3)
                    goto label_611c7e
            
            int32_t ecx_4 = edi_1 s>> 2
            uint32_t ebx_2 = (ecx_4 + 3) u>> 2
            int32_t* eax_6 = esi_1
            
            if (ecx_4 != 0)
                switch (ecx_4 & 3)
                    case 0
                        goto label_611caa
                    case 1
                        goto label_611ca2
                    case 2
                        while (true)
                            *eax_6 = arg2
                            eax_6 = &eax_6[1]
                        label_611ca2:
                            *eax_6 = arg2
                            eax_6 = &eax_6[1]
                            uint32_t temp6_1 = ebx_2
                            ebx_2 -= 1
                            
                            if (temp6_1 == 1)
                                break
                            
                        label_611caa:
                            *eax_6 = arg2
                            eax_6 = &eax_6[1]
                        label_611caf:
                            *eax_6 = arg2
                            eax_6 = &eax_6[1]
                    case 3
                        goto label_611caf
            
            ecx_2 = arg3
        
        int32_t eax_8 = edi_1 & 3
        
        if (eax_8 != 0)
            void* esi_2 = esi_1 + (edi_1 & 0xfffffffc)
            
            if (eax_8 == 1)
                *esi_2 = arg2.b
            else
                if (eax_8 == 2)
                    goto label_611cd6
                
                if (eax_8 == 3)
                    *esi_2 = arg2.b
                    esi_2 += 1
                label_611cd6:
                    *esi_2 = arg2.b
                    *(esi_2 + 1) = arg2.b
        
        arg3 = &ecx_2[arg4]
    
    return result
}
