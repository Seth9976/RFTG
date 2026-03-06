// 函数名称: sub_531fe0
// 虚拟地址: 0x531fe0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_531fe0()
{
    // 第一条实际指令: void* eax = data_27e7fcc
    void* eax = data_27e7fcc
    
    if (eax == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* ebx = *(eax + 0x18)
    int32_t ecx = ebx[1]
    int32_t* esi = *(eax + 0x18)
    void* edi = eax + 0x18
    void* result = nullptr
    void* var_8 = edi
    int32_t i
    
    if (ecx == 0)
    label_532055:
        i = 0
    else
        void* edx_1 = *ebx
        
        while ((*(edx_1 + 0x28) & 0xffff0000) == 0)
            result += 1
            edx_1 += 0x2c
            
            if (result u>= ecx)
                goto label_532055
        
        i = *(edx_1 + 0x28)
    
    if (i != 0)
        do
            int32_t edi_1 = *ebx
            int32_t esi_1 = ebx[1]
            int32_t edx_2 = i & 0xffff
            int32_t ecx_1 = edx_2 + 1
            result = edx_2 * 0x2c + edi_1
            
            if (ecx_1 u>= esi_1)
            label_532095:
                i = 0
            else
                void* edx_5 = ecx_1 * 0x2c + edi_1
                
                while ((*(edx_5 + 0x28) & 0xffff0000) == 0)
                    ecx_1 += 1
                    edx_5 += 0x2c
                    
                    if (ecx_1 u>= esi_1)
                        goto label_532095
                
                i = *(edx_5 + 0x28)
            
            void* ecx_3 = *(data_27e7fcc + 0x18)
            int32_t esi_2 = *(ecx_3 + 0xc)
            *(ecx_3 + 0xc) = zx.d(*(result + 0x28))
            *(result + 0x28) = esi_2
            *(ecx_3 + 0x10) -= 1
        while (i != 0)
        
        edi = var_8
    
    if (*esi != 0)
        sub_5325a0(esi)
        result = *esi
        
        if (result != 0)
            result = _aligned_free_base(result)
        
        __builtin_memset(esi, 0, 0x14)
        esi[6] = 0
    
    int32_t* esi_3 = *edi
    
    if (esi_3 != 0)
        if (*esi_3 != 0)
            sub_5325a0(esi_3)
            int32_t eax_6 = *esi_3
            
            if (eax_6 != 0)
                _aligned_free_base(eax_6)
            
            __builtin_memset(esi_3, 0, 0x14)
            esi_3[6] = 0
        
        int32_t* esi_4 = *edi
        void* edi_3 = data_26a44e4
        
        if (edi_3 == 0)
            sub_4f4250()
            edi_3 = data_26a44e4
        
        int32_t eax_7 = 0
        int32_t* edi_4
        
        while (true)
            if (1 << (eax_7.b + 4) s>= 0x1c)
                edi_4 = edi_3 + eax_7 * 0x14
                break
            
            eax_7 += 1
            
            if (eax_7 s>= 7)
                edi_4 = edi_3 + 0x8c
                break
        
        edi_4[3] -= 1
        result = sub_4f4210(edi_4, esi_4)
        
        if (result.b == 0)
            sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 
                0x81, "XAllocator::Free")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        *esi_4 = *edi_4
        *edi_4 = esi_4
        *var_8 = 0
    
    return result
}
