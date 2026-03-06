// 函数名称: sub_4d8600
// 虚拟地址: 0x4d8600
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4d8600()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* result = data_27e7fe0
    
    if (result != 0 && *(result + 0x1c) != 0)
        while (*(result + 0x48) != 0)
            void** eax_1 = sub_4db440(result + 0x40)
            int32_t eax_2 = eax_1[0x3af]
            
            if (eax_2 != 0)
                (*(*data_3078804 + 0x50))(eax_2)
                eax_1[0x3af] = 0
            
            eax_1[0x217] = 0
            eax_1[0x10d] = 0
            eax_1[0x10c] = 0
            eax_1[2] = 0
            eax_1[1] = 0
            
            if (eax_1 != 0)
                void* edi_1 = data_26a44e4
                
                if (edi_1 == 0)
                    sub_4f4250()
                    edi_1 = data_26a44e4
                
                int32_t eax_4 = 0
                void** edi_2
                
                while (true)
                    if (1 << (eax_4.b + 4) s>= 0xf80)
                        edi_2 = edi_1 + eax_4 * 0x14
                        break
                    
                    eax_4 += 1
                    
                    if (eax_4 s>= 7)
                        edi_2 = edi_1 + 0x8c
                        break
                
                int32_t ecx_3 = edi_2[4]
                edi_2[3] -= 1
                
                if (ecx_3 != 0xffffffff)
                    int32_t eax_7 = edi_2[2] * ecx_3
                    int32_t* ecx_4 = edi_2[1]
                    int32_t var_8_1 = eax_7
                    
                    if (ecx_4 == 0)
                    label_4d8722:
                        sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                            "c:\ax2010\engine\xAlloc.h", 0x81, "XAllocator::Free")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    while (true)
                        void* edx_3 = &ecx_4[1]
                        ecx_4 = *ecx_4
                        
                        if (eax_1 u>= edx_3 && eax_1 u< edx_3 + eax_7)
                            edi_2[4]
                            
                            if (mods.dp.d(sx.q(eax_1 - edx_3), edi_2[4]) == 0)
                                *eax_1 = *edi_2
                                *edi_2 = eax_1
                                break
                            
                            eax_7 = var_8_1
                        
                        if (ecx_4 == 0)
                            goto label_4d8722
                else
                    _aligned_free_base(eax_1)
            
            result = data_27e7fe0
        
        *(result + 0x1c) = 0
    
    return result
}
