// 函数名称: sub_4ccbc0
// 虚拟地址: 0x4ccbc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallsub_4ccbc0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* edx = arg1
    int32_t* edx = arg1
    void* esi = data_26a44e4
    int32_t i = 0
    int32_t i_1 = 0
    int32_t result
    
    do
        void** eax_2 = *(*edx + (i << 2))
        
        if (eax_2 != 0)
            while (true)
                void** ecx = eax_2[2]
                void** ebx_1 = eax_2
                void** var_8_1 = ebx_1
                
                if (esi == 0)
                    sub_4f4250()
                    esi = data_26a44e4
                
                int32_t eax_3 = 0
                void** ecx_2
                
                while (true)
                    if (1 << (eax_3.b + 4) s>= 0xc)
                        ecx_2 = esi + eax_3 * 0x14
                        break
                    
                    eax_3 += 1
                    
                    if (eax_3 s>= 7)
                        ecx_2 = esi + 0x8c
                        break
                
                int32_t* esi_1 = ecx_2[1]
                int32_t edi_2 = ecx_2[2] * ecx_2[4]
                ecx_2[3] -= 1
                
                if (esi_1 == 0)
                label_4ccc6c:
                    sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                        "c:\ax2010\engine\xAlloc.h", 0x81, "XAllocator::Free")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                while (true)
                    void* edx_2 = &esi_1[1]
                    esi_1 = *esi_1
                    
                    if (ebx_1 u>= edx_2 && ebx_1 u< edx_2 + edi_2)
                        ecx_2[4]
                        
                        if (mods.dp.d(sx.q(ebx_1 - edx_2), ecx_2[4]) == 0)
                            break
                        
                        ebx_1 = var_8_1
                    
                    if (esi_1 == 0)
                        goto label_4ccc6c
                
                esi = data_26a44e4
                *var_8_1 = *ecx_2
                *ecx_2 = var_8_1
                eax_2 = ecx
                
                if (eax_2 == 0)
                    i = i_1
                    edx = arg1
                    break
        
        result = *edx
        *(result + (i << 2)) = 0
        i += 1
        i_1 = i
    while (i u<= edx[1])
    
    edx[2] = 0
    return result
}
