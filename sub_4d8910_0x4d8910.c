// 函数名称: sub_4d8910
// 虚拟地址: 0x4d8910
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4d8910()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    sub_4d8600()
    void* ecx_1 = data_27e7fe0
    
    for (int32_t* i = nullptr; i s< 0x10; i = &i[1])
        int32_t eax_1 = *(i + ecx_1)
        
        if (eax_1 != 0)
            (*(*data_3078804 + 0x2c))(eax_1)
            ecx_1 = data_27e7fe0
    
    int32_t* result = *(ecx_1 + 0x14)
    
    if (result != 0)
        result = (*(*data_3078804 + 0x38))(result)
        ecx_1 = data_27e7fe0
    
    if (ecx_1 != 0)
        sub_4db4f0(ecx_1 + 0x40)
        void* esi = data_26a44e4
        int32_t* result_2 = data_27e7fe0
        int32_t* result_1 = result_2
        
        if (esi == 0)
            sub_4f4250()
            esi = data_26a44e4
        
        int32_t eax_4 = 0
        int32_t* esi_1
        
        while (true)
            if (1 << (eax_4.b + 4) s>= 0x54)
                esi_1 = esi + eax_4 * 0x14
                break
            
            eax_4 += 1
            
            if (eax_4 s>= 7)
                esi_1 = esi + 0x8c
                break
        
        int32_t* ecx_6 = esi_1[1]
        int32_t edi_2 = esi_1[2] * esi_1[4]
        esi_1[3] -= 1
        
        if (ecx_6 == 0)
        label_4d89fc:
            sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 
                0x81, "XAllocator::Free")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        while (true)
            void* edx_4 = &ecx_6[1]
            ecx_6 = *ecx_6
            
            if (result_2 u>= edx_4 && result_2 u< edx_4 + edi_2)
                esi_1[4]
                
                if (mods.dp.d(sx.q(result_2 - edx_4), esi_1[4]) == 0)
                    result = result_1
                    *result = *esi_1
                    *esi_1 = result
                    data_27e7fe0 = 0
                    break
                
                result_2 = result_1
            
            if (ecx_6 == 0)
                goto label_4d89fc
    
    return result
}
