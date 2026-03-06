// 函数名称: sub_5686d0
// 虚拟地址: 0x5686d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __stdcallsub_5686d0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* ecx = arg1
    int32_t* ecx = arg1
    int32_t* i = *ecx
    
    if (i != 0)
        void* esi_1 = data_26a44e4
        
        do
            int32_t* i_1 = i
            i = i[0x10]
            int32_t* i_2 = i_1
            
            if (i_1 != 0)
                if (esi_1 == 0)
                    sub_4f4250()
                    esi_1 = data_26a44e4
                
                int32_t eax = 0
                int32_t* esi_2
                
                while (true)
                    if (1 << (eax.b + 4) s>= 0x48)
                        esi_2 = esi_1 + eax * 0x14
                        break
                    
                    eax += 1
                    
                    if (eax s>= 7)
                        esi_2 = esi_1 + 0x8c
                        break
                
                int32_t* ecx_2 = esi_2[1]
                int32_t edi_2 = esi_2[2] * esi_2[4]
                esi_2[3] -= 1
                
                if (ecx_2 == 0)
                label_56877c:
                    sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                        "c:\ax2010\engine\xAlloc.h", 0x81, "XAllocator::Free")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                while (true)
                    void* edx_2 = &ecx_2[1]
                    ecx_2 = *ecx_2
                    
                    if (i_1 u>= edx_2 && i_1 u< edx_2 + edi_2)
                        esi_2[4]
                        
                        if (mods.dp.d(sx.q(i_1 - edx_2), esi_2[4]) == 0)
                            *i_2 = *esi_2
                            ecx = arg1
                            *esi_2 = i_2
                            esi_1 = data_26a44e4
                            break
                        
                        i_1 = i_2
                    
                    if (ecx_2 == 0)
                        goto label_56877c
        while (i != 0)
    
    ecx[2] = 0
    *ecx = 0
    ecx[1] = 0
    return i
}
