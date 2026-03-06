// 函数名称: sub_56b4b0
// 虚拟地址: 0x56b4b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_56b4b0()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* result = data_3079210
    
    if (*(result + 0x14) != 0)
        void* edx_1 = data_26a44e4
        
        do
            void** ebx_1 = *(result + 0xc)
            void* ecx_1 = ebx_1[1]
            void** var_8_1 = ebx_1
            *(result + 0xc) = ecx_1
            
            if (ecx_1 == 0)
                *(result + 0x10) = 0
            else
                *(ecx_1 + 8) = 0
            
            *(result + 0x14) -= 1
            
            if (ebx_1 != 0)
                if (edx_1 == 0)
                    sub_4f4250()
                    edx_1 = data_26a44e4
                
                int32_t eax = 0
                void** esi_2
                
                while (true)
                    if (1 << (eax.b + 4) s>= 0xc)
                        esi_2 = edx_1 + eax * 0x14
                        break
                    
                    eax += 1
                    
                    if (eax s>= 7)
                        esi_2 = edx_1 + 0x8c
                        break
                
                esi_2[3] -= 1
                int32_t* ecx_3 = esi_2[1]
                
                if (ecx_3 == 0)
                label_56b56c:
                    sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                        "c:\ax2010\engine\xAlloc.h", 0x81, "XAllocator::Free")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                while (true)
                    void* edx_2 = &ecx_3[1]
                    ecx_3 = *ecx_3
                    
                    if (ebx_1 u>= edx_2 && ebx_1 u< edx_2 + esi_2[2] * esi_2[4])
                        esi_2[4]
                        
                        if (mods.dp.d(sx.q(ebx_1 - edx_2), esi_2[4]) == 0)
                            edx_1 = data_26a44e4
                            *var_8_1 = *esi_2
                            *esi_2 = var_8_1
                            result = data_3079210
                            break
                        
                        ebx_1 = var_8_1
                    
                    if (ecx_3 == 0)
                        goto label_56b56c
        while (*(result + 0x14) != 0)
    
    return result
}
