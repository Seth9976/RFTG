// 函数名称: sub_51ea30
// 虚拟地址: 0x51ea30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_51ea30(int32_t* arg1)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    int32_t result = sub_51e9b0(esi)
    
    while (esi[1] != 0)
        int32_t* ecx_1 = esi[1]
        ecx_1[7] = ecx_1
        int32_t* esi_1 = data_26a651c
        
        if (esi_1 == 0)
        label_51eaad:
            sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 
                0x10c, "XTypedAllocator<struct RTreeNode>::Free")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        while (true)
            void* edx_1 = &esi_1[1]
            esi_1 = *esi_1
            
            if (ecx_1 u>= edx_1 && ecx_1 u< edx_1 + data_26a6520 * 0x24)
                int32_t eax_4
                int32_t edx_2
                edx_2:eax_4 = sx.q(ecx_1 - edx_1)
                result = divs.dp.d(edx_2:eax_4, 0x24)
                
                if (mods.dp.d(edx_2:eax_4, 0x24) == 0)
                    break
            
            if (esi_1 == 0)
                goto label_51eaad
        
        int32_t edx_4 = data_26a6518
        data_26a6524 -= 1
        esi = arg1
        *ecx_1 = edx_4
        data_26a6518 = ecx_1
    
    *esi = 0
    esi[1] = 0
    return result
}
