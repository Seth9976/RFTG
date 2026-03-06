// 函数名称: sub_598300
// 虚拟地址: 0x598300
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_598300(int32_t* arg1)
{
    // 第一条实际指令: int32_t* edi = arg1
    int32_t* edi = arg1
    edi[0xda8] = 0
    int32_t result = sub_598220(edi)
    
    if (result == 0)
        return result
    
    for (uint32_t i = zx.d(sub_596d80(edi)); i != 0xd9; i = zx.d(sub_596d80(edi)))
        if (i != 0xda)
            if (sub_5972f0(i, edi) == 0)
                return 0
        else
            if (sub_5978c0() == 0)
                return 0
            
            char* eax_2
            void* ecx_1
            eax_2, ecx_1 = sub_596e90(edi)
            
            if (eax_2 == 0)
                return 0
            
            if (edi[0xda1].b == 0xff)
                while (true)
                    void* esi_1 = *edi
                    
                    if (*(esi_1 + 0x10) != 0)
                        eax_2, ecx_1 = (*(esi_1 + 0x18))(*(esi_1 + 0x1c))
                        
                        if (eax_2 != 0 && (*(esi_1 + 0x20) == 0
                                || sbb.d(eax_2, eax_2, *(esi_1 + 0xa8) u< *(esi_1 + 0xac))
                                != 0xffffffff))
                            edi = arg1
                            break
                    else if (sbb.d(eax_2, eax_2, *(esi_1 + 0xa8) u< *(esi_1 + 0xac)) != 0xffffffff)
                        edi = arg1
                        break
                    
                    void* esi_2 = *arg1
                    eax_2 = *(esi_2 + 0xa8)
                    
                    if (eax_2 u< *(esi_2 + 0xac))
                    label_598417:
                        ecx_1.b = *eax_2
                        *(esi_2 + 0xa8) = &eax_2[1]
                        eax_2 = zx.d(ecx_1.b)
                        
                        if (eax_2 == 0xff)
                            void* esi_3 = *arg1
                            char* eax_13 = *(esi_3 + 0xa8)
                            
                            if (eax_13 u< *(esi_3 + 0xac))
                                ecx_1.b = *eax_13
                                *(esi_3 + 0xa8) = &eax_13[1]
                                arg1[0xda1].b = ecx_1.b
                                edi = arg1
                            else if (*(esi_3 + 0x20) == 0)
                                arg1[0xda1].b = 0
                                edi = arg1
                            else
                                int32_t eax_17 =
                                    (*(esi_3 + 0x10))(*(esi_3 + 0x1c), esi_3 + 0x28, *(esi_3 + 0x24))
                                
                                if (eax_17 != 0)
                                    *(esi_3 + 0xa8) = esi_3 + 0x28
                                    *(esi_3 + 0xac) = eax_17 + esi_3 + 0x28
                                else
                                    char* eax_19 = *(esi_3 + 0xac) - 1
                                    *(esi_3 + 0x20) = 0
                                    *(esi_3 + 0xa8) = eax_19
                                    *eax_19 = 0
                                
                                char* eax_21 = *(esi_3 + 0xa8)
                                char ecx_6 = *eax_21
                                *(esi_3 + 0xa8) = &eax_21[1]
                                arg1[0xda1].b = ecx_6
                                edi = arg1
                            
                            break
                        
                        if (eax_2 != 0)
                            return 0
                    else if (*(esi_2 + 0x20) != 0)
                        int32_t eax_8
                        eax_8, ecx_1 = (*(esi_2 + 0x10))(*(esi_2 + 0x1c), esi_2 + 0x28, *(esi_2 + 0x24))
                        
                        if (eax_8 != 0)
                            *(esi_2 + 0xa8) = esi_2 + 0x28
                            *(esi_2 + 0xac) = eax_8 + esi_2 + 0x28
                        else
                            char* eax_10 = *(esi_2 + 0xac) - 1
                            *(esi_2 + 0x20) = 0
                            *(esi_2 + 0xa8) = eax_10
                            *eax_10 = 0
                        
                        eax_2 = *(esi_2 + 0xa8)
                        goto label_598417
                    
                    edi = arg1
    
    return 1
}
